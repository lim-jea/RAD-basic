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
		Memo1->Lines->Add(Edit1->Text+"��° ���");
	}
	catch(const Exception & e)
	{
		Memo1->Lines->Add(IntToStr(befor+1)+"��° ���� \r\n"+e.Message.c_str()+"\n");
	}

	/*try catch��?
	����ó�� �� ���α׷��� �ۼ��� �� ������ �� �ִ� ������ ���� ���ܻ�Ȳ��
	��ó�ϰ� ���α׷� ���� Ȥ�� ����� ���� ���� �ʴ� ������ �����ϱ� ����
	��� �Դϴ�

	try
	{
		������ �ǽ� ���� �ڵ�(������ �߻��� ���ɼ��� �ִ� �κ��� ���δ� �κ�)
	}
	catch(const  Exception & e )
	{
		������ �߻����� �� ������ �ڵ�(������ ���� �� ���� X)
	}

	Exception & e :���� ������ e ������ ��´�.
	e.Message.c_str()
	e�� ��� ������ String ������ ��ȯ�Ѵ�.
	*/
}
//---------------------------------------------------------------------------
