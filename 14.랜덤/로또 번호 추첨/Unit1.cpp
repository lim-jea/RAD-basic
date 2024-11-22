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
	int RandomNum[6];
	randomize();
	for (int i=0; i <= 5; i++) {
		RandomNum[i]= random(43);       //보통 0에서 숫자까지기에 1부터 하려면 랜덤 후 +1을 해준다.
	}
	Edit1->Text=RandomNum[0];
	Edit2->Text=RandomNum[1];
	Edit3->Text=RandomNum[2];
	Edit4->Text=RandomNum[3];
	Edit5->Text=RandomNum[4];
	Edit6->Text=RandomNum[5];

	String result="";
	for (int i = 0; i < 6; i++) {
		result=result+" "+RandomNum[i];
	}
	Memo1->Lines->Add(result);
}
//---------------------------------------------------------------------------
