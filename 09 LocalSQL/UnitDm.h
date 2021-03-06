//---------------------------------------------------------------------------

#ifndef UnitDmH
#define UnitDmH
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
#include <FireDAC.Phys.IB.hpp>
#include <FireDAC.Phys.IBBase.hpp>
#include <FireDAC.Phys.IBDef.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.MSSQL.hpp>
#include <FireDAC.Phys.MSSQLDef.hpp>
#include <FireDAC.Phys.ODBCBase.hpp>
#include <FireDAC.Phys.SQLite.hpp>
#include <FireDAC.Phys.SQLiteDef.hpp>
#include <FireDAC.Phys.SQLiteVDataSet.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.ExprFuncs.hpp>
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
	TFDConnection *FDConnINTERBASE;
	TFDConnection *FDConnMSSQL;
	TFDConnection *FDConnection1;
	TFDQuery *FDQuery1;
	TFDLocalSQL *FDLocalSQL1;
	TFDPhysSQLiteDriverLink *FDPhysSQLiteDriverLink1;
	TFDPhysMSSQLDriverLink *FDPhysMSSQLDriverLink1;
	TFDPhysIBDriverLink *FDPhysIBDriverLink1;
	TFDGUIxWaitCursor *FDGUIxWaitCursor1;
	TFDQuery *sqlCustomers;
	TFDQuery *sqlSales;
private:	// User declarations
public:		// User declarations
	__fastcall TDtm(TComponent* Owner);
	void GetCustomers();
	void GetSales();
    void GetSalesInnerCustomers();
};
//---------------------------------------------------------------------------
extern PACKAGE TDtm *Dtm;
//---------------------------------------------------------------------------
#endif
