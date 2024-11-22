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
	String When;
	if(RadioButton1->Checked==true)
	{
		When="평일";
	}
	else if(RadioButton2->Checked==true)
	{
		When="토요일";
	}
	else if(RadioButton3->Checked==true)
	{
		When="일요일";
	}
	else
	{
		ShowMessage("주기를 선택해 주세요");
    }
	ListBox1->Items->Add(ComboBox1->Text+"/"+When);
}
//---------------------------------------------------------------------------
