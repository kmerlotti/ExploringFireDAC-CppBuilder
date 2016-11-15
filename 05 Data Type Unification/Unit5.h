//---------------------------------------------------------------------------

#ifndef Unit5H
#define Unit5H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
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
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
enum class TDBType{
	Interbase,
	SqlServer
};

class TForm5 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TDBGrid *DBGrid1;
	TFDConnection *FDConnection1;
	TFDGUIxWaitCursor *FDGUIxWaitCursor1;
	TFDPhysMSSQLDriverLink *FDPhysMSSQLDriverLink1;
	TFDPhysIBDriverLink *FDPhysIBDriverLink1;
	TDataSource *DataSource1;
	TFDQuery *FDQuery1;
	TMemo *Memo1;
	TMemo *Memo2;
	TSQLTimeStampField *FDQuery1CAMPO01;
	TFloatField *FDQuery1CAMPO02;
	TFloatField *FDQuery1CAMPO03;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
    void GetData(TDBType DBType);
public:		// User declarations
	__fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
