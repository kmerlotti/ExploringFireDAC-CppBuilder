//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label4;
	TLabel *Label5;
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TButton *Button1;
	TButton *Button2;
	TEdit *Edit1;
	TEdit *Edit2;
	TDBGrid *DBGrid4;
	TDBGrid *DBGrid5;
	TDataSource *DataSource1;
	TDataSource *DataSource2;
	TDataSource *DataSource4;
	TDataSource *DataSource5;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
