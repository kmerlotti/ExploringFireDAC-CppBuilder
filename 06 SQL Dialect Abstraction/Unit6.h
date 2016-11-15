//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
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
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
enum class TDBType{
	Interbase,
	SqlServer
};

class TForm6 : public TForm
{
__published:	// IDE-managed Components
	TSplitter *Splitter1;
	TDBGrid *DBGrid1;
	TPanel *Panel1;
	TButton *Button1;
	TButton *Button2;
	TLinkLabel *LinkLabel1;
	TMemo *Memo1;
	TFDConnection *FDConnection1;
	TFDQuery *FDQuery1;
	TFDPhysMSSQLDriverLink *FDPhysMSSQLDriverLink1;
	TFDPhysIBDriverLink *FDPhysIBDriverLink1;
	TFDGUIxWaitCursor *FDGUIxWaitCursor1;
	TDataSource *DataSource1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall LinkLabel1LinkClick(TObject *Sender, const UnicodeString Link, TSysLinkType LinkType);

private:	// User declarations
    void GetData(TDBType DBType);
public:		// User declarations
	__fastcall TForm6(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm6 *Form6;
//---------------------------------------------------------------------------
#endif
