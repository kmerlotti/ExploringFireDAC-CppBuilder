//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
  int i;

  FDConnection1->ExecSQL("delete from TabelaInsert");

  Button3->Caption = "Difference: ";
  FDQuery1->SQL->Text = "insert into TabelaInsert (Id, Descricao) values(:Id, :Descricao)";

  int OldTime = GetTickCount();
  for (i = 0; i < SpinEdit1->Value; i++) {
	  FDQuery1->Params->Items[0]->Value = i;
	  FDQuery1->Params->Items[1]->Value = "Record - " + IntToStr(i);
	  FDQuery1->ExecSQL();
  }
  int Dif = GetTickCount() - OldTime;

  Edit1->Text = IntToStr(Dif);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button2Click(TObject *Sender)
{
  int i;

  FDConnection1->ExecSQL("delete from TabelaInsert");

  Button3->Caption = "Difference: ";
  FDQuery1->SQL->Text = "insert into TabelaInsert (Id, Descricao) values(:Id, :Descricao)";
  FDQuery1->Params->ArraySize = SpinEdit1->Value;

  int OldTime = GetTickCount();
  for (i = 0; i < SpinEdit1->Value; i++) {
	  FDQuery1->Params->Items[0]->AsIntegers[i-1] = i;
	  FDQuery1->Params->Items[1]->AsStrings[i-1] = "Record - " + IntToStr(i);
  }
  FDQuery1->Execute(FDQuery1->Params->ArraySize);
  int Dif = GetTickCount() - OldTime;

  Edit2->Text = IntToStr(Dif);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button3Click(TObject *Sender)
{
  int Time1, Time2;

  Time1 = StrToInt(Edit1->Text);
  Time2 = StrToInt(Edit2->Text);
  Button3->Caption = "Difference: " + FormatFloat("#0.00%", (Time1-Time2)*100/Time1);
}
//---------------------------------------------------------------------------
