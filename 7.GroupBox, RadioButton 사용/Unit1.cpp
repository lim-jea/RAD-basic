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
	String sex,bloodType;
	if(RadioButton1->Checked==true)         //하나의 그룹박스 내에서의 라디오 버튼은 하나만 선택 된다.
	{
		sex="남성";
	}
	else
	{
		sex="여성";
	}

	if(RadioButton3->Checked==true)
	{
		bloodType="A";
	}
	else if(RadioButton4->Checked==true)
	{
		bloodType="B";
	}
	else if(RadioButton5->Checked==true)
	{
		bloodType="O";
	}
	else
	{
		bloodType="AB";
    }
	ListBox1->Items->Add(Edit1->Text+"/"+Edit2->Text+"/"+sex+"/"+bloodType);
}
//---------------------------------------------------------------------------
