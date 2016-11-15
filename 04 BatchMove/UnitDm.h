//---------------------------------------------------------------------------

#ifndef UnitDmH
#define UnitDmH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.BatchMove.DataSet.hpp>
#include <FireDAC.Comp.BatchMove.hpp>
#include <FireDAC.Comp.BatchMove.Text.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.Comp.UI.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.IB.hpp>
#include <FireDAC.Phys.IBDef.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.MSSQL.hpp>
#include <FireDAC.Phys.MSSQLDef.hpp>
#include <FireDAC.Phys.ODBCBase.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
//---------------------------------------------------------------------------
class TDtm : public TDataModule
{
__published:	// IDE-managed Components
	TFDBatchMove *FDBatchMove1;
	TFDBatchMoveDataSetReader *FDBatchMoveDataSetReader1;
	TFDConnection *FDConnMSSQL;
	TFDQuery *SqlClientes;
	TIntegerField *SqlClientesId;
	TStringField *SqlClientesNome;
	TWideStringField *SqlClientesDataNascimento;
	TFDBatchMoveTextWriter *FDBatchMoveTextWriter1;
	TFDGUIxWaitCursor *FDGUIxWaitCursor1;
	TFDPhysMSSQLDriverLink *FDPhysMSSQLDriverLink1;
	TFDQuery *SqlClientes1;
	TFDConnection *FDConnINTERBASE;
	TFDBatchMoveTextReader *FDBatchMoveTextReader1;
	TFDBatchMoveDataSetWriter *FDBatchMoveDataSetWriter1;
	TFDBatchMoveDataSetReader *FDBatchMoveDataSetReader2;
	TFDBatchMoveDataSetWriter *FDBatchMoveDataSetWriter2;
	void __fastcall FDBatchMove1Progress(TObject *ASender, TFDBatchMovePhase APhase);


private:	// User declarations
public:		// User declarations
	__fastcall TDtm(TComponent* Owner);

	void GetData();
	void TableToTxt();
	void TxtToTable();
	void TableToTable();
	void EmptyInterbaseTable();
};
//---------------------------------------------------------------------------
extern PACKAGE TDtm *Dtm;
//---------------------------------------------------------------------------
#endif
