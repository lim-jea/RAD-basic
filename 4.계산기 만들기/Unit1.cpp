//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int num=1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(num==1)
	{
		Button1->Caption="-";
		num=2;
	}
	else if(num==2)
	{
		 Button1->Caption="*";
		 num=3;
	}
	else if(num==3)
	{
		 Button1->Caption="/";
		 num=4;
	}
	else
	{
		 Button1->Caption="+";
		 num=1;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int num1,num2,result,leftover;
	num1=StrToInt(Edit1->Text);
	num2=StrToInt(Edit2->Text);

	if(num==1)
	{
		result=num1+num2;
	}
	else if(num==2)
	{
		 result=num1-num2;
	}
	else if(num==3)
	{
		result=num1*num2;
	}
	else
	{
		 result=num1/num2;
		 leftover=num1%num2;
		 Edit4->Text=leftover;
	}
	Edit3->Text=result;

}
//---------------------------------------------------------------------------
