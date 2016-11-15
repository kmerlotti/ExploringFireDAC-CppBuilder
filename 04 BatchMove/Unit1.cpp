//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "UnitDm.h"
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
void TForm1::UpdateProgress(bool Activate){
  if (Activate) {
	  ProgressBar1->Style = pbstMarquee;
  } else {
      ProgressBar1->Style = pbstNormal;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  Dtm->GetData();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
  Dtm->TableToTxt();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
  Dtm->TxtToTable();
  Dtm->GetData();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
  Dtm->TableToTable();
  Dtm->GetData();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Clear1Click(TObject *Sender)
{
  Dtm->EmptyInterbaseTable();
}
//---------------------------------------------------------------------------

