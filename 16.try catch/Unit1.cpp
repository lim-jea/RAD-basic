//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int befor;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	try
	{
		befor=StrToInt(Edit1->Text);
		Memo1->Lines->Add(Edit1->Text+"번째 통과");
	}
	catch(const Exception & e)
	{
		Memo1->Lines->Add(IntToStr(befor+1)+"번째 에러 \r\n"+e.Message.c_str()+"\n");
	}

	/*try catch란?
	예외처리 란 프로그램을 작성할 때 발행할 수 있는 에러에 대한 예외상황을
	대처하고 프로그램 종료 혹은 제대로 실행 되지 않는 현상을 방지하기 위한
	방법 입니다

	try
	{
		오류가 의심 가는 코드(오류가 발생할 가능성이 있는 부분을 감싸는 부분)
	}
	catch(const  Exception & e )
	{
		오류가 발생했을 때 수행할 코드(오류가 없을 시 실행 X)
	}

	Exception & e :오류 내용을 e 변수에 담는다.
	e.Message.c_str()
	e에 담긴 오류를 String 형으로 변환한다.
	*/
}
//---------------------------------------------------------------------------
