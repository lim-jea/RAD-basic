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
	int a=10;
	RESTRequest1->Resource="?page=1&perPage="+IntToStr(a)+"&serviceKey=WTZOBklH9N7p5cQgZXJELykK4OW%2B9mpn940d5iSxH274ktFx2OridS9SOYBM5W6iDIu%2FlScKC%2FWigYgkpWt4EQ%3D%3D";
}
//---------------------------------------------------------------------------
