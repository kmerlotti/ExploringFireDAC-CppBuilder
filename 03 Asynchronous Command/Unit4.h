//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
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
#include <FireDAC.VCLUI.Async.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *Open;
	TDBGrid *DBGrid1;
	TRadioGroup *RadioGroup1;
	TProgressBar *ProgressBar1;
	TFDConnection *FDConnection1;
	TFDPhysMSSQLDriverLink *FDPhysMSSQLDriverLink1;
	TFDGUIxWaitCursor *FDGUIxWaitCursor1;
	TFDQuery *FDQuery1;
	TTimer *Timer1;
	TFDGUIxAsyncExecuteDialog *FDGUIxAsyncExecuteDialog1;
	TDataSource *DataSource1;
	void __fastcall FDQuery1AfterGetRecords(TFDDataSet *DataSet);
	void __fastcall FDQuery1AfterOpen(TDataSet *DataSet);
	void __fastcall FDQuery1BeforeOpen(TDataSet *DataSet);
	void __fastcall OpenClick(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
