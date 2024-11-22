//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int ConnectNum=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientConnect(TObject *Sender, TCustomWinSocket *Socket)

{
    //port에 임의의 숫자 지정하기
	ListBox1->Items->Add(Socket->RemoteAddress);
	ConnectNum++;
    ShowMessage("클라이언트와 연결되었습니다.");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Label2->Caption = "내 IP : "+IdIPWatch1->LocalIP();
	//Label1에 서버컴퓨터의 현재 연결 IP 보이기
    //내 IP 프로그램 실행 시 항상 보이기
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientDisconnect(TObject *Sender, TCustomWinSocket *Socket)

{
	ListBox1->Items->Delete(ListBox1->Items->IndexOf(Socket->RemoteAddress));
	//연결 해제된 클라이언트 IP 목록에서 삭제
    ShowMessage("연결이 해제되었습니다.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender, TCustomWinSocket *Socket)

{
	int i;
	AnsiString Read;    //AnsiString == 한글 전송 시 일반 String보다 잘 안깨짐
	//서버로 들어온 값을 읽을 변수 선언
	Read = Socket->ReceiveText();
	//서버로 들어온 값을 Read 변수에 대입
	Memo1->Lines->Add(Read);
	for (i = 0; i < ConnectNum; i++)
	{
		ServerSocket1->Socket->Connections[i]->SendText(Read);
		//서버에 연결된 IP로 받은 데이터 전송
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	if(Key==13) //13은 enter의 키보드 번호
	{
		Button1->Click();
        Key=0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int i;
	AnsiString N;
	if(Edit2->Text=="")
	{
		N="???";
	}
	else
	{
		N=Edit2->Text;
	}

	for(i=0;i<ConnectNum;i++)
	{
		ServerSocket1->Socket->Connections[i]->SendText(N+": "+Edit1->Text);
		//서버에 연결된 클라이언트에게 지정한 닉네임과 입력 내용 전송
	}
	Memo1->Lines->Add(N+": "+Edit1->Text);
	//대화창에도 내가 보낸 내용 추가
	Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	ServerSocket1->Port=StrToInt(Edit3->Text);
    ServerSocket1->Active=true;
}
//---------------------------------------------------------------------------

