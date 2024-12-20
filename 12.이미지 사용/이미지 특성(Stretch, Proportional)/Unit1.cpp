//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int StretchOn=0,ProportionalOn=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(StretchOn==0)
	{
		Button1->Caption="Stretch Off";
		Image1->Stretch=true;
		StretchOn=1;
	}
	else
	{
		Button1->Caption="Stretch On";
		StretchOn=0;
		Image1->Stretch=false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	if(ProportionalOn==0)
	{
		Button2->Caption="ProportionalOff";
		Image1->Proportional=true;
		ProportionalOn=1;
	}
	else
	{
		Button2->Caption="ProportionalOn";
		ProportionalOn=0;
		Image1->Proportional=false;
	}
}
//---------------------------------------------------------------------------
