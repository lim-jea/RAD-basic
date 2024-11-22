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
    //port�� ������ ���� �����ϱ�
	ListBox1->Items->Add(Socket->RemoteAddress);
	ConnectNum++;
    ShowMessage("Ŭ���̾�Ʈ�� ����Ǿ����ϴ�.");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Label2->Caption = "�� IP : "+IdIPWatch1->LocalIP();
	//Label1�� ������ǻ���� ���� ���� IP ���̱�
    //�� IP ���α׷� ���� �� �׻� ���̱�
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientDisconnect(TObject *Sender, TCustomWinSocket *Socket)

{
	ListBox1->Items->Delete(ListBox1->Items->IndexOf(Socket->RemoteAddress));
	//���� ������ Ŭ���̾�Ʈ IP ��Ͽ��� ����
    ShowMessage("������ �����Ǿ����ϴ�.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender, TCustomWinSocket *Socket)

{
	int i;
	AnsiString Read;    //AnsiString == �ѱ� ���� �� �Ϲ� String���� �� �ȱ���
	//������ ���� ���� ���� ���� ����
	Read = Socket->ReceiveText();
	//������ ���� ���� Read ������ ����
	Memo1->Lines->Add(Read);
	for (i = 0; i < ConnectNum; i++)
	{
		ServerSocket1->Socket->Connections[i]->SendText(Read);
		//������ ����� IP�� ���� ������ ����
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1KeyPress(TObject *Sender, System::WideChar &Key)
{
	if(Key==13) //13�� enter�� Ű���� ��ȣ
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
		//������ ����� Ŭ���̾�Ʈ���� ������ �г��Ӱ� �Է� ���� ����
	}
	Memo1->Lines->Add(N+": "+Edit1->Text);
	//��ȭâ���� ���� ���� ���� �߰�
	Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	ServerSocket1->Port=StrToInt(Edit3->Text);
    ServerSocket1->Active=true;
}
//---------------------------------------------------------------------------

