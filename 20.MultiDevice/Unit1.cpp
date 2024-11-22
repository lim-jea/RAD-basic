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
	/*컴포넌트에서 바로 데이터를 가져와서 쓰는 것은 좋지 못하다
컴포넌트에서 데이터를 가져와 변수에 담고, 이를 활용하는 것이 좋다.
또한, 샘플을 이용할 줄 알아야 하며, 선언과 동시에 값을 넣는 것은 좋지 않다*/
	name=Edit1->Text;
	age=ComboBox1->Selected->Text;   //Selected를 넣어 줘야 콤보박스에서 선택된 아이템에 관한 데이터를 다룰 수 있다.
	if(RadioButton1->IsChecked)
	{
		Gender="남";
	}
	else
	{
		Gender="여";
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
