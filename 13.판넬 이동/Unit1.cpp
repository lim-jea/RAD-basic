//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int P1Up=1,P2Up=1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel2Click(TObject *Sender)
{
	if(P2Up==1)
	{
		Panel2->Top=400;
		P2Up=0;
	}
	else
	{
		Panel1->Top=0;
		Panel2->Top=40;
		P2Up=1;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Panel1Click(TObject *Sender)
{
	if(P1Up==1)
	{
		Panel1->Top=360;
		Panel2->Top=400;
		P1Up=0;
	}
	else
	{
		Panel1->Top=0;
		P1Up=1;
    }
}
//---------------------------------------------------------------------------
