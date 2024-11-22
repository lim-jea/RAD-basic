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
	int randomNum;
	randomize();    //난수 생성 초기화, 매번 실행시마다 다른 수가 나오게 한다.
	randomNum=random(100);       //0~숫자 미만의 난수를 생성한다.
	ShowMessage(randomNum);
}
//---------------------------------------------------------------------------
