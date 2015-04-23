#pragma once
#include "tutor.h"
#include <windows.h>
#include <Winuser.h>
#include <stdio.h>
#include <ctime>
#include <cstdlib>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:

	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::PictureBox^  Second_Button;

	private: System::Windows::Forms::PictureBox^  Start_Pictutre;

	private: System::Windows::Forms::PictureBox^  MenuPicture;
	private: System::Windows::Forms::PictureBox^  Exit_Button;
	private: System::Windows::Forms::PictureBox^  PictureBoxTild;
	private: System::Windows::Forms::PictureBox^  pictureBoxSpac;

	private: System::Windows::Forms::PictureBox^  pictureBoxRAlt;
	private: System::Windows::Forms::PictureBox^  pictureBoxRWin;
	private: System::Windows::Forms::PictureBox^  pictureBoxFile;
	private: System::Windows::Forms::PictureBox^  pictureBoxRCtr;

	private: System::Windows::Forms::PictureBox^  pictureBoxLAlt;
	private: System::Windows::Forms::PictureBox^  pictureBoxLWin;
	private: System::Windows::Forms::PictureBox^  pictureBoxLCtr;
	private: System::Windows::Forms::PictureBox^  pictureBoxBSla;
	private: System::Windows::Forms::PictureBox^  pictureBoxComm;
	private: System::Windows::Forms::PictureBox^  pictureBoxDot;
	private: System::Windows::Forms::PictureBox^  pictureBoxm;
	private: System::Windows::Forms::PictureBox^  pictureBoxn;
	private: System::Windows::Forms::PictureBox^  pictureBoxb;
	private: System::Windows::Forms::PictureBox^  pictureBoxv;
	private: System::Windows::Forms::PictureBox^  pictureBoxc;
	private: System::Windows::Forms::PictureBox^  pictureBoxx;
	private: System::Windows::Forms::PictureBox^  pictureBoxz;
	private: System::Windows::Forms::PictureBox^  pictureBoxLshi;
	private: System::Windows::Forms::PictureBox^  pictureBoxEnt;
	private: System::Windows::Forms::PictureBox^  pictureBoxQuot;
	private: System::Windows::Forms::PictureBox^  pictureBoxSemi;
	private: System::Windows::Forms::PictureBox^  pictureBoxl;
	private: System::Windows::Forms::PictureBox^  pictureBoxk;
	private: System::Windows::Forms::PictureBox^  pictureBoxj;
	private: System::Windows::Forms::PictureBox^  pictureBoxh;
	private: System::Windows::Forms::PictureBox^  pictureBoxgg;
	private: System::Windows::Forms::PictureBox^  pictureBoxf;
	private: System::Windows::Forms::PictureBox^  pictureBoxd;
	private: System::Windows::Forms::PictureBox^  pictureBoxs;
	private: System::Windows::Forms::PictureBox^  pictureBoxa;
	private: System::Windows::Forms::PictureBox^  pictureBoxCap;
	private: System::Windows::Forms::PictureBox^  pictureBoxFSla;
	private: System::Windows::Forms::PictureBox^  pictureBoxRBra;
	private: System::Windows::Forms::PictureBox^  pictureBoxLBra;
	private: System::Windows::Forms::PictureBox^  pictureBoxp;
	private: System::Windows::Forms::PictureBox^  pictureBoxo;
	private: System::Windows::Forms::PictureBox^  pictureBoxi;
	private: System::Windows::Forms::PictureBox^  pictureBoxu;
	private: System::Windows::Forms::PictureBox^  pictureBoxy;
	private: System::Windows::Forms::PictureBox^  pictureBoxt;
	private: System::Windows::Forms::PictureBox^  pictureBoxr;
	private: System::Windows::Forms::PictureBox^  pictureBoxe;
	private: System::Windows::Forms::PictureBox^  pictureBoxw;
	private: System::Windows::Forms::PictureBox^  pictureBoxq;
	private: System::Windows::Forms::PictureBox^  pictureBoxTAB;
	private: System::Windows::Forms::PictureBox^  pictureBoxBS;
	private: System::Windows::Forms::PictureBox^  pictureBoxPlus;
	private: System::Windows::Forms::PictureBox^  PictureBoxDash;
	private: System::Windows::Forms::PictureBox^  pictureBoxZERO;
	private: System::Windows::Forms::PictureBox^  pictureBoxNINE;
	private: System::Windows::Forms::PictureBox^  pictureBoxEIGH;
	private: System::Windows::Forms::PictureBox^  pictureBoxSEVE;
	private: System::Windows::Forms::PictureBox^  pictureBoxSIX;
	private: System::Windows::Forms::PictureBox^  pictureBoxFIVE;
	private: System::Windows::Forms::PictureBox^  pictureBoxFOUR;
	private: System::Windows::Forms::PictureBox^  pictureBoxTHREE;
	private: System::Windows::Forms::PictureBox^  pictureBoxTWO;
	private: System::Windows::Forms::PictureBox^  pictureBoxONE;
	private: System::Windows::Forms::PictureBox^  pictureBoxRShi;
			 
	private: System::Windows::Forms::TextBox^  textBox1;
			 /*
private: System::Windows::Forms::PictureBox^  PictureBoxDash;

private: System::Windows::Forms::PictureBox^  pictureBoxNINE;


private: System::Windows::Forms::PictureBox^  pictureBoxEIGH;

private: System::Windows::Forms::PictureBox^  pictureBoxSEVE;

private: System::Windows::Forms::PictureBox^  pictureBoxSIX;

private: System::Windows::Forms::PictureBox^  pictureBoxFIVE;

private: System::Windows::Forms::PictureBox^  pictureBoxFOUR;

private: System::Windows::Forms::PictureBox^  pictureBoxTHREE;

private: System::Windows::Forms::PictureBox^  pictureBoxTWO;

private: System::Windows::Forms::PictureBox^  pictureBoxONE;

private: System::Windows::Forms::PictureBox^  pictureBoxRShi;
*/
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBoxSpac = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRAlt = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRWin = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxFile = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRCtr = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxLAlt = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxLWin = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxLCtr = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRShi = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxBSla = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxComm = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxDot = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxm = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxn = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxb = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxv = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxc = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxx = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxz = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxLshi = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxEnt = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxQuot = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxSemi = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxl = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxk = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxj = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxh = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxgg = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxf = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxd = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxs = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxa = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxCap = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxFSla = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRBra = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxLBra = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxp = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxi = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxu = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxy = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxt = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxr = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxe = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxw = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxq = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTAB = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxBS = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxPlus = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBoxDash = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxZERO = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxNINE = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxEIGH = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxSEVE = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxSIX = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxFIVE = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxFOUR = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTHREE = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTWO = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxONE = (gcnew System::Windows::Forms::PictureBox());
			this->PictureBoxTild = (gcnew System::Windows::Forms::PictureBox());
			this->Exit_Button = (gcnew System::Windows::Forms::PictureBox());
			this->Second_Button = (gcnew System::Windows::Forms::PictureBox());
			this->Start_Pictutre = (gcnew System::Windows::Forms::PictureBox());
			this->MenuPicture = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSpac))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRAlt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRWin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFile))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRCtr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLAlt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLWin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLCtr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRShi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBSla))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxComm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDot))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxb))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxv))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxx))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxz))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLshi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxEnt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxQuot))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSemi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxk))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxj))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxgg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxf))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxd))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxs))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxa))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCap))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFSla))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRBra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLBra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxu))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxr))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxw))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxq))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTAB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBS))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPlus))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxDash))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxZERO))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNINE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxEIGH))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSEVE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSIX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFIVE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFOUR))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTHREE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTWO))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxONE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxTild))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_Button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Second_Button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start_Pictutre))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuPicture))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->pictureBoxSpac);
			this->panel1->Controls->Add(this->pictureBoxRAlt);
			this->panel1->Controls->Add(this->pictureBoxRWin);
			this->panel1->Controls->Add(this->pictureBoxFile);
			this->panel1->Controls->Add(this->pictureBoxRCtr);
			this->panel1->Controls->Add(this->pictureBoxLAlt);
			this->panel1->Controls->Add(this->pictureBoxLWin);
			this->panel1->Controls->Add(this->pictureBoxLCtr);
			this->panel1->Controls->Add(this->pictureBoxRShi);
			this->panel1->Controls->Add(this->pictureBoxBSla);
			this->panel1->Controls->Add(this->pictureBoxComm);
			this->panel1->Controls->Add(this->pictureBoxDot);
			this->panel1->Controls->Add(this->pictureBoxm);
			this->panel1->Controls->Add(this->pictureBoxn);
			this->panel1->Controls->Add(this->pictureBoxb);
			this->panel1->Controls->Add(this->pictureBoxv);
			this->panel1->Controls->Add(this->pictureBoxc);
			this->panel1->Controls->Add(this->pictureBoxx);
			this->panel1->Controls->Add(this->pictureBoxz);
			this->panel1->Controls->Add(this->pictureBoxLshi);
			this->panel1->Controls->Add(this->pictureBoxEnt);
			this->panel1->Controls->Add(this->pictureBoxQuot);
			this->panel1->Controls->Add(this->pictureBoxSemi);
			this->panel1->Controls->Add(this->pictureBoxl);
			this->panel1->Controls->Add(this->pictureBoxk);
			this->panel1->Controls->Add(this->pictureBoxj);
			this->panel1->Controls->Add(this->pictureBoxh);
			this->panel1->Controls->Add(this->pictureBoxgg);
			this->panel1->Controls->Add(this->pictureBoxf);
			this->panel1->Controls->Add(this->pictureBoxd);
			this->panel1->Controls->Add(this->pictureBoxs);
			this->panel1->Controls->Add(this->pictureBoxa);
			this->panel1->Controls->Add(this->pictureBoxCap);
			this->panel1->Controls->Add(this->pictureBoxFSla);
			this->panel1->Controls->Add(this->pictureBoxRBra);
			this->panel1->Controls->Add(this->pictureBoxLBra);
			this->panel1->Controls->Add(this->pictureBoxp);
			this->panel1->Controls->Add(this->pictureBoxo);
			this->panel1->Controls->Add(this->pictureBoxi);
			this->panel1->Controls->Add(this->pictureBoxu);
			this->panel1->Controls->Add(this->pictureBoxy);
			this->panel1->Controls->Add(this->pictureBoxt);
			this->panel1->Controls->Add(this->pictureBoxr);
			this->panel1->Controls->Add(this->pictureBoxe);
			this->panel1->Controls->Add(this->pictureBoxw);
			this->panel1->Controls->Add(this->pictureBoxq);
			this->panel1->Controls->Add(this->pictureBoxTAB);
			this->panel1->Controls->Add(this->pictureBoxBS);
			this->panel1->Controls->Add(this->pictureBoxPlus);
			this->panel1->Controls->Add(this->PictureBoxDash);
			this->panel1->Controls->Add(this->pictureBoxZERO);
			this->panel1->Controls->Add(this->pictureBoxNINE);
			this->panel1->Controls->Add(this->pictureBoxEIGH);
			this->panel1->Controls->Add(this->pictureBoxSEVE);
			this->panel1->Controls->Add(this->pictureBoxSIX);
			this->panel1->Controls->Add(this->pictureBoxFIVE);
			this->panel1->Controls->Add(this->pictureBoxFOUR);
			this->panel1->Controls->Add(this->pictureBoxTHREE);
			this->panel1->Controls->Add(this->pictureBoxTWO);
			this->panel1->Controls->Add(this->pictureBoxONE);
			this->panel1->Controls->Add(this->PictureBoxTild);
			this->panel1->Controls->Add(this->Exit_Button);
			this->panel1->Controls->Add(this->Second_Button);
			this->panel1->Controls->Add(this->Start_Pictutre);
			this->panel1->Controls->Add(this->MenuPicture);
			this->panel1->Location = System::Drawing::Point(13, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(929, 506);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 34);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(827, 128);
			this->textBox1->TabIndex = 65;
			this->textBox1->TabStop = false;
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// pictureBoxSpac
			// 
			this->pictureBoxSpac->Location = System::Drawing::Point(254, 400);
			this->pictureBoxSpac->Name = L"pictureBoxSpac";
			this->pictureBoxSpac->Size = System::Drawing::Size(329, 50);
			this->pictureBoxSpac->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxSpac->TabIndex = 64;
			this->pictureBoxSpac->TabStop = false;
			// 
			// pictureBoxRAlt
			// 
			this->pictureBoxRAlt->Location = System::Drawing::Point(589, 400);
			this->pictureBoxRAlt->Name = L"pictureBoxRAlt";
			this->pictureBoxRAlt->Size = System::Drawing::Size(59, 50);
			this->pictureBoxRAlt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxRAlt->TabIndex = 63;
			this->pictureBoxRAlt->TabStop = false;
			// 
			// pictureBoxRWin
			// 
			this->pictureBoxRWin->Location = System::Drawing::Point(654, 400);
			this->pictureBoxRWin->Name = L"pictureBoxRWin";
			this->pictureBoxRWin->Size = System::Drawing::Size(59, 50);
			this->pictureBoxRWin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxRWin->TabIndex = 62;
			this->pictureBoxRWin->TabStop = false;
			// 
			// pictureBoxFile
			// 
			this->pictureBoxFile->Location = System::Drawing::Point(719, 400);
			this->pictureBoxFile->Name = L"pictureBoxFile";
			this->pictureBoxFile->Size = System::Drawing::Size(59, 50);
			this->pictureBoxFile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxFile->TabIndex = 61;
			this->pictureBoxFile->TabStop = false;
			// 
			// pictureBoxRCtr
			// 
			this->pictureBoxRCtr->Location = System::Drawing::Point(784, 400);
			this->pictureBoxRCtr->Name = L"pictureBoxRCtr";
			this->pictureBoxRCtr->Size = System::Drawing::Size(92, 50);
			this->pictureBoxRCtr->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxRCtr->TabIndex = 60;
			this->pictureBoxRCtr->TabStop = false;
			this->pictureBoxRCtr->Click += gcnew System::EventHandler(this, &MyForm::pictureBox56_Click);
			// 
			// pictureBoxLAlt
			// 
			this->pictureBoxLAlt->Location = System::Drawing::Point(189, 400);
			this->pictureBoxLAlt->Name = L"pictureBoxLAlt";
			this->pictureBoxLAlt->Size = System::Drawing::Size(59, 50);
			this->pictureBoxLAlt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLAlt->TabIndex = 59;
			this->pictureBoxLAlt->TabStop = false;
			// 
			// pictureBoxLWin
			// 
			this->pictureBoxLWin->Location = System::Drawing::Point(124, 400);
			this->pictureBoxLWin->Name = L"pictureBoxLWin";
			this->pictureBoxLWin->Size = System::Drawing::Size(59, 50);
			this->pictureBoxLWin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLWin->TabIndex = 58;
			this->pictureBoxLWin->TabStop = false;
			// 
			// pictureBoxLCtr
			// 
			this->pictureBoxLCtr->Location = System::Drawing::Point(26, 400);
			this->pictureBoxLCtr->Name = L"pictureBoxLCtr";
			this->pictureBoxLCtr->Size = System::Drawing::Size(92, 50);
			this->pictureBoxLCtr->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLCtr->TabIndex = 57;
			this->pictureBoxLCtr->TabStop = false;
			// 
			// pictureBoxRShi
			// 
			this->pictureBoxRShi->Location = System::Drawing::Point(710, 344);
			this->pictureBoxRShi->Name = L"pictureBoxRShi";
			this->pictureBoxRShi->Size = System::Drawing::Size(166, 50);
			this->pictureBoxRShi->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxRShi->TabIndex = 56;
			this->pictureBoxRShi->TabStop = false;
			// 
			// pictureBoxBSla
			// 
			this->pictureBoxBSla->Location = System::Drawing::Point(654, 344);
			this->pictureBoxBSla->Name = L"pictureBoxBSla";
			this->pictureBoxBSla->Size = System::Drawing::Size(50, 50);
			this->pictureBoxBSla->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxBSla->TabIndex = 55;
			this->pictureBoxBSla->TabStop = false;
			// 
			// pictureBoxComm
			// 
			this->pictureBoxComm->Location = System::Drawing::Point(542, 344);
			this->pictureBoxComm->Name = L"pictureBoxComm";
			this->pictureBoxComm->Size = System::Drawing::Size(50, 50);
			this->pictureBoxComm->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxComm->TabIndex = 54;
			this->pictureBoxComm->TabStop = false;
			// 
			// pictureBoxDot
			// 
			this->pictureBoxDot->Location = System::Drawing::Point(598, 344);
			this->pictureBoxDot->Name = L"pictureBoxDot";
			this->pictureBoxDot->Size = System::Drawing::Size(50, 50);
			this->pictureBoxDot->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxDot->TabIndex = 53;
			this->pictureBoxDot->TabStop = false;
			// 
			// pictureBoxm
			// 
			this->pictureBoxm->Location = System::Drawing::Point(486, 344);
			this->pictureBoxm->Name = L"pictureBoxm";
			this->pictureBoxm->Size = System::Drawing::Size(50, 50);
			this->pictureBoxm->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxm->TabIndex = 52;
			this->pictureBoxm->TabStop = false;
			// 
			// pictureBoxn
			// 
			this->pictureBoxn->Location = System::Drawing::Point(430, 344);
			this->pictureBoxn->Name = L"pictureBoxn";
			this->pictureBoxn->Size = System::Drawing::Size(50, 50);
			this->pictureBoxn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxn->TabIndex = 51;
			this->pictureBoxn->TabStop = false;
			// 
			// pictureBoxb
			// 
			this->pictureBoxb->Location = System::Drawing::Point(374, 344);
			this->pictureBoxb->Name = L"pictureBoxb";
			this->pictureBoxb->Size = System::Drawing::Size(50, 50);
			this->pictureBoxb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxb->TabIndex = 50;
			this->pictureBoxb->TabStop = false;
			// 
			// pictureBoxv
			// 
			this->pictureBoxv->Location = System::Drawing::Point(318, 344);
			this->pictureBoxv->Name = L"pictureBoxv";
			this->pictureBoxv->Size = System::Drawing::Size(50, 50);
			this->pictureBoxv->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxv->TabIndex = 49;
			this->pictureBoxv->TabStop = false;
			// 
			// pictureBoxc
			// 
			this->pictureBoxc->Location = System::Drawing::Point(262, 344);
			this->pictureBoxc->Name = L"pictureBoxc";
			this->pictureBoxc->Size = System::Drawing::Size(50, 50);
			this->pictureBoxc->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxc->TabIndex = 48;
			this->pictureBoxc->TabStop = false;
			// 
			// pictureBoxx
			// 
			this->pictureBoxx->Location = System::Drawing::Point(206, 344);
			this->pictureBoxx->Name = L"pictureBoxx";
			this->pictureBoxx->Size = System::Drawing::Size(50, 50);
			this->pictureBoxx->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxx->TabIndex = 47;
			this->pictureBoxx->TabStop = false;
			// 
			// pictureBoxz
			// 
			this->pictureBoxz->Location = System::Drawing::Point(150, 344);
			this->pictureBoxz->Name = L"pictureBoxz";
			this->pictureBoxz->Size = System::Drawing::Size(50, 50);
			this->pictureBoxz->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxz->TabIndex = 46;
			this->pictureBoxz->TabStop = false;
			// 
			// pictureBoxLshi
			// 
			this->pictureBoxLshi->Location = System::Drawing::Point(26, 344);
			this->pictureBoxLshi->Name = L"pictureBoxLshi";
			this->pictureBoxLshi->Size = System::Drawing::Size(118, 50);
			this->pictureBoxLshi->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLshi->TabIndex = 45;
			this->pictureBoxLshi->TabStop = false;
			// 
			// pictureBoxEnt
			// 
			this->pictureBoxEnt->Location = System::Drawing::Point(740, 288);
			this->pictureBoxEnt->Name = L"pictureBoxEnt";
			this->pictureBoxEnt->Size = System::Drawing::Size(136, 50);
			this->pictureBoxEnt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxEnt->TabIndex = 44;
			this->pictureBoxEnt->TabStop = false;
			// 
			// pictureBoxQuot
			// 
			this->pictureBoxQuot->Location = System::Drawing::Point(684, 288);
			this->pictureBoxQuot->Name = L"pictureBoxQuot";
			this->pictureBoxQuot->Size = System::Drawing::Size(50, 50);
			this->pictureBoxQuot->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxQuot->TabIndex = 43;
			this->pictureBoxQuot->TabStop = false;
			// 
			// pictureBoxSemi
			// 
			this->pictureBoxSemi->Location = System::Drawing::Point(628, 288);
			this->pictureBoxSemi->Name = L"pictureBoxSemi";
			this->pictureBoxSemi->Size = System::Drawing::Size(50, 50);
			this->pictureBoxSemi->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxSemi->TabIndex = 42;
			this->pictureBoxSemi->TabStop = false;
			// 
			// pictureBoxl
			// 
			this->pictureBoxl->Location = System::Drawing::Point(572, 288);
			this->pictureBoxl->Name = L"pictureBoxl";
			this->pictureBoxl->Size = System::Drawing::Size(50, 50);
			this->pictureBoxl->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxl->TabIndex = 41;
			this->pictureBoxl->TabStop = false;
			// 
			// pictureBoxk
			// 
			this->pictureBoxk->Location = System::Drawing::Point(516, 288);
			this->pictureBoxk->Name = L"pictureBoxk";
			this->pictureBoxk->Size = System::Drawing::Size(50, 50);
			this->pictureBoxk->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxk->TabIndex = 40;
			this->pictureBoxk->TabStop = false;
			// 
			// pictureBoxj
			// 
			this->pictureBoxj->Location = System::Drawing::Point(460, 288);
			this->pictureBoxj->Name = L"pictureBoxj";
			this->pictureBoxj->Size = System::Drawing::Size(50, 50);
			this->pictureBoxj->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxj->TabIndex = 39;
			this->pictureBoxj->TabStop = false;
			// 
			// pictureBoxh
			// 
			this->pictureBoxh->Location = System::Drawing::Point(404, 288);
			this->pictureBoxh->Name = L"pictureBoxh";
			this->pictureBoxh->Size = System::Drawing::Size(50, 50);
			this->pictureBoxh->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxh->TabIndex = 38;
			this->pictureBoxh->TabStop = false;
			// 
			// pictureBoxgg
			// 
			this->pictureBoxgg->Location = System::Drawing::Point(348, 288);
			this->pictureBoxgg->Name = L"pictureBoxgg";
			this->pictureBoxgg->Size = System::Drawing::Size(50, 50);
			this->pictureBoxgg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxgg->TabIndex = 37;
			this->pictureBoxgg->TabStop = false;
			// 
			// pictureBoxf
			// 
			this->pictureBoxf->Location = System::Drawing::Point(292, 288);
			this->pictureBoxf->Name = L"pictureBoxf";
			this->pictureBoxf->Size = System::Drawing::Size(50, 50);
			this->pictureBoxf->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxf->TabIndex = 36;
			this->pictureBoxf->TabStop = false;
			// 
			// pictureBoxd
			// 
			this->pictureBoxd->Location = System::Drawing::Point(236, 288);
			this->pictureBoxd->Name = L"pictureBoxd";
			this->pictureBoxd->Size = System::Drawing::Size(50, 50);
			this->pictureBoxd->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxd->TabIndex = 35;
			this->pictureBoxd->TabStop = false;
			// 
			// pictureBoxs
			// 
			this->pictureBoxs->Location = System::Drawing::Point(180, 288);
			this->pictureBoxs->Name = L"pictureBoxs";
			this->pictureBoxs->Size = System::Drawing::Size(50, 50);
			this->pictureBoxs->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxs->TabIndex = 34;
			this->pictureBoxs->TabStop = false;
			// 
			// pictureBoxa
			// 
			this->pictureBoxa->Location = System::Drawing::Point(124, 288);
			this->pictureBoxa->Name = L"pictureBoxa";
			this->pictureBoxa->Size = System::Drawing::Size(50, 50);
			this->pictureBoxa->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxa->TabIndex = 33;
			this->pictureBoxa->TabStop = false;
			// 
			// pictureBoxCap
			// 
			this->pictureBoxCap->Location = System::Drawing::Point(26, 288);
			this->pictureBoxCap->Name = L"pictureBoxCap";
			this->pictureBoxCap->Size = System::Drawing::Size(92, 50);
			this->pictureBoxCap->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCap->TabIndex = 32;
			this->pictureBoxCap->TabStop = false;
			// 
			// pictureBoxFSla
			// 
			this->pictureBoxFSla->Location = System::Drawing::Point(784, 232);
			this->pictureBoxFSla->Name = L"pictureBoxFSla";
			this->pictureBoxFSla->Size = System::Drawing::Size(92, 50);
			this->pictureBoxFSla->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxFSla->TabIndex = 31;
			this->pictureBoxFSla->TabStop = false;
			// 
			// pictureBoxRBra
			// 
			this->pictureBoxRBra->Location = System::Drawing::Point(728, 232);
			this->pictureBoxRBra->Name = L"pictureBoxRBra";
			this->pictureBoxRBra->Size = System::Drawing::Size(50, 50);
			this->pictureBoxRBra->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxRBra->TabIndex = 30;
			this->pictureBoxRBra->TabStop = false;
			// 
			// pictureBoxLBra
			// 
			this->pictureBoxLBra->Location = System::Drawing::Point(672, 232);
			this->pictureBoxLBra->Name = L"pictureBoxLBra";
			this->pictureBoxLBra->Size = System::Drawing::Size(50, 50);
			this->pictureBoxLBra->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLBra->TabIndex = 29;
			this->pictureBoxLBra->TabStop = false;
			// 
			// pictureBoxp
			// 
			this->pictureBoxp->Location = System::Drawing::Point(616, 232);
			this->pictureBoxp->Name = L"pictureBoxp";
			this->pictureBoxp->Size = System::Drawing::Size(50, 50);
			this->pictureBoxp->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxp->TabIndex = 28;
			this->pictureBoxp->TabStop = false;
			// 
			// pictureBoxo
			// 
			this->pictureBoxo->Location = System::Drawing::Point(560, 232);
			this->pictureBoxo->Name = L"pictureBoxo";
			this->pictureBoxo->Size = System::Drawing::Size(50, 50);
			this->pictureBoxo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxo->TabIndex = 27;
			this->pictureBoxo->TabStop = false;
			// 
			// pictureBoxi
			// 
			this->pictureBoxi->Location = System::Drawing::Point(504, 232);
			this->pictureBoxi->Name = L"pictureBoxi";
			this->pictureBoxi->Size = System::Drawing::Size(50, 50);
			this->pictureBoxi->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxi->TabIndex = 26;
			this->pictureBoxi->TabStop = false;
			// 
			// pictureBoxu
			// 
			this->pictureBoxu->Location = System::Drawing::Point(448, 232);
			this->pictureBoxu->Name = L"pictureBoxu";
			this->pictureBoxu->Size = System::Drawing::Size(50, 50);
			this->pictureBoxu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxu->TabIndex = 25;
			this->pictureBoxu->TabStop = false;
			// 
			// pictureBoxy
			// 
			this->pictureBoxy->Location = System::Drawing::Point(392, 232);
			this->pictureBoxy->Name = L"pictureBoxy";
			this->pictureBoxy->Size = System::Drawing::Size(50, 50);
			this->pictureBoxy->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxy->TabIndex = 24;
			this->pictureBoxy->TabStop = false;
			// 
			// pictureBoxt
			// 
			this->pictureBoxt->Location = System::Drawing::Point(336, 232);
			this->pictureBoxt->Name = L"pictureBoxt";
			this->pictureBoxt->Size = System::Drawing::Size(50, 50);
			this->pictureBoxt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxt->TabIndex = 23;
			this->pictureBoxt->TabStop = false;
			// 
			// pictureBoxr
			// 
			this->pictureBoxr->Location = System::Drawing::Point(280, 232);
			this->pictureBoxr->Name = L"pictureBoxr";
			this->pictureBoxr->Size = System::Drawing::Size(50, 50);
			this->pictureBoxr->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxr->TabIndex = 22;
			this->pictureBoxr->TabStop = false;
			// 
			// pictureBoxe
			// 
			this->pictureBoxe->Location = System::Drawing::Point(224, 232);
			this->pictureBoxe->Name = L"pictureBoxe";
			this->pictureBoxe->Size = System::Drawing::Size(50, 50);
			this->pictureBoxe->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxe->TabIndex = 21;
			this->pictureBoxe->TabStop = false;
			// 
			// pictureBoxw
			// 
			this->pictureBoxw->Location = System::Drawing::Point(168, 232);
			this->pictureBoxw->Name = L"pictureBoxw";
			this->pictureBoxw->Size = System::Drawing::Size(50, 50);
			this->pictureBoxw->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxw->TabIndex = 20;
			this->pictureBoxw->TabStop = false;
			// 
			// pictureBoxq
			// 
			this->pictureBoxq->Location = System::Drawing::Point(112, 232);
			this->pictureBoxq->Name = L"pictureBoxq";
			this->pictureBoxq->Size = System::Drawing::Size(50, 50);
			this->pictureBoxq->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxq->TabIndex = 19;
			this->pictureBoxq->TabStop = false;
			// 
			// pictureBoxTAB
			// 
			this->pictureBoxTAB->Location = System::Drawing::Point(26, 232);
			this->pictureBoxTAB->Name = L"pictureBoxTAB";
			this->pictureBoxTAB->Size = System::Drawing::Size(80, 50);
			this->pictureBoxTAB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxTAB->TabIndex = 18;
			this->pictureBoxTAB->TabStop = false;
			// 
			// pictureBoxBS
			// 
			this->pictureBoxBS->Location = System::Drawing::Point(754, 176);
			this->pictureBoxBS->Name = L"pictureBoxBS";
			this->pictureBoxBS->Size = System::Drawing::Size(122, 50);
			this->pictureBoxBS->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxBS->TabIndex = 17;
			this->pictureBoxBS->TabStop = false;
			// 
			// pictureBoxPlus
			// 
			this->pictureBoxPlus->Location = System::Drawing::Point(698, 176);
			this->pictureBoxPlus->Name = L"pictureBoxPlus";
			this->pictureBoxPlus->Size = System::Drawing::Size(50, 50);
			this->pictureBoxPlus->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxPlus->TabIndex = 16;
			this->pictureBoxPlus->TabStop = false;
			// 
			// PictureBoxDash
			// 
			this->PictureBoxDash->Location = System::Drawing::Point(642, 176);
			this->PictureBoxDash->Name = L"PictureBoxDash";
			this->PictureBoxDash->Size = System::Drawing::Size(50, 50);
			this->PictureBoxDash->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBoxDash->TabIndex = 15;
			this->PictureBoxDash->TabStop = false;
			// 
			// pictureBoxZERO
			// 
			this->pictureBoxZERO->Location = System::Drawing::Point(586, 176);
			this->pictureBoxZERO->Name = L"pictureBoxZERO";
			this->pictureBoxZERO->Size = System::Drawing::Size(50, 50);
			this->pictureBoxZERO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxZERO->TabIndex = 14;
			this->pictureBoxZERO->TabStop = false;
			// 
			// pictureBoxNINE
			// 
			this->pictureBoxNINE->Location = System::Drawing::Point(530, 176);
			this->pictureBoxNINE->Name = L"pictureBoxNINE";
			this->pictureBoxNINE->Size = System::Drawing::Size(50, 50);
			this->pictureBoxNINE->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxNINE->TabIndex = 13;
			this->pictureBoxNINE->TabStop = false;
			// 
			// pictureBoxEIGH
			// 
			this->pictureBoxEIGH->Location = System::Drawing::Point(474, 176);
			this->pictureBoxEIGH->Name = L"pictureBoxEIGH";
			this->pictureBoxEIGH->Size = System::Drawing::Size(50, 50);
			this->pictureBoxEIGH->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxEIGH->TabIndex = 12;
			this->pictureBoxEIGH->TabStop = false;
			// 
			// pictureBoxSEVE
			// 
			this->pictureBoxSEVE->Location = System::Drawing::Point(418, 176);
			this->pictureBoxSEVE->Name = L"pictureBoxSEVE";
			this->pictureBoxSEVE->Size = System::Drawing::Size(50, 50);
			this->pictureBoxSEVE->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxSEVE->TabIndex = 11;
			this->pictureBoxSEVE->TabStop = false;
			// 
			// pictureBoxSIX
			// 
			this->pictureBoxSIX->Location = System::Drawing::Point(362, 176);
			this->pictureBoxSIX->Name = L"pictureBoxSIX";
			this->pictureBoxSIX->Size = System::Drawing::Size(50, 50);
			this->pictureBoxSIX->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxSIX->TabIndex = 10;
			this->pictureBoxSIX->TabStop = false;
			// 
			// pictureBoxFIVE
			// 
			this->pictureBoxFIVE->Location = System::Drawing::Point(306, 176);
			this->pictureBoxFIVE->Name = L"pictureBoxFIVE";
			this->pictureBoxFIVE->Size = System::Drawing::Size(50, 50);
			this->pictureBoxFIVE->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxFIVE->TabIndex = 9;
			this->pictureBoxFIVE->TabStop = false;
			// 
			// pictureBoxFOUR
			// 
			this->pictureBoxFOUR->Location = System::Drawing::Point(250, 176);
			this->pictureBoxFOUR->Name = L"pictureBoxFOUR";
			this->pictureBoxFOUR->Size = System::Drawing::Size(50, 50);
			this->pictureBoxFOUR->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxFOUR->TabIndex = 8;
			this->pictureBoxFOUR->TabStop = false;
			// 
			// pictureBoxTHREE
			// 
			this->pictureBoxTHREE->Location = System::Drawing::Point(194, 176);
			this->pictureBoxTHREE->Name = L"pictureBoxTHREE";
			this->pictureBoxTHREE->Size = System::Drawing::Size(50, 50);
			this->pictureBoxTHREE->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxTHREE->TabIndex = 7;
			this->pictureBoxTHREE->TabStop = false;
			// 
			// pictureBoxTWO
			// 
			this->pictureBoxTWO->Location = System::Drawing::Point(138, 176);
			this->pictureBoxTWO->Name = L"pictureBoxTWO";
			this->pictureBoxTWO->Size = System::Drawing::Size(50, 50);
			this->pictureBoxTWO->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxTWO->TabIndex = 6;
			this->pictureBoxTWO->TabStop = false;
			// 
			// pictureBoxONE
			// 
			this->pictureBoxONE->Location = System::Drawing::Point(82, 176);
			this->pictureBoxONE->Name = L"pictureBoxONE";
			this->pictureBoxONE->Size = System::Drawing::Size(50, 50);
			this->pictureBoxONE->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxONE->TabIndex = 5;
			this->pictureBoxONE->TabStop = false;
			// 
			// PictureBoxTild
			// 
			this->PictureBoxTild->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBoxTild->Location = System::Drawing::Point(26, 176);
			this->PictureBoxTild->Name = L"PictureBoxTild";
			this->PictureBoxTild->Size = System::Drawing::Size(50, 50);
			this->PictureBoxTild->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PictureBoxTild->TabIndex = 4;
			this->PictureBoxTild->TabStop = false;
			this->PictureBoxTild->Click += gcnew System::EventHandler(this, &MyForm::PictureBoxTild_Click);
			// 
			// Exit_Button
			// 
			this->Exit_Button->Location = System::Drawing::Point(385, 354);
			this->Exit_Button->Name = L"Exit_Button";
			this->Exit_Button->Size = System::Drawing::Size(100, 50);
			this->Exit_Button->TabIndex = 3;
			this->Exit_Button->TabStop = false;
			this->Exit_Button->Click += gcnew System::EventHandler(this, &MyForm::Exit_Button_Click);
			// 
			// Second_Button
			// 
			this->Second_Button->Location = System::Drawing::Point(385, 277);
			this->Second_Button->Name = L"Second_Button";
			this->Second_Button->Size = System::Drawing::Size(100, 50);
			this->Second_Button->TabIndex = 2;
			this->Second_Button->TabStop = false;
			this->Second_Button->Click += gcnew System::EventHandler(this, &MyForm::Second_Button_Click);
			// 
			// Start_Pictutre
			// 
			this->Start_Pictutre->Location = System::Drawing::Point(385, 203);
			this->Start_Pictutre->Name = L"Start_Pictutre";
			this->Start_Pictutre->Size = System::Drawing::Size(100, 50);
			this->Start_Pictutre->TabIndex = 1;
			this->Start_Pictutre->TabStop = false;
			this->Start_Pictutre->Click += gcnew System::EventHandler(this, &MyForm::Start_Pictutre_Click);
			// 
			// MenuPicture
			// 
			this->MenuPicture->Location = System::Drawing::Point(26, 20);
			this->MenuPicture->Name = L"MenuPicture";
			this->MenuPicture->Size = System::Drawing::Size(850, 150);
			this->MenuPicture->TabIndex = 0;
			this->MenuPicture->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(954, 546);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSpac))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRAlt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRWin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFile))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRCtr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLAlt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLWin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLCtr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRShi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBSla))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxComm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxDot))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxb))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxv))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxx))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxz))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLshi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxEnt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxQuot))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSemi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxk))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxj))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxgg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxf))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxd))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxs))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxa))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCap))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFSla))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRBra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLBra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxu))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxr))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxw))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxq))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTAB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBS))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxPlus))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxDash))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxZERO))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxNINE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxEIGH))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSEVE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxSIX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFIVE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxFOUR))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTHREE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTWO))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxONE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxTild))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_Button))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Second_Button))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start_Pictutre))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuPicture))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Graphics^  g;

		typer tutor;

		int Length = 0;

		Bitmap^ ExitGame = gcnew Bitmap("Images\\exit.bmp");
		Bitmap^ StartGame = gcnew Bitmap("Images\\exit.bmp");

		Bitmap^ LAlt = gcnew Bitmap("Images\\caps_key.bmp");
		Image^ RAlt = gcnew Bitmap("Images\\caps_key.bmp");
		Image^ BS = gcnew Bitmap("Images\\caps_key.bmp");
		Image^ Cap = gcnew Bitmap("Images\\caps_key.bmp");
		Image^ LCtr = gcnew Bitmap("Images\\ctrl_key.bmp");
		Image^ RCtr = gcnew Bitmap("Images\\ctrl_key.bmp");
		Image^ Ent = gcnew Bitmap("Images\\enter_key.bmp");
		Image^ Comm = gcnew Bitmap("Images\\letter_,.bmp");
		Image^ Dot = gcnew Bitmap("Images\\letter_..bmp");
		Image^ Quot = gcnew Bitmap("Images\\letter_'.bmp");
		Image^ Dash = gcnew Bitmap("Images\\letter_-.bmp");
		Image^ Semi = gcnew Bitmap("Images\\letter_;.bmp");
		Image^ LBra = gcnew Bitmap("Images\\letter_[.bmp");
		Image^ RBra = gcnew Bitmap("Images\\letter_].bmp");
		Image^ Tild = gcnew Bitmap("Images\\letter_`.bmp");
		Image^ Plus = gcnew Bitmap("Images\\letter_=.bmp");
		Image^ BSla = gcnew Bitmap("Images\\letter_bslash.bmp");
		Image^ ZERO = gcnew Bitmap("Images\\letter_0.bmp");
		Image^ ONE = gcnew Bitmap("Images\\letter_1.bmp");
		Image^ TWO = gcnew Bitmap("Images\\letter_2.bmp");
		Image^ THRE = gcnew Bitmap("Images\\letter_3.bmp");
		Image^ FOUR = gcnew Bitmap("Images\\letter_4.bmp");
		Image^ FIVE = gcnew Bitmap("Images\\letter_5.bmp");
		Image^ SIX = gcnew Bitmap("Images\\letter_6.bmp");
		Image^ SEVE = gcnew Bitmap("Images\\letter_7.bmp");
		Image^ EIGH = gcnew Bitmap("Images\\letter_8.bmp");
		Image^ NINE = gcnew Bitmap("Images\\letter_9.bmp");
		Image^ a = gcnew Bitmap("Images\\letter_a.bmp");
		Image^ b = gcnew Bitmap("Images\\letter_b.bmp");
		Image^ c = gcnew Bitmap("Images\\letter_c.bmp");
		Image^ d = gcnew Bitmap("Images\\letter_d.bmp");
		Image^ ee = gcnew Bitmap("Images\\letter_e.bmp");
		Image^ f = gcnew Bitmap("Images\\letter_f.bmp");
		Image^ gg = gcnew Bitmap("Images\\letter_g.bmp");
		Image^ h = gcnew Bitmap("Images\\letter_h.bmp");
		Image^ i = gcnew Bitmap("Images\\letter_i.bmp");
		Image^ j = gcnew Bitmap("Images\\letter_j.bmp");
		Image^ k = gcnew Bitmap("Images\\letter_k.bmp"); 
		Image^ l = gcnew Bitmap("Images\\letter_l.bmp");
		Image^ m = gcnew Bitmap("Images\\letter_m.bmp");
		Image^ n = gcnew Bitmap("Images\\letter_n.bmp");
		Image^ o = gcnew Bitmap("Images\\letter_o.bmp");
		Image^ p = gcnew Bitmap("Images\\letter_p.bmp");
		Image^ q = gcnew Bitmap("Images\\letter_q.bmp");
		Image^ r = gcnew Bitmap("Images\\letter_r.bmp");
		Image^ s = gcnew Bitmap("Images\\letter_s.bmp");
		Image^ t = gcnew Bitmap("Images\\letter_t.bmp");
		Image^ u = gcnew Bitmap("Images\\letter_u.bmp");
		Image^ v = gcnew Bitmap("Images\\letter_v.bmp");
		Image^ w = gcnew Bitmap("Images\\letter_w.bmp");
		Image^ x = gcnew Bitmap("Images\\letter_x.bmp");
		Image^ y = gcnew Bitmap("Images\\letter_y.bmp");
		Image^ z = gcnew Bitmap("Images\\letter_z.bmp");
		Image^ LShi = gcnew Bitmap("Images\\shift_key.bmp");
		Image^ RShi = gcnew Bitmap("Images\\shift_key.bmp");
		Image^ Spac = gcnew Bitmap("Images\\space_key_l.bmp");
		Image^ FSla = gcnew Bitmap("Images\\tab_key1.bmp");
		Image^ TAB = gcnew Bitmap("Images\\tab_key2.bmp");
		//Image^ LWin = gcnew Bitmap("Images\\windows_key2.bmp");
		//Image^ RWin = gcnew Bitmap("Images\\windows_key2.bmp");

		Image^ File = gcnew Bitmap("Images\\letter_file.bmp");


	//private: System::Windows::Forms::PictureBox^  MenuPicture;
	//private: System::Windows::Forms::PictureBox^  Exit_Button;

		array<char>^ Keys = gcnew array<char>(61);
		array<Control^>^ Keysss = gcnew array<Control^>(61);

		/*
		enum Pictures {
			Tild, ONE, TWO, THRE, FOUR, FIVE, SIX, SEVE, EIGH, NINE, ZERO, Dash, Plus,
			BS, TAB, q, w, e, r, t, y, u, i, o, p, LBra, RBra,
			FSla, Cap, a, s, d, f, gg, h, j, k, l, Semi, Quot,
			Ent, LShi, z, x, c, v, b, n, m, Comm, Dot, BSla,
			RShi, LCtr, LWin, LAlt, Spac, RAlt, RWin, File, RCtr
		};

		*/
		//Pictures imgur;

		//Pictures imgur;
		/* potential way of level design
		char Level1[7];
		char Level1[] = {'t', 'e', 's', 't', 'i', 'n', 'g'};
		*/

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 g = panel1->CreateGraphics();
			 Exit_Button->Image = ExitGame;
			 Start_Pictutre->Image = StartGame;
			 Second_Button->Image = ExitGame;

			 PictureBoxTild->Image = Tild;
			 pictureBoxSpac->Image = Spac;
			 pictureBoxRAlt->Image = RAlt;
			 //pictureBoxRWin->Image = RWin;
			 pictureBoxFile->Image = File;
			 pictureBoxRCtr->Image = RCtr;
			 pictureBoxLAlt->Image = LAlt;
			 //pictureBoxLWin->Image = LWin;
			 pictureBoxLCtr->Image = LCtr;
			 pictureBoxBSla->Image = BSla;
			 pictureBoxComm->Image = Comm;
			 pictureBoxDot->Image = Dot;
			 pictureBoxm->Image = m;
			 pictureBoxn->Image = n;
			 pictureBoxb->Image = b;
			 pictureBoxv->Image = v;
			 pictureBoxc->Image = c;
			 pictureBoxx->Image = x;
			 pictureBoxz->Image = z;
			 pictureBoxLshi->Image = LShi;
			 pictureBoxEnt->Image = Ent;
			 pictureBoxQuot->Image = Quot;
			 pictureBoxSemi->Image = Semi;
			 pictureBoxl->Image = l;
			 pictureBoxk->Image = k;
			 pictureBoxj->Image = j;
			 pictureBoxh->Image = h;
			 pictureBoxgg->Image = gg;
			 pictureBoxf->Image = f;
			 pictureBoxd->Image = d;
			 pictureBoxs->Image = s;
			 pictureBoxa->Image = a;
			 pictureBoxCap->Image = Cap;
			 pictureBoxFSla->Image = FSla;
			 pictureBoxRBra->Image = RBra;
			 pictureBoxLBra->Image = LBra;
			 pictureBoxp->Image = p;
			 pictureBoxo->Image = o;
			 pictureBoxi->Image = i;
			 pictureBoxu->Image = u;
			 pictureBoxy->Image = y;
			 pictureBoxt->Image = t;
			 pictureBoxr->Image = r;
			 pictureBoxe->Image = ee;
			 pictureBoxw->Image = w;
			 pictureBoxq->Image = q;
			 pictureBoxTAB->Image = TAB;
			 pictureBoxBS->Image = ExitGame;
			 pictureBoxPlus->Image = Plus;
			 PictureBoxDash->Image = Dash;
			 pictureBoxZERO->Image = ZERO;
			 pictureBoxNINE->Image = NINE;
			 pictureBoxEIGH->Image = EIGH;
			 pictureBoxSEVE->Image = SEVE;
			 pictureBoxSIX->Image = SIX;
			 pictureBoxFIVE->Image = FIVE;
			 pictureBoxFOUR->Image = FOUR;
			 pictureBoxTHREE->Image = THRE;
			 pictureBoxTWO->Image = TWO;
			 pictureBoxONE->Image = ONE;
			 pictureBoxRShi->Image = RShi;
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			 int op = 65;
			 if (e->KeyChar.CompareTo(op))
			 {
				 MessageBox::Show("yes");
			 }
			 else
				 MessageBox::Show("not working");
}

