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
		When="����";
	}
	else if(RadioButton2->Checked==true)
	{
		When="�����";
	}
	else if(RadioButton3->Checked==true)
	{
		When="�Ͽ���";
	}
	else
	{
		ShowMessage("�ֱ⸦ ������ �ּ���");
    }
	ListBox1->Items->Add(ComboBox1->Text+"/"+When);
}
//---------------------------------------------------------------------------
