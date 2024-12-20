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
	int num;
	if(ComboBox1->Text=="검색")
	{
		num=Memo1->Text.Pos(Edit1->Text);       //제일 앞의 위치 0을 기준,원하는 문자의 위치를 정수 값으로 알려줌
		//i = Memo1->Text.Pos(검색한 내용);
		ShowMessage(num);
	}
	else if(ComboBox1->Text=="추가")
	{
		//원하는 내용 추가
		Memo1->Text=Memo1->Text.Insert(Edit3->Text,StrToInt(Edit2->Text));
		//Memo1->Text=Memo1->Text.Insert(추가할 내용, 추가할 위치);
		ShowMessage(Memo1->Text);
	}
	else if(ComboBox1->Text=="삭제")
	{
		//원하는 자리의 문자 삭제
		Memo1->Text=Memo1->Text.Delete(StrToInt(Edit2->Text),StrToInt(Edit3->Text));
        //Memo1->Text=Memo1->Text.Delete(시작할 위치, 삭제할 바이트 수);
		ShowMessage(Memo1->Text);
	}
	else if(ComboBox1->Text=="수정")
	{
		num=Memo1->Text.Pos(Edit1->Text);
		int len=Edit1->Text.Length();
		Memo1->Text=Memo1->Text.Delete(num,len);
		Memo1->Text=Memo1->Text.Insert(Edit3->Text,num);

		//원하는 내용만 남기기
        //Memo1->Text=Memo1->Text.SubString(시작 위치, 남길 바이트 수);
	}

}
//---------------------------------------------------------------------------
