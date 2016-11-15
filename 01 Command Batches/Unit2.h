//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.Comp.UI.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
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
class TDataModule2 : public TDataModule
{
__published:	// IDE-managed Components
	TFDQuery *FDQuery1;
	TFDAutoIncField *FDQuery1Id;
	TStringField *FDQuery1Nome;
	TWideStringField *FDQuery1DataNascimento;
	TFDQuery *FDQuery2;
	TFDAutoIncField *FDQuery2Id;
	TStringField *FDQuery2Produto;
	TBCDField *FDQuery2Valor;
	TFDQuery *FDQuery4;
	TFDConnection *FDConnection1;
	TFDPhysMSSQLDriverLink *FDPhysMSSQLDriverLink1;
	TFDGUIxWaitCursor *FDGUIxWaitCursor1;
	TFDMemTable *FDMemTable1;
	TFDMemTable *FDMemTable2;
	TFDMemTable *FDMemTable4;
	TFDMemTable *FDMemTable5;
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule2 *DataModule2;
//---------------------------------------------------------------------------
#endif
