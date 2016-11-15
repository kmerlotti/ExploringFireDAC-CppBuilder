//---------------------------------------------------------------------------


#pragma hdrstop

#include "UnitDm.h"
#include "Unit1.h"
#include "FireDAC.Comp.Batchmove.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDtm *Dtm;
//---------------------------------------------------------------------------
__fastcall TDtm::TDtm(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void TDtm::GetData(){
	SqlClientes->Close();
	SqlClientes1->Close();
	SqlClientes->Open();
	SqlClientes1->Open();
}
//---------------------------------------------------------------------------
void TDtm::TableToTxt(){
	FDBatchMove1->Reader = *FDBatchMoveDataSetReader1;
	FDBatchMove1->Writer = *FDBatchMoveTextWriter1;
	FDBatchMove1->Execute();
}
//---------------------------------------------------------------------------
void TDtm::TxtToTable(){
	EmptyInterbaseTable();
	FDBatchMove1->Reader = *FDBatchMoveTextReader1;
	FDBatchMove1->Writer = *FDBatchMoveDataSetWriter1;
	FDBatchMove1->GuessFormat();
	FDBatchMove1->Execute();
}
//---------------------------------------------------------------------------
void TDtm::TableToTable(){
	EmptyInterbaseTable();
	FDBatchMove1->Reader = *FDBatchMoveDataSetReader2;
	FDBatchMove1->Writer = *FDBatchMoveDataSetWriter2;
	FDBatchMove1->GuessFormat();
	FDBatchMove1->Execute();
}
//---------------------------------------------------------------------------
void TDtm::EmptyInterbaseTable(){
	FDConnINTERBASE->ExecSQL("delete from clientes1");
    GetData();
}
//---------------------------------------------------------------------------
void __fastcall TDtm::FDBatchMove1Progress(TObject *ASender, TFDBatchMovePhase APhase)

{
	switch (APhase){
		case TFDBatchMovePhase::psPreparing: break;
		case TFDBatchMovePhase::psStarting: Form1->UpdateProgress(True); break;
		case TFDBatchMovePhase::psProgress: Application->ProcessMessages(); break;
		case TFDBatchMovePhase::psFinishing: Form1->UpdateProgress(False); break;
		case TFDBatchMovePhase::psUnpreparing: break;
	}
}
//---------------------------------------------------------------------------
