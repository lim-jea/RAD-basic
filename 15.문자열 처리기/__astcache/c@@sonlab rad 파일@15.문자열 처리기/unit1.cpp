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
	int num;
	if(ComboBox1->Text=="검색")
	{
		num=Memo1->Text.Pos(Edit1->Text);
		ShowMessage(num);
	}
	else if(ComboBox1->Text=="추가")
	{
		Memo1->Text=Memo1->Text.Insert(Edit3->Text,StrToInt(Edit2->Text));
		ShowMessage(Memo1->Text);
	}
	else if(ComboBox1->Text=="삭제")
	{
		Memo1->Text=Memo1->Text.Delete(StrToInt(Edit2->Text),StrToInt(Edit3->Text));
		ShowMessage(Memo1->Text);
	}
	else if(ComboBox1->Text=="수정")
	{
		num=Memo1->Text.Pos(Edit1->Text);
		int len=Edit1->Text.length;
		Memo1->Text=Memo1->Text.Delete(StrToInt(Edit1->Text),len);
		Memo1->Text=Memo1->Text.Insert()
	}

}
//---------------------------------------------------------------------------
