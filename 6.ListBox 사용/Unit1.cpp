//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int itemMany=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	ListBox1->Items->Add(Edit1->Text);
	itemMany++;
	Label2->Caption=itemMany;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	if(-1==ListBox1->Items->IndexOf(Edit1->Text))   //어떤 내용의 아이템의 인덱스를 찾는다. 없다면 -1이 결과로 나온다.
	{
		ShowMessage("없다.");
	}
	else
	{
		ShowMessage("있다.");
	}


}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	itemMany--;
	Label2->Caption=itemMany;

	ListBox1->Items->Delete(ListBox1->ItemIndex ); //아이템 삭제 (현재 선택된 아이템 인덱스)
}
//---------------------------------------------------------------------------