//start game button
private: System::Void Start_Pictutre_Click(System::Object^  sender, System::EventArgs^  e) {
			// panel1->Controls->Clear();

			 //makes new picturebox
			 /*
			char Keys[] = { 'Tild', 'ONE', 'TWO', 'THRE', 'FOUR', 'FIVE', 'SIX', 'SEVE', 'EIGH', 'NINE', 'ZERO', 'Dash', 'Plus',
				 'BS', 'TAB', 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'LBra', 'RBra',
				 'FSla', 'Cap', 'a', 's', 'd', 'f', 'gg', 'h', 'j', 'k', 'l', 'Semi', 'Quot',
				 'Ent', 'LShi', 'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Comm', 'Dot', 'BSla',
				 'RShi', 'LCtr', 'LWin', 'LAlt', 'Spac', 'RAlt', 'RWin', 'File', 'RCtr' };

				 */

			 /*
=======
		
>>>>>>> origin/master
=======
>>>>>>> parent of b22f2c9... loaded images
			//puts images in picture box
			for (int i = 0; i < 61; i++)
			{
				String^ Astring = "PictureBox" + Keys[i].ToString();
				String Bstring = Keys[i].ToString;

				PictureBox^ Astring = Bitmap^ Bstring;

				//Controls->Find("pictureBox" + Keys[i], true)[0];// = Controls->Find("" + Keys[i], true)[0];
			}
			/*
			//changes picturebox visibility
			for (int i = 0; i < 61; i++)
			{
				Controls->Find("pictureBox" + Keys[i], true)[0]->Visible = false;
			}
			*/
}
//dont know yet
private: System::Void Second_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Nothing to see here.");
}
private: System::Void Exit_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}

