//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"  //*********이 코드를 통해 unit1에서 unit2에 있는 Form2를 사용할 수 있게 한다.
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
	Form2->sum=StrToInt(Edit1->Text)+StrToInt(Edit2->Text);
	//Form2->Edit1->Text=Form2->sum;
	Form2->Show();               //File-New-VCL Form으로 새로운 폼을 만들어서 사용한다.
								//이때 새로운 폼을 만드는 것이 아닌, Show()즉, 안 보이던 것을 보이게 할 뿐이고,
                                // Form2 자체는 이미 실행 시에 이미 만들어져 있다.
}
//---------------------------------------------------------------------------

