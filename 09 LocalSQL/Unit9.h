//---------------------------------------------------------------------------

#ifndef Unit9H
#define Unit9H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Data.Bind.Grid.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
#include <Vcl.Bind.Grid.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm9 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TStringGrid *StringGrid1;
	TStringGrid *StringGridBindSourceDB2;
	TStringGrid *StringGridBindSourceDB3;
	TButton *Button2;
	TButton *Button3;
	TBindingsList *BindingsList1;
	TLinkGridToDataSource *LinkGridToDataSourceBindSourceDB1;
	TLinkGridToDataSource *LinkGridToDataSourceBindSourceDB2;
	TLinkGridToDataSource *LinkGridToDataSourceBindSourceDB3;
	TBindSourceDB *BindSourceDB1;
	TBindSourceDB *BindSourceDB2;
	TBindSourceDB *BindSourceDB3;
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm9(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm9 *Form9;
//---------------------------------------------------------------------------
#endif
