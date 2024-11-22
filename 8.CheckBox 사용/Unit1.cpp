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
	int SAN=0;
	if(CheckBox1->Checked==true)
	{
		SAN++;
	}
	if(CheckBox2->Checked==true)
	{
		SAN++;
	}
	if(CheckBox3->Checked==true)
	{
		SAN++;
	}
	if(CheckBox4->Checked==true)
	{
		SAN++;
	}
	if(CheckBox5->Checked==true)
	{
		SAN++;
	}

	if(SAN>=3)
	{
		ShowMessage("크툴루가 당신을 부른다.");
	}
	else
	{
        ShowMessage("가죽 클럽은 두 블럭 아래야");
    }

}
//---------------------------------------------------------------------------
