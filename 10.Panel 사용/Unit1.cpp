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
    Panel1->Visible=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Panel1->Visible=false;
    ShowMessage(Edit1->Text+"�� \n ���̵�:"+Edit2->Text+"\n �н�����:"+Edit3->Text+"�� ȸ������ �Ǿ����ϴ�.");
}
//---------------------------------------------------------------------------
