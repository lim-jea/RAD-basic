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
	//이미지 리스트 사용법 == 프로퍼티 아래의 ImageList Editor를 사용해서 이미지 추가
	//들어갈 이미지들의 크기는 이미지리스트의 프로퍼티 중 height, width를 사용해야 한다.
	//ImageList1->GetBitmap(0,Image1->Picture->Bitmap);
	ImageList1->GetBitmap(1,Image1->Picture->Bitmap);
}
//---------------------------------------------------------------------------
