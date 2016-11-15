//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit9.h"
#include "UnitDm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button2Click(TObject *Sender)
{
  Dtm->GetSales();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button1Click(TObject *Sender)
{
  Dtm->GetCustomers();
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button3Click(TObject *Sender)
{
  Dtm->GetSalesInnerCustomers();
}
//---------------------------------------------------------------------------
