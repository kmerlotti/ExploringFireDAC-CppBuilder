//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
  int OldTime;
  int Dif;

  DataModule2->FDConnection1->Close();

  if (DataModule2->FDMemTable1->Active) {
	DataModule2->FDMemTable1->EmptyDataSet();
  }
  DataModule2->FDMemTable1->Close();
  if (DataModule2->FDMemTable2->Active) {
	DataModule2->FDMemTable2->EmptyDataSet();
  }
  DataModule2->FDMemTable2->Close();

  OldTime = GetTickCount();
  DataModule2->FDQuery1->Open();
  DataModule2->FDQuery2->Open();

  Dif = GetTickCount()-OldTime;
  Edit1->Text = IntToStr(Dif);

  DataModule2->FDMemTable1->Data = DataModule2->FDQuery1->Data;
  DataModule2->FDMemTable2->Data = DataModule2->FDQuery2->Data;

  TVarRec args[1] = {DataSource1->DataSet->RecordCount};
  Label1->Caption = Format("Record Count: %d", args, 0);
  args[0] = DataSource2->DataSet->RecordCount;
  Label2->Caption = Format("Record Count: %d", args, 0);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
  int OldTime;
  int Dif;

  DataModule2->FDConnection1->Close();
  DataModule2->FDQuery4->FetchOptions->AutoClose = False; //this is mandatory

  if (DataModule2->FDMemTable4->Active) {
	DataModule2->FDMemTable4->EmptyDataSet();
  }
  DataModule2->FDMemTable4->Close();
  if (DataModule2->FDMemTable5->Active) {
	DataModule2->FDMemTable5->EmptyDataSet();
  }
  DataModule2->FDMemTable5->Close();

  OldTime = GetTickCount();
  DataModule2->FDQuery4->Open();
  Dif = GetTickCount()-OldTime;
  Edit2->Text = IntToStr(Dif);

  DataModule2->FDMemTable4->Data = DataModule2->FDQuery4->Data;
  DataModule2->FDQuery4->NextRecordSet();
  DataModule2->FDMemTable5->Data = DataModule2->FDQuery4->Data;

  TVarRec args[1] = {DataSource4->DataSet->RecordCount};
  Label4->Caption = Format("Record Count: %d", args, 0);
  args[0] = DataSource5->DataSet->RecordCount;
  Label5->Caption = Format("Record Count: %d", args, 0);
}
//---------------------------------------------------------------------------

