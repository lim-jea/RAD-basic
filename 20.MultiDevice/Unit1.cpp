//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	String personal_things,name,age,Gender, chosen="";
	/*������Ʈ���� �ٷ� �����͸� �����ͼ� ���� ���� ���� ���ϴ�
������Ʈ���� �����͸� ������ ������ ���, �̸� Ȱ���ϴ� ���� ����.
����, ������ �̿��� �� �˾ƾ� �ϸ�, ����� ���ÿ� ���� �ִ� ���� ���� �ʴ�*/
	name=Edit1->Text;
	age=ComboBox1->Selected->Text;   //Selected�� �־� ��� �޺��ڽ����� ���õ� �����ۿ� ���� �����͸� �ٷ� �� �ִ�.
	if(RadioButton1->IsChecked)
	{
		Gender="��";
	}
	else
	{
		Gender="��";
	}
	personal_things=name+" "+age+" "+Gender;
	if(CheckBox1->IsChecked)
	{
		chosen+=" "+CheckBox1->Text;
	}
	if(CheckBox2->IsChecked)
	{
		chosen+=" "+CheckBox2->Text;
	}
	if(CheckBox3->IsChecked)
	{
		chosen+=" "+CheckBox3->Text;
	}
	if(CheckBox4->IsChecked)
	{
		chosen+=" "+CheckBox4->Text;
	}

	personal_things+=chosen;
	ShowMessage(personal_things);
	//ListBox1->items->Add(+Gender+)

}
//---------------------------------------------------------------------------
