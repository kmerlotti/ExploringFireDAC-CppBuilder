//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------

#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void TForm5::GetData(TDBType DBType){
	FDConnection1->Close();
	switch (DBType) {
		case TDBType::Interbase:
			FDConnection1->Params->Values["DriverID"] = "IB";
			FDConnection1->Params->Values["Database"] = "C:\\Users\\Kelver\\Desktop\\CodeRage XI\\FireDAC\\DB\\FireDAC.GDB";
			FDConnection1->Params->Values["Protocol"] = "TCPIP";
			FDConnection1->Params->Values["Server"] = "localhost";
			FDConnection1->Params->Values["User_Name"] = "sysdba";
			FDConnection1->Params->Values["Password"] = "masterkey";
			break;
		case TDBType::SqlServer:
			FDConnection1->Params->Values["DriverID"] = "MSSQL";
			FDConnection1->Params->Values["Database"] = "FireDAC";
			FDConnection1->Params->Values["User_Name"] = "sa";
			FDConnection1->Params->Values["Password"] = "sa123";
			FDConnection1->Params->Values["Server"] = "W7VM-BD";
			FDConnection1->Params->Values["OSAuthent"] = "No";
			break;
	}

	FDQuery1->Close();
	Application->ProcessMessages(); Sleep(500); //just to see screen updating
	FDQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
  GetData(TDBType::Interbase);
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button2Click(TObject *Sender)
{
  GetData(TDBType::SqlServer);
}
//---------------------------------------------------------------------------
