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


void __fastcall TForm1::Edit2KeyPress(TObject *Sender, char &Key)//key는 키보드를 누를 떄마다 작동
{
    if(Key==0xd)//0xd는 엔터키
    {
        Memo1->Lines->Add(Edit2->Text); //엔터 누를때 edit1 문자 메모에 추가
        Edit2->Text="";
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    Memo1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    int i=Memo1->Text.Pos(Edit1->Text);
    if(i>0)
    {
        ShowMessage(Edit1->Text+"은 있습니다");
    }
    else
    {
        ShowMessage(Edit1->Text+"은 없습니다");
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
    Label1->Caption=Memo1->Text.Length();//length는 총 길이  즉 메모의 총 길이    
}
//---------------------------------------------------------------------------
