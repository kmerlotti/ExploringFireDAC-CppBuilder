//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
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
#include <FireDAC.Phys.IBDef.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Error.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <FireDAC.Phys.IBBase.hpp>
#include <FireDAC.Phys.MSSQL.hpp>
#include <FireDAC.Phys.MSSQLDef.hpp>
#include <FireDAC.Phys.ODBCBase.hpp>
//---------------------------------------------------------------------------
enum class TDBType{
	Interbase,
	SqlServer
};

class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TMemo *Memo1;
	TMemo *Memo2;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TFDConnection *FDConnection1;
	TFDQuery *FDQuery1;
	TSQLTimeStampField *FDQuery1CAMPO01;
	TSingleField *FDQuery1CAMPO02;
	TFloatField *FDQuery1CAMPO03;
	TFDGUIxErrorDialog *FDGUIxErrorDialog1;
	TFDPhysMSSQLDriverLink *FDPhysMSSQLDriverLink1;
	TFDPhysIBDriverLink *FDPhysIBDriverLink1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
private:	// User declarations
	void SetData(TDBType DBType);
public:		// User declarations
	__fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
