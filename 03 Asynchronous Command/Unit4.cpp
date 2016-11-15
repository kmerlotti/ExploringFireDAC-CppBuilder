//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FDQuery1AfterGetRecords(TFDDataSet *DataSet)
{
  if (RadioGroup1->ItemIndex == 1) {
	  ProgressBar1->Style = pbstNormal;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FDQuery1AfterOpen(TDataSet *DataSet)
{
  if (RadioGroup1->ItemIndex == 1) {
	  DataSource1->DataSet = FDQuery1;
	  FDQuery1->ResourceOptions->CmdExecMode = amBlocking;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm4::FDQuery1BeforeOpen(TDataSet *DataSet)
{
  if (RadioGroup1->ItemIndex == 1) {
	  DataSource1->DataSet = 0;
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm4::OpenClick(TObject *Sender)
{
  switch (RadioGroup1->ItemIndex) {
	case 0:
		FDQuery1->ResourceOptions->CmdExecMode = amBlocking;
		FDQuery1->ResourceOptions->CmdExecTimeout = MaxInt;
		break;
	case 1:
		FDQuery1->ResourceOptions->CmdExecMode = amAsync;
		ProgressBar1->Style = pbstMarquee;
		break;
	case 2:
		FDQuery1->ResourceOptions->CmdExecMode = amCancelDialog;
		break;
  }

  FDQuery1->Close();
  FDQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Timer1Timer(TObject *Sender)
{
  Label1->Caption = TimeToStr(Time());
}
//---------------------------------------------------------------------------
