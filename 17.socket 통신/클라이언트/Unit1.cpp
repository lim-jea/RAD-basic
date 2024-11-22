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
void __fastcall TForm1::ClientSocket1Connect(TObject *Sender, TCustomWinSocket *Socket)

{
	//ClientSocket의 port에 서버와 같은 port 숫자 입력하기
	//ClientSocket의 Host에 서버의 아이피를 입력하기
	ShowMessage("연결되었습니다.");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ClientSocket1Read(TObject *Sender, TCustomWinSocket *Socket)

{
	Memo1->Lines->Add(Socket->ReceiveText());
    //받은 데이터를 메모장에 출력
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	ClientSocket1->Socket->SendText(Edit1->Text+": "+Edit2->Text);
    //닉네임과 보낼 내용을 같이 전송
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	ClientSocket1->Port=StrToInt(Edit4->Text);
	ClientSocket1->Host=Edit3->Text;
    ClientSocket1->Active=true;
}
//---------------------------------------------------------------------------
