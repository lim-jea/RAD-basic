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
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	FDQuery1->Close();
	FDQuery1->SQL->Text="INSERT INTO book_management(book_name,writer,company,bookid,state) VALUES('"+Edit1->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"','"+Edit5->Text+"')";
	FDQuery1->ExecSQL();
	FDQuery1->SQL->Text="SELECT * FROM book_management";
	FDQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	FDQuery1->Close();
	FDQuery1->SQL->Text="SELECT * FROM book_management WHERE book_name='"+Edit1->Text+"'";
	FDQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	FDQuery1->Close();
	FDQuery1->SQL->Text="UPDATE book_management SET book_name='"+Edit1->Text+"',writer='"+Edit2->Text+"' WHERE bookid= '"+Edit4->Text+"'";
	FDQuery1->ExecSQL();
	FDQuery1->SQL->Text="SELECT * FROM book_management";
    FDQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	FDQuery1->Close();
	FDQuery1->SQL->Text="DELETE from book_management where book_name='"+Edit1->Text+"'";
	FDQuery1->ExecSQL();
	FDQuery1->SQL->Text="SELECT * FROM book_management";
	FDQuery1->Open();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	String State;
	if(RadioButton1->Checked==true)  //����
	{
		State="����";
	}
	else
	{
		State="�ݳ�";
	}

	FDQuery1->Close();
	FDQuery1->SQL->Text="UPDATE book_management SET state='"+State+"' where book_name='"+Edit1->Text+"'";
	FDQuery1->ExecSQL();
	FDQuery1->SQL->Text="SELECT * FROM book_management";
	FDQuery1->Open();
}
//---------------------------------------------------------------------------
