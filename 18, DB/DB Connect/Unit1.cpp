//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	FDQuery1->Close();
	FDQuery1->SQL->Text="INSERT INTO test1(city,man) VALUES('"+Edit1->Text+"','"+Edit2->Text+"')";
   FDQuery1->ExecSQL();
   FDQuery1->SQL->Text="select * from test1";
   FDQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	FDQuery1->Close();
	FDQuery1->SQL->Text="UPDATE test1 SET man='"+Edit2->Text+"'where city='"+Edit1->Text+"'";
	FDQuery1->ExecSQL();
	FDQuery1->SQL->Text="select * from test1";
	FDQuery1->Open();
}
//---------------------------------------------------------------------------
