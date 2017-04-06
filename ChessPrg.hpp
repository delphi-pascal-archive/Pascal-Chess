// Borland C++ Builder
// Copyright (c) 1995, 1998 by Borland International
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ChessPrg.pas' rev: 3.00

#ifndef ChessPrgHPP
#define ChessPrgHPP
#include <ChessBrd.hpp>
#include <ExtCtrls.hpp>
#include <StdCtrls.hpp>
#include <Dialogs.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <Graphics.hpp>
#include <Classes.hpp>
#include <SysUtils.hpp>
#include <Messages.hpp>
#include <Windows.hpp>
#include <SysInit.hpp>
#include <System.hpp>

//-- user supplied -----------------------------------------------------------

namespace Chessprg
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TForm1;
class PASCALIMPLEMENTATION TForm1 : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Stdctrls::TButton* ButtonBack;
	Stdctrls::TButton* ButtonForward;
	Stdctrls::TButton* Buttonnew;
	Stdctrls::TListBox* ListBox1;
	Stdctrls::TLabel* Label1;
	Extctrls::TRadioGroup* RadioGroup1;
	Extctrls::TRadioGroup* RadioGroup2;
	Stdctrls::TCheckBox* CheckBoxWhiteOnTop;
	Stdctrls::TComboBox* ComboBox1;
	Stdctrls::TLabel* Label2;
	Stdctrls::TCheckBox* CheckBoxCoords;
	Stdctrls::TLabel* Label3;
	Stdctrls::TCheckBox* CheckBoxLines;
	Stdctrls::TButton* ButtonStop;
	Stdctrls::TButton* ButtonMove;
	Extctrls::TImage* ImageCm36;
	Extctrls::TImage* ImageFr40;
	Chessbrd::TChessBrd* ChessBrd1;
	Stdctrls::TLabel* Label4;
	Stdctrls::TComboBox* ComboBox2;
	void __fastcall UpdateListBox(void);
	void __fastcall ButtonBackClick(System::TObject* Sender);
	void __fastcall ChessBrd1LegalMove(System::TObject* Sender, Chessbrd::Square oldSq, Chessbrd::Square 
		newSq);
	void __fastcall ButtonForwardClick(System::TObject* Sender);
	void __fastcall ButtonnewClick(System::TObject* Sender);
	void __fastcall RadioGroup2Click(System::TObject* Sender);
	void __fastcall RadioGroup1Click(System::TObject* Sender);
	void __fastcall CheckBoxWhiteOnTopClick(System::TObject* Sender);
	void __fastcall ChessBrd1Draw(System::TObject* Sender);
	void __fastcall ChessBrd1Mate(System::TObject* Sender, Chessbrd::Square oldSq, Chessbrd::Square newSq
		);
	void __fastcall CheckBoxCoordsClick(System::TObject* Sender);
	void __fastcall SpinEdit1Change(System::TObject* Sender);
	void __fastcall Timer1Timer(System::TObject* Sender);
	void __fastcall CheckBoxLinesClick(System::TObject* Sender);
	void __fastcall ListBox1Click(System::TObject* Sender);
	void __fastcall ButtonMoveClick(System::TObject* Sender);
	void __fastcall ButtonStopClick(System::TObject* Sender);
	void __fastcall ComboBox1Change(System::TObject* Sender);
	void __fastcall ChessBrd1CalculateMove(System::TObject* Sender, Chessbrd::Square &oldsq, Chessbrd::Square 
		&newsq);
	void __fastcall ChessBrd1CalculationFailed(System::TObject* Sender, Chessbrd::Square oldSq, Chessbrd::Square 
		newSq);
	void __fastcall ComboBox2Change(System::TObject* Sender);
public:
	/* TCustomForm.Create */ __fastcall virtual TForm1(Classes::TComponent* AOwner) : Forms::TForm(AOwner
		) { }
	/* TCustomForm.CreateNew */ __fastcall TForm1(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(
		AOwner, Dummy) { }
	/* TCustomForm.Destroy */ __fastcall virtual ~TForm1(void) { }
	
public:
	/* TWinControl.CreateParented */ __fastcall TForm1(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
		
	
};

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TForm1* Form1;

}	/* namespace Chessprg */
#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using namespace Chessprg;
#endif
//-- end unit ----------------------------------------------------------------
#endif	// ChessPrg