private: System::Void PictureBoxTild_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox56_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 char randMax = 25;
			 char ones[27] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
				 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
				 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };



			 srand(time(0));
			 for (int j = 1; j <= 27; j++)
			 {

				 for (int i = 1; i <= 5; i++)
				 {
					 char c = (rand() % randMax);
					 char one = ones[c];

					 if (one == 97)
					 {
						 textBox1->Text = textBox1->Text + "a";
					 }
					 if (one == 98)
					 {
						 textBox1->Text = textBox1->Text + "b";
					 }
					 if (one == 99)
					 {
						 textBox1->Text = textBox1->Text + "c";
					 }
					 if (one == 100)
					 {
						 textBox1->Text = textBox1->Text + "d";
					 }
					 if (one == 101)
					 {
						 textBox1->Text = textBox1->Text + "e";
					 }
					 if (one == 102)
					 {
						 textBox1->Text = textBox1->Text + "f";
					 }
					 if (one == 103)
					 {
						 textBox1->Text = textBox1->Text + "g";
					 }
					 if (one == 104)
					 {
						 textBox1->Text = textBox1->Text + "h";
					 }
					 if (one == 105)
					 {
						 textBox1->Text = textBox1->Text + "i";
					 }
					 if (one == 106)
					 {
						 textBox1->Text = textBox1->Text + "j";
					 }
					 if (one == 107)
					 {
						 textBox1->Text = textBox1->Text + "k";
					 }
					 if (one == 108)
					 {
						 textBox1->Text = textBox1->Text + "l";
					 }
					 if (one == 109)
					 {
						 textBox1->Text = textBox1->Text + "m";
					 }
					 if (one == 110)
					 {
						 textBox1->Text = textBox1->Text + "n";
					 }
					 if (one == 111)
					 {
						 textBox1->Text = textBox1->Text + "o";
					 }
					 if (one == 112)
					 {
						 textBox1->Text = textBox1->Text + "p";
					 }
					 if (one == 113)
					 {
						 textBox1->Text = textBox1->Text + "q";
					 }
					 if (one == 114)
					 {
						 textBox1->Text = textBox1->Text + "r";
					 }
					 if (one == 115)
					 {
						 textBox1->Text = textBox1->Text + "s";
					 }
					 if (one == 116)
					 {
						 textBox1->Text = textBox1->Text + "t";
					 }
					 if (one == 117)
					 {
						 textBox1->Text = textBox1->Text + "u";
					 }
					 if (one == 118)
					 {
						 textBox1->Text = textBox1->Text + "v";
					 }
					 if (one == 119)
					 {
						 textBox1->Text = textBox1->Text + "w";
					 }
					 if (one == 120)
					 {
						 textBox1->Text = textBox1->Text + "x";
					 }
					 if (one == 121)
					 {
						 textBox1->Text = textBox1->Text + "y";
					 }
					 if (one == 122)
					 {
						 textBox1->Text = textBox1->Text + "z";
					 }


					 //+ "\r\n";
					 //textBox1->Text = textBox1->Text + (char)ones[c] + "\r\n";
				 }
				 textBox1->Text = textBox1->Text + " ";
			 }
			 textBox1->Text = textBox1->Text + "\r\n";
}
}; //end of myform class
}
