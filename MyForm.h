#pragma once
#include "tutor.h"
#include <windows.h>
#include <Winuser.h>
#include <stdio.h>

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


	private: System::Windows::Forms::PictureBox^  pictureBoxRShi;


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

	private: System::Windows::Forms::PictureBox^  pictureBoxg;

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



	private: System::Windows::Forms::PictureBox^  pictureBox0;

	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
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
			this->pictureBoxg = (gcnew System::Windows::Forms::PictureBox());
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
			this->pictureBox0 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxg))->BeginInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxTild))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_Button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Second_Button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start_Pictutre))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuPicture))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
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
			this->panel1->Controls->Add(this->pictureBoxg);
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
			this->panel1->Controls->Add(this->pictureBox0);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
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
			// pictureBoxSpac
			// 
			this->pictureBoxSpac->Location = System::Drawing::Point(254, 400);
			this->pictureBoxSpac->Name = L"pictureBoxSpac";
			this->pictureBoxSpac->Size = System::Drawing::Size(329, 50);
			this->pictureBoxSpac->TabIndex = 64;
			this->pictureBoxSpac->TabStop = false;
			// 
			// pictureBoxRAlt
			// 
			this->pictureBoxRAlt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxRAlt.Image")));
			this->pictureBoxRAlt->Location = System::Drawing::Point(589, 400);
			this->pictureBoxRAlt->Name = L"pictureBoxRAlt";
			this->pictureBoxRAlt->Size = System::Drawing::Size(59, 50);
			this->pictureBoxRAlt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxRAlt->TabIndex = 63;
			this->pictureBoxRAlt->TabStop = false;
			// 
			// pictureBoxRWin
			// 
			this->pictureBoxRWin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxRWin.Image")));
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
			this->pictureBoxRCtr->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxRCtr.Image")));
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
			this->pictureBoxLAlt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxLAlt.Image")));
			this->pictureBoxLAlt->Location = System::Drawing::Point(189, 400);
			this->pictureBoxLAlt->Name = L"pictureBoxLAlt";
			this->pictureBoxLAlt->Size = System::Drawing::Size(59, 50);
			this->pictureBoxLAlt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLAlt->TabIndex = 59;
			this->pictureBoxLAlt->TabStop = false;
			// 
			// pictureBoxLWin
			// 
			this->pictureBoxLWin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxLWin.Image")));
			this->pictureBoxLWin->Location = System::Drawing::Point(124, 400);
			this->pictureBoxLWin->Name = L"pictureBoxLWin";
			this->pictureBoxLWin->Size = System::Drawing::Size(59, 50);
			this->pictureBoxLWin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLWin->TabIndex = 58;
			this->pictureBoxLWin->TabStop = false;
			// 
			// pictureBoxLCtr
			// 
			this->pictureBoxLCtr->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxLCtr.Image")));
			this->pictureBoxLCtr->Location = System::Drawing::Point(26, 400);
			this->pictureBoxLCtr->Name = L"pictureBoxLCtr";
			this->pictureBoxLCtr->Size = System::Drawing::Size(92, 50);
			this->pictureBoxLCtr->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLCtr->TabIndex = 57;
			this->pictureBoxLCtr->TabStop = false;
			// 
			// pictureBoxRShi
			// 
			this->pictureBoxRShi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxRShi.Image")));
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
			this->pictureBoxBSla->TabIndex = 55;
			this->pictureBoxBSla->TabStop = false;
			// 
			// pictureBoxComm
			// 
			this->pictureBoxComm->Location = System::Drawing::Point(542, 344);
			this->pictureBoxComm->Name = L"pictureBoxComm";
			this->pictureBoxComm->Size = System::Drawing::Size(50, 50);
			this->pictureBoxComm->TabIndex = 54;
			this->pictureBoxComm->TabStop = false;
			// 
			// pictureBoxDot
			// 
			this->pictureBoxDot->Location = System::Drawing::Point(598, 344);
			this->pictureBoxDot->Name = L"pictureBoxDot";
			this->pictureBoxDot->Size = System::Drawing::Size(50, 50);
			this->pictureBoxDot->TabIndex = 53;
			this->pictureBoxDot->TabStop = false;
			// 
			// pictureBoxm
			// 
			this->pictureBoxm->Location = System::Drawing::Point(486, 344);
			this->pictureBoxm->Name = L"pictureBoxm";
			this->pictureBoxm->Size = System::Drawing::Size(50, 50);
			this->pictureBoxm->TabIndex = 52;
			this->pictureBoxm->TabStop = false;
			// 
			// pictureBoxn
			// 
			this->pictureBoxn->Location = System::Drawing::Point(430, 344);
			this->pictureBoxn->Name = L"pictureBoxn";
			this->pictureBoxn->Size = System::Drawing::Size(50, 50);
			this->pictureBoxn->TabIndex = 51;
			this->pictureBoxn->TabStop = false;
			// 
			// pictureBoxb
			// 
			this->pictureBoxb->Location = System::Drawing::Point(374, 344);
			this->pictureBoxb->Name = L"pictureBoxb";
			this->pictureBoxb->Size = System::Drawing::Size(50, 50);
			this->pictureBoxb->TabIndex = 50;
			this->pictureBoxb->TabStop = false;
			// 
			// pictureBoxv
			// 
			this->pictureBoxv->Location = System::Drawing::Point(318, 344);
			this->pictureBoxv->Name = L"pictureBoxv";
			this->pictureBoxv->Size = System::Drawing::Size(50, 50);
			this->pictureBoxv->TabIndex = 49;
			this->pictureBoxv->TabStop = false;
			// 
			// pictureBoxc
			// 
			this->pictureBoxc->Location = System::Drawing::Point(262, 344);
			this->pictureBoxc->Name = L"pictureBoxc";
			this->pictureBoxc->Size = System::Drawing::Size(50, 50);
			this->pictureBoxc->TabIndex = 48;
			this->pictureBoxc->TabStop = false;
			// 
			// pictureBoxx
			// 
			this->pictureBoxx->Location = System::Drawing::Point(206, 344);
			this->pictureBoxx->Name = L"pictureBoxx";
			this->pictureBoxx->Size = System::Drawing::Size(50, 50);
			this->pictureBoxx->TabIndex = 47;
			this->pictureBoxx->TabStop = false;
			// 
			// pictureBoxz
			// 
			this->pictureBoxz->Location = System::Drawing::Point(150, 344);
			this->pictureBoxz->Name = L"pictureBoxz";
			this->pictureBoxz->Size = System::Drawing::Size(50, 50);
			this->pictureBoxz->TabIndex = 46;
			this->pictureBoxz->TabStop = false;
			// 
			// pictureBoxLshi
			// 
			this->pictureBoxLshi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxLshi.Image")));
			this->pictureBoxLshi->Location = System::Drawing::Point(26, 344);
			this->pictureBoxLshi->Name = L"pictureBoxLshi";
			this->pictureBoxLshi->Size = System::Drawing::Size(118, 50);
			this->pictureBoxLshi->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxLshi->TabIndex = 45;
			this->pictureBoxLshi->TabStop = false;
			// 
			// pictureBoxEnt
			// 
			this->pictureBoxEnt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxEnt.Image")));
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
			this->pictureBoxQuot->TabIndex = 43;
			this->pictureBoxQuot->TabStop = false;
			// 
			// pictureBoxSemi
			// 
			this->pictureBoxSemi->Location = System::Drawing::Point(628, 288);
			this->pictureBoxSemi->Name = L"pictureBoxSemi";
			this->pictureBoxSemi->Size = System::Drawing::Size(50, 50);
			this->pictureBoxSemi->TabIndex = 42;
			this->pictureBoxSemi->TabStop = false;
			// 
			// pictureBoxl
			// 
			this->pictureBoxl->Location = System::Drawing::Point(572, 288);
			this->pictureBoxl->Name = L"pictureBoxl";
			this->pictureBoxl->Size = System::Drawing::Size(50, 50);
			this->pictureBoxl->TabIndex = 41;
			this->pictureBoxl->TabStop = false;
			// 
			// pictureBoxk
			// 
			this->pictureBoxk->Location = System::Drawing::Point(516, 288);
			this->pictureBoxk->Name = L"pictureBoxk";
			this->pictureBoxk->Size = System::Drawing::Size(50, 50);
			this->pictureBoxk->TabIndex = 40;
			this->pictureBoxk->TabStop = false;
			// 
			// pictureBoxj
			// 
			this->pictureBoxj->Location = System::Drawing::Point(460, 288);
			this->pictureBoxj->Name = L"pictureBoxj";
			this->pictureBoxj->Size = System::Drawing::Size(50, 50);
			this->pictureBoxj->TabIndex = 39;
			this->pictureBoxj->TabStop = false;
			// 
			// pictureBoxh
			// 
			this->pictureBoxh->Location = System::Drawing::Point(404, 288);
			this->pictureBoxh->Name = L"pictureBoxh";
			this->pictureBoxh->Size = System::Drawing::Size(50, 50);
			this->pictureBoxh->TabIndex = 38;
			this->pictureBoxh->TabStop = false;
			// 
			// pictureBoxg
			// 
			this->pictureBoxg->Location = System::Drawing::Point(348, 288);
			this->pictureBoxg->Name = L"pictureBoxg";
			this->pictureBoxg->Size = System::Drawing::Size(50, 50);
			this->pictureBoxg->TabIndex = 37;
			this->pictureBoxg->TabStop = false;
			// 
			// pictureBoxf
			// 
			this->pictureBoxf->Location = System::Drawing::Point(292, 288);
			this->pictureBoxf->Name = L"pictureBoxf";
			this->pictureBoxf->Size = System::Drawing::Size(50, 50);
			this->pictureBoxf->TabIndex = 36;
			this->pictureBoxf->TabStop = false;
			// 
			// pictureBoxd
			// 
			this->pictureBoxd->Location = System::Drawing::Point(236, 288);
			this->pictureBoxd->Name = L"pictureBoxd";
			this->pictureBoxd->Size = System::Drawing::Size(50, 50);
			this->pictureBoxd->TabIndex = 35;
			this->pictureBoxd->TabStop = false;
			// 
			// pictureBoxs
			// 
			this->pictureBoxs->Location = System::Drawing::Point(180, 288);
			this->pictureBoxs->Name = L"pictureBoxs";
			this->pictureBoxs->Size = System::Drawing::Size(50, 50);
			this->pictureBoxs->TabIndex = 34;
			this->pictureBoxs->TabStop = false;
			// 
			// pictureBoxa
			// 
			this->pictureBoxa->Location = System::Drawing::Point(124, 288);
			this->pictureBoxa->Name = L"pictureBoxa";
			this->pictureBoxa->Size = System::Drawing::Size(50, 50);
			this->pictureBoxa->TabIndex = 33;
			this->pictureBoxa->TabStop = false;
			// 
			// pictureBoxCap
			// 
			this->pictureBoxCap->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCap.Image")));
			this->pictureBoxCap->Location = System::Drawing::Point(26, 288);
			this->pictureBoxCap->Name = L"pictureBoxCap";
			this->pictureBoxCap->Size = System::Drawing::Size(92, 50);
			this->pictureBoxCap->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxCap->TabIndex = 32;
			this->pictureBoxCap->TabStop = false;
			// 
			// pictureBoxFSla
			// 
			this->pictureBoxFSla->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxFSla.Image")));
			this->pictureBoxFSla->Location = System::Drawing::Point(784, 232);
			this->pictureBoxFSla->Name = L"pictureBoxFSla";
			this->pictureBoxFSla->Size = System::Drawing::Size(92, 50);
			this->pictureBoxFSla->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBoxFSla->TabIndex = 31;
			this->pictureBoxFSla->TabStop = false;
			// 
			// pictureBoxRBra
			// 
			this->pictureBoxRBra->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxRBra.Image")));
			this->pictureBoxRBra->Location = System::Drawing::Point(728, 232);
			this->pictureBoxRBra->Name = L"pictureBoxRBra";
			this->pictureBoxRBra->Size = System::Drawing::Size(50, 50);
			this->pictureBoxRBra->TabIndex = 30;
			this->pictureBoxRBra->TabStop = false;
			// 
			// pictureBoxLBra
			// 
			this->pictureBoxLBra->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxLBra.Image")));
			this->pictureBoxLBra->Location = System::Drawing::Point(672, 232);
			this->pictureBoxLBra->Name = L"pictureBoxLBra";
			this->pictureBoxLBra->Size = System::Drawing::Size(50, 50);
			this->pictureBoxLBra->TabIndex = 29;
			this->pictureBoxLBra->TabStop = false;
			// 
			// pictureBoxp
			// 
			this->pictureBoxp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxp.Image")));
			this->pictureBoxp->Location = System::Drawing::Point(616, 232);
			this->pictureBoxp->Name = L"pictureBoxp";
			this->pictureBoxp->Size = System::Drawing::Size(50, 50);
			this->pictureBoxp->TabIndex = 28;
			this->pictureBoxp->TabStop = false;
			// 
			// pictureBoxo
			// 
			this->pictureBoxo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxo.Image")));
			this->pictureBoxo->Location = System::Drawing::Point(560, 232);
			this->pictureBoxo->Name = L"pictureBoxo";
			this->pictureBoxo->Size = System::Drawing::Size(50, 50);
			this->pictureBoxo->TabIndex = 27;
			this->pictureBoxo->TabStop = false;
			// 
			// pictureBoxi
			// 
			this->pictureBoxi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxi.Image")));
			this->pictureBoxi->Location = System::Drawing::Point(504, 232);
			this->pictureBoxi->Name = L"pictureBoxi";
			this->pictureBoxi->Size = System::Drawing::Size(50, 50);
			this->pictureBoxi->TabIndex = 26;
			this->pictureBoxi->TabStop = false;
			// 
			// pictureBoxu
			// 
			this->pictureBoxu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxu.Image")));
			this->pictureBoxu->Location = System::Drawing::Point(448, 232);
			this->pictureBoxu->Name = L"pictureBoxu";
			this->pictureBoxu->Size = System::Drawing::Size(50, 50);
			this->pictureBoxu->TabIndex = 25;
			this->pictureBoxu->TabStop = false;
			// 
			// pictureBoxy
			// 
			this->pictureBoxy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxy.Image")));
			this->pictureBoxy->Location = System::Drawing::Point(392, 232);
			this->pictureBoxy->Name = L"pictureBoxy";
			this->pictureBoxy->Size = System::Drawing::Size(50, 50);
			this->pictureBoxy->TabIndex = 24;
			this->pictureBoxy->TabStop = false;
			// 
			// pictureBoxt
			// 
			this->pictureBoxt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxt.Image")));
			this->pictureBoxt->Location = System::Drawing::Point(336, 232);
			this->pictureBoxt->Name = L"pictureBoxt";
			this->pictureBoxt->Size = System::Drawing::Size(50, 50);
			this->pictureBoxt->TabIndex = 23;
			this->pictureBoxt->TabStop = false;
			// 
			// pictureBoxr
			// 
			this->pictureBoxr->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxr.Image")));
			this->pictureBoxr->Location = System::Drawing::Point(280, 232);
			this->pictureBoxr->Name = L"pictureBoxr";
			this->pictureBoxr->Size = System::Drawing::Size(50, 50);
			this->pictureBoxr->TabIndex = 22;
			this->pictureBoxr->TabStop = false;
			// 
			// pictureBoxe
			// 
			this->pictureBoxe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxe.Image")));
			this->pictureBoxe->Location = System::Drawing::Point(224, 232);
			this->pictureBoxe->Name = L"pictureBoxe";
			this->pictureBoxe->Size = System::Drawing::Size(50, 50);
			this->pictureBoxe->TabIndex = 21;
			this->pictureBoxe->TabStop = false;
			// 
			// pictureBoxw
			// 
			this->pictureBoxw->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxw.Image")));
			this->pictureBoxw->Location = System::Drawing::Point(168, 232);
			this->pictureBoxw->Name = L"pictureBoxw";
			this->pictureBoxw->Size = System::Drawing::Size(50, 50);
			this->pictureBoxw->TabIndex = 20;
			this->pictureBoxw->TabStop = false;
			// 
			// pictureBoxq
			// 
			this->pictureBoxq->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxq.Image")));
			this->pictureBoxq->Location = System::Drawing::Point(112, 232);
			this->pictureBoxq->Name = L"pictureBoxq";
			this->pictureBoxq->Size = System::Drawing::Size(50, 50);
			this->pictureBoxq->TabIndex = 19;
			this->pictureBoxq->TabStop = false;
			// 
			// pictureBoxTAB
			// 
			this->pictureBoxTAB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxTAB.Image")));
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
			this->pictureBoxBS->TabIndex = 17;
			this->pictureBoxBS->TabStop = false;
			// 
			// pictureBoxPlus
			// 
			this->pictureBoxPlus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxPlus.Image")));
			this->pictureBoxPlus->Location = System::Drawing::Point(698, 176);
			this->pictureBoxPlus->Name = L"pictureBoxPlus";
			this->pictureBoxPlus->Size = System::Drawing::Size(50, 50);
			this->pictureBoxPlus->TabIndex = 16;
			this->pictureBoxPlus->TabStop = false;
			// 
			// PictureBoxDash
			// 
			this->PictureBoxDash->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBoxDash.Image")));
			this->PictureBoxDash->Location = System::Drawing::Point(642, 176);
			this->PictureBoxDash->Name = L"PictureBoxDash";
			this->PictureBoxDash->Size = System::Drawing::Size(50, 50);
			this->PictureBoxDash->TabIndex = 15;
			this->PictureBoxDash->TabStop = false;
			// 
			// pictureBox0
			// 
			this->pictureBox0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox0.Image")));
			this->pictureBox0->Location = System::Drawing::Point(586, 176);
			this->pictureBox0->Name = L"pictureBox0";
			this->pictureBox0->Size = System::Drawing::Size(50, 50);
			this->pictureBox0->TabIndex = 14;
			this->pictureBox0->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(530, 176);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(50, 50);
			this->pictureBox9->TabIndex = 13;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(474, 176);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(50, 50);
			this->pictureBox8->TabIndex = 12;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(418, 176);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(50, 50);
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(362, 176);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(50, 50);
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(306, 176);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(50, 50);
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(250, 176);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 50);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(194, 176);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(138, 176);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(82, 176);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// PictureBoxTild
			// 
			this->PictureBoxTild->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureBoxTild->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBoxTild.Image")));
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxg))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		Image^ Start = Image::FromFile("Images\\startButton.jpg");

		array<char>^ Keys = gcnew array<char>(61);
		array<System::Windows::Forms::PictureBox ^>^ kKeys = gcnew array<System::Windows::Forms::PictureBox ^>(63);

		/* potential way of level design
		char Level1[7];
		char Level1[] = {'t', 'e', 's', 't', 'i', 'n', 'g'};
		*/

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 g = panel1->CreateGraphics();
			 Exit_Button->Image = ExitGame;
			 Start_Pictutre->Image = Start;
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
			 PictureBox^ Keyboard;
			 Keyboard = gcnew PictureBox;
			 Keyboard->Location = Point(240, 210);
			 Keyboard->Size.Height = 30;
			 Keyboard->Size.Width = 30;
			 Keyboard->BackColor.Aquamarine;
			 Keyboard->BackgroundImage = NewGame;
			 Controls->Add(Keyboard);
			 Keyboard->Visible = true;
			*/

			 /*panel1->Refresh();
			 PictureBox ^Keyboard = gcnew PictureBox();

			 Keyboard->Parent = this;
			 Keyboard->Location = Point(240, 120);
			 Keyboard->Size.Height = 30;
			 Keyboard->Size.Width = 30;
			 Keyboard->BackColor.Aquamarine;
			 Keyboard->Image = NewGame;
			 */
	 
			 //pictureBox1->Image = Start;

			char Keys[] = { 'Tild', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 'Dash', 'Plus',
				 'BS', 'TAB', 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'LBra', 'RBra',
				 'FSla', 'Cap', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'Semi', 'Quot',
				 'Ent', 'LShi', 'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Comm', 'Dot', 'BSla',
				 'RShi', 'LCtr', 'LWin', 'LAlt', 'Spac', 'RAlt', 'RWin', 'File', 'RCtr' };
			/*
			PictureBox^ kKeys[] = { PictureBoxTild, pictureBox0, pictureBox1, pictureBox2, pictureBox3, pictureBox4, pictureBox5, pictureBox6,
				pictureBox7, pictureBox8, pictureBox9, pictureBox0, PictureBoxDash, pictureBoxPlus, pictureBoxBS, pictureBoxTAB,
				pictureBoxq, pictureBoxw, pictureBoxe, pictureBoxr, pictureBoxt, pictureBoxy, pictureBoxu, pictureBoxi, pictureBoxo,
				pictureBoxp, pictureBoxLBra, pictureBoxRBra, pictureBoxFSla, pictureBoxCap, pictureBoxa, pictureBoxs, pictureBoxd,
				pictureBoxd, pictureBoxf, pictureBoxg, pictureBoxh, pictureBoxj, pictureBoxk, pictureBoxl, pictureBoxSemi,
				pictureBoxQuot, pictureBoxEnt, pictureBoxLshi, pictureBoxz, pictureBoxx, pictureBoxc, pictureBoxv, pictureBoxb,
				pictureBoxn, pictureBoxm, pictureBoxComm, pictureBoxDot, pictureBoxBSla, pictureBoxRShi, pictureBoxLCtr,
				pictureBoxLWin, pictureBoxLAlt, pictureBoxSpac, pictureBoxRAlt, pictureBoxRWin, pictureBoxFile, pictureBoxRCtr
			};
			*/

			for (int i = 0; i < 61; i++)
			{
				Controls->Find("pictureBox" + Keys[i], true)[0]->Visible = false;
			}

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

}; //end of myform class
}
