//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button2Click(TObject *Sender)
{
  int i;

  FDQuery1->Close();
  for (i = 1; i < ValueListEditor1->RowCount; i++) {
	  FDQuery1->Macros->Items[i-1]->Value =
		ValueListEditor1->Values[ValueListEditor1->Keys[i]];
  }
  FDQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FormCreate(TObject *Sender)
{
  ValueListEditor1->Strings->Clear();
  int i;
  for (i = 0; i < FDQuery1->MacroCount; i++) {
	  ValueListEditor1->InsertRow(
		FDQuery1->Macros->Items[i]->Name,
		FDQuery1->Macros->Items[i]->Value,
        True
	  );
  }
}
//---------------------------------------------------------------------------
