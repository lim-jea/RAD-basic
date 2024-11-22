//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int imageIndex=0;  // 원하는 이미지 인덱스 설정 (0부터 시작)
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
	 //왜 한 번 바뀌고 다시 바뀌지 않을까?

	 if(imageIndex==0)
	 {
		imageIndex++;
	 }
	 else if(imageIndex==1)
	 {
		imageIndex++;
	 }
	 else
	 {
		imageIndex=0;
	 }
     // ImageList의 이미지를 TImage로 로드
	  TBitmap *bitmap = new TBitmap();
	  try
	  {
		ImageList1->GetBitmap(imageIndex, bitmap);  // ImageList에서 인덱스에 해당하는 이미지를 가져옴
		Image1->Picture->Bitmap = bitmap;           // TImage에 이미지 설정
	  }
	  __finally {
		delete bitmap;  // 메모리 해제
	  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{

	 if(imageIndex==2)
	 {
		imageIndex--;
	 }
	 else if(imageIndex==1)
	 {
		imageIndex--;
	 }
	 else
	 {
		imageIndex=2;
	 }
     // ImageList의 이미지를 TImage로 로드
	  TBitmap *bitmap = new TBitmap();
	  try
	  {
		ImageList1->GetBitmap(imageIndex, bitmap);  // ImageList에서 인덱스에 해당하는 이미지를 가져옴
		Image1->Picture->Bitmap = bitmap;           // TImage에 이미지 설정
	  }
	  __finally {
		delete bitmap;  // 메모리 해제
	  }
}
//---------------------------------------------------------------------------
/*void __fastcall TForm1::ChangeImage(int imageIndex)
{
    // ImageList의 이미지를 TImage로 로드
	TBitmap *bitmap = new TBitmap();
	try
	{
		ImageList1->GetBitmap(imageIndex, bitmap);  // ImageList에서 인덱스에 해당하는 이미지를 가져옴
		Image1->Picture->Bitmap = bitmap;           // TImage에 이미지 설정
	}
	__finally {
		delete bitmap;  // 메모리 해제
	}
}     */
