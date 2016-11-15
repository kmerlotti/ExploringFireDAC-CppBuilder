//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void TForm8::SetData(TDBType DBType){
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

  const String SQL_INS = "insert into Clientes values(1, 'Kelver Merlotti', '1985-11-27')";

  if (CheckBox1->Checked) //uses EFDEngineException
  {
	try {
	  FDQuery1->ExecSQL(SQL_INS);
	} catch (EFDDBEngineException& E) {
		if (E.Kind == ekUKViolated)
		{
		  if (CheckBox2->Checked) //shows FD GUI Error Dialog
		  {
			FDGUIxErrorDialog1->Execute(&E);
		  }
		  else //show a generic message
		  {
			switch (DBType){
			  case TDBType::Interbase:
				Memo1->Lines->Text = "Duplicated information - IB";
				break;
			  case TDBType::SqlServer:
				Memo2->Lines->Text = "Duplicated information - MSSQL";
				break;
			}
		  }
		}
	  }
  }
  else //does not use EFDEngineException
  {
	try {
	  FDQuery1->ExecSQL(SQL_INS);
	} catch (Exception& E){
		switch (DBType){
		  case TDBType::Interbase:
			Memo1->Lines->Text = E.Message;
			break;
		  case TDBType::SqlServer:
			Memo2->Lines->Text = E.Message;
			break;
		}
	}
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button1Click(TObject *Sender)
{
  SetData(TDBType::Interbase);
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button2Click(TObject *Sender)
{
  SetData(TDBType::SqlServer);
}
//---------------------------------------------------------------------------
void __fastcall TForm8::CheckBox1Click(TObject *Sender)
{
  CheckBox2->Enabled = CheckBox1->Checked;	
}
//---------------------------------------------------------------------------
