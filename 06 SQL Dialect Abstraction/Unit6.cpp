//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <ShellApi.h>

#include "Unit6.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void TForm6::GetData(TDBType DBType){
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
	FDQuery1->SQL->Assign(Memo1->Lines);
	FDQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
  GetData(TDBType::Interbase);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button2Click(TObject *Sender)
{
  GetData(TDBType::SqlServer);
}
//---------------------------------------------------------------------------
void __fastcall TForm6::LinkLabel1LinkClick(TObject *Sender, const UnicodeString Link,
          TSysLinkType LinkType)
{
  UnicodeString Empty = "";
  UnicodeString Command = "open";
  ShellExecute(0, Command.c_str(), Link.c_str(), Empty.c_str(), Empty.c_str(), SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

// SELECT {IF MSSQL} TOP 10 {FI}* FROM CLIENTES {IF IB} ROWS 5 {FI}
// http://docwiki.embarcadero.com/RADStudio/Berlin/en/Preprocessing_Command_Text_(FireDAC)