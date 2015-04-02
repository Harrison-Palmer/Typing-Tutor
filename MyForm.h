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
	private: System::Windows::Forms::PictureBox^  pictureBox60;
	private: System::Windows::Forms::PictureBox^  pictureBox59;
	private: System::Windows::Forms::PictureBox^  pictureBox58;
	private: System::Windows::Forms::PictureBox^  pictureBox57;
	private: System::Windows::Forms::PictureBox^  pictureBox56;
	private: System::Windows::Forms::PictureBox^  pictureBox55;
	private: System::Windows::Forms::PictureBox^  pictureBox54;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
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

	private: System::Windows::Forms::PictureBox^  PictureBoxHyphen;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
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
			this->PictureBoxHyphen = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxHyphen))->BeginInit();
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
			this->panel1->Controls->Add(this->pictureBox60);
			this->panel1->Controls->Add(this->pictureBox59);
			this->panel1->Controls->Add(this->pictureBox58);
			this->panel1->Controls->Add(this->pictureBox57);
			this->panel1->Controls->Add(this->pictureBox56);
			this->panel1->Controls->Add(this->pictureBox55);
			this->panel1->Controls->Add(this->pictureBox54);
			this->panel1->Controls->Add(this->pictureBox53);
			this->panel1->Controls->Add(this->pictureBox52);
			this->panel1->Controls->Add(this->pictureBox51);
			this->panel1->Controls->Add(this->pictureBox50);
			this->panel1->Controls->Add(this->pictureBox49);
			this->panel1->Controls->Add(this->pictureBox48);
			this->panel1->Controls->Add(this->pictureBox47);
			this->panel1->Controls->Add(this->pictureBox46);
			this->panel1->Controls->Add(this->pictureBox45);
			this->panel1->Controls->Add(this->pictureBox44);
			this->panel1->Controls->Add(this->pictureBox43);
			this->panel1->Controls->Add(this->pictureBox42);
			this->panel1->Controls->Add(this->pictureBox41);
			this->panel1->Controls->Add(this->pictureBox40);
			this->panel1->Controls->Add(this->pictureBox39);
			this->panel1->Controls->Add(this->pictureBox38);
			this->panel1->Controls->Add(this->pictureBox37);
			this->panel1->Controls->Add(this->pictureBox36);
			this->panel1->Controls->Add(this->pictureBox35);
			this->panel1->Controls->Add(this->pictureBox34);
			this->panel1->Controls->Add(this->pictureBox33);
			this->panel1->Controls->Add(this->pictureBox32);
			this->panel1->Controls->Add(this->pictureBox31);
			this->panel1->Controls->Add(this->pictureBox30);
			this->panel1->Controls->Add(this->pictureBox29);
			this->panel1->Controls->Add(this->pictureBox28);
			this->panel1->Controls->Add(this->pictureBox27);
			this->panel1->Controls->Add(this->pictureBox26);
			this->panel1->Controls->Add(this->pictureBox25);
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
			this->panel1->Controls->Add(this->PictureBoxHyphen);
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
			// pictureBox60
			// 
			this->pictureBox60->Location = System::Drawing::Point(254, 400);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(329, 50);
			this->pictureBox60->TabIndex = 64;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->Location = System::Drawing::Point(589, 400);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(59, 50);
			this->pictureBox59->TabIndex = 63;
			this->pictureBox59->TabStop = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->Location = System::Drawing::Point(654, 400);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(59, 50);
			this->pictureBox58->TabIndex = 62;
			this->pictureBox58->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->Location = System::Drawing::Point(719, 400);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(59, 50);
			this->pictureBox57->TabIndex = 61;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->Location = System::Drawing::Point(784, 400);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(92, 50);
			this->pictureBox56->TabIndex = 60;
			this->pictureBox56->TabStop = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->Location = System::Drawing::Point(189, 400);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(59, 50);
			this->pictureBox55->TabIndex = 59;
			this->pictureBox55->TabStop = false;
			// 
			// pictureBox54
			// 
			this->pictureBox54->Location = System::Drawing::Point(124, 400);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(59, 50);
			this->pictureBox54->TabIndex = 58;
			this->pictureBox54->TabStop = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->Location = System::Drawing::Point(26, 400);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(92, 50);
			this->pictureBox53->TabIndex = 57;
			this->pictureBox53->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->Location = System::Drawing::Point(710, 344);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(166, 50);
			this->pictureBox52->TabIndex = 56;
			this->pictureBox52->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->Location = System::Drawing::Point(654, 344);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(50, 50);
			this->pictureBox51->TabIndex = 55;
			this->pictureBox51->TabStop = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->Location = System::Drawing::Point(542, 344);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(50, 50);
			this->pictureBox50->TabIndex = 54;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->Location = System::Drawing::Point(598, 344);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(50, 50);
			this->pictureBox49->TabIndex = 53;
			this->pictureBox49->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->Location = System::Drawing::Point(486, 344);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(50, 50);
			this->pictureBox48->TabIndex = 52;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->Location = System::Drawing::Point(430, 344);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(50, 50);
			this->pictureBox47->TabIndex = 51;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->Location = System::Drawing::Point(374, 344);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(50, 50);
			this->pictureBox46->TabIndex = 50;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Location = System::Drawing::Point(318, 344);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(50, 50);
			this->pictureBox45->TabIndex = 49;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Location = System::Drawing::Point(262, 344);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(50, 50);
			this->pictureBox44->TabIndex = 48;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Location = System::Drawing::Point(206, 344);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(50, 50);
			this->pictureBox43->TabIndex = 47;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Location = System::Drawing::Point(150, 344);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(50, 50);
			this->pictureBox42->TabIndex = 46;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Location = System::Drawing::Point(26, 344);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(118, 50);
			this->pictureBox41->TabIndex = 45;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->Location = System::Drawing::Point(740, 288);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(136, 50);
			this->pictureBox40->TabIndex = 44;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->Location = System::Drawing::Point(684, 288);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(50, 50);
			this->pictureBox39->TabIndex = 43;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->Location = System::Drawing::Point(628, 288);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(50, 50);
			this->pictureBox38->TabIndex = 42;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->Location = System::Drawing::Point(572, 288);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(50, 50);
			this->pictureBox37->TabIndex = 41;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Location = System::Drawing::Point(516, 288);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(50, 50);
			this->pictureBox36->TabIndex = 40;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Location = System::Drawing::Point(460, 288);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(50, 50);
			this->pictureBox35->TabIndex = 39;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Location = System::Drawing::Point(404, 288);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(50, 50);
			this->pictureBox34->TabIndex = 38;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Location = System::Drawing::Point(348, 288);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(50, 50);
			this->pictureBox33->TabIndex = 37;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Location = System::Drawing::Point(292, 288);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(50, 50);
			this->pictureBox32->TabIndex = 36;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Location = System::Drawing::Point(236, 288);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(50, 50);
			this->pictureBox31->TabIndex = 35;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Location = System::Drawing::Point(180, 288);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(50, 50);
			this->pictureBox30->TabIndex = 34;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Location = System::Drawing::Point(124, 288);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(50, 50);
			this->pictureBox29->TabIndex = 33;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Location = System::Drawing::Point(26, 288);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(92, 50);
			this->pictureBox28->TabIndex = 32;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Location = System::Drawing::Point(784, 232);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(92, 50);
			this->pictureBox27->TabIndex = 31;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Location = System::Drawing::Point(728, 232);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(50, 50);
			this->pictureBox26->TabIndex = 30;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Location = System::Drawing::Point(672, 232);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(50, 50);
			this->pictureBox25->TabIndex = 29;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBoxp->Location = System::Drawing::Point(616, 232);
			this->pictureBoxp->Name = L"pictureBox24";
			this->pictureBoxp->Size = System::Drawing::Size(50, 50);
			this->pictureBoxp->TabIndex = 28;
			this->pictureBoxp->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBoxo->Location = System::Drawing::Point(560, 232);
			this->pictureBoxo->Name = L"pictureBox23";
			this->pictureBoxo->Size = System::Drawing::Size(50, 50);
			this->pictureBoxo->TabIndex = 27;
			this->pictureBoxo->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBoxi->Location = System::Drawing::Point(504, 232);
			this->pictureBoxi->Name = L"pictureBox22";
			this->pictureBoxi->Size = System::Drawing::Size(50, 50);
			this->pictureBoxi->TabIndex = 26;
			this->pictureBoxi->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBoxu->Location = System::Drawing::Point(448, 232);
			this->pictureBoxu->Name = L"pictureBox21";
			this->pictureBoxu->Size = System::Drawing::Size(50, 50);
			this->pictureBoxu->TabIndex = 25;
			this->pictureBoxu->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBoxy->Location = System::Drawing::Point(392, 232);
			this->pictureBoxy->Name = L"pictureBox20";
			this->pictureBoxy->Size = System::Drawing::Size(50, 50);
			this->pictureBoxy->TabIndex = 24;
			this->pictureBoxy->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBoxt->Location = System::Drawing::Point(336, 232);
			this->pictureBoxt->Name = L"pictureBox19";
			this->pictureBoxt->Size = System::Drawing::Size(50, 50);
			this->pictureBoxt->TabIndex = 23;
			this->pictureBoxt->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBoxr->Location = System::Drawing::Point(280, 232);
			this->pictureBoxr->Name = L"pictureBox18";
			this->pictureBoxr->Size = System::Drawing::Size(50, 50);
			this->pictureBoxr->TabIndex = 22;
			this->pictureBoxr->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBoxe->Location = System::Drawing::Point(224, 232);
			this->pictureBoxe->Name = L"pictureBox17";
			this->pictureBoxe->Size = System::Drawing::Size(50, 50);
			this->pictureBoxe->TabIndex = 21;
			this->pictureBoxe->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBoxw->Location = System::Drawing::Point(168, 232);
			this->pictureBoxw->Name = L"pictureBox16";
			this->pictureBoxw->Size = System::Drawing::Size(50, 50);
			this->pictureBoxw->TabIndex = 20;
			this->pictureBoxw->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBoxq->Location = System::Drawing::Point(112, 232);
			this->pictureBoxq->Name = L"pictureBox15";
			this->pictureBoxq->Size = System::Drawing::Size(50, 50);
			this->pictureBoxq->TabIndex = 19;
			this->pictureBoxq->TabStop = false;
			// 
			// pictureBoxTAB
			// 
			this->pictureBoxTAB->Location = System::Drawing::Point(26, 232);
			this->pictureBoxTAB->Name = L"pictureBoxTAB";
			this->pictureBoxTAB->Size = System::Drawing::Size(80, 50);
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
			this->pictureBoxPlus->Location = System::Drawing::Point(698, 176);
			this->pictureBoxPlus->Name = L"pictureBoxPlus";
			this->pictureBoxPlus->Size = System::Drawing::Size(50, 50);
			this->pictureBoxPlus->TabIndex = 16;
			this->pictureBoxPlus->TabStop = false;
			// 
			// PictureBoxHyphen
			// 
			this->PictureBoxHyphen->Location = System::Drawing::Point(642, 176);
			this->PictureBoxHyphen->Name = L"PictureBoxHyphen";
			this->PictureBoxHyphen->Size = System::Drawing::Size(50, 50);
			this->PictureBoxHyphen->TabIndex = 15;
			this->PictureBoxHyphen->TabStop = false;
			// 
			// pictureBox0
			// 
			this->pictureBox0->Location = System::Drawing::Point(586, 176);
			this->pictureBox0->Name = L"pictureBox0";
			this->pictureBox0->Size = System::Drawing::Size(50, 50);
			this->pictureBox0->TabIndex = 14;
			this->pictureBox0->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Location = System::Drawing::Point(530, 176);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(50, 50);
			this->pictureBox9->TabIndex = 13;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(474, 176);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(50, 50);
			this->pictureBox8->TabIndex = 12;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(418, 176);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(50, 50);
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(362, 176);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(50, 50);
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(306, 176);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(50, 50);
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(250, 176);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 50);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(194, 176);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(138, 176);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(82, 176);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// PictureBoxTild
			// 
			this->PictureBoxTild->Location = System::Drawing::Point(26, 176);
			this->PictureBoxTild->Name = L"PictureBoxTild";
			this->PictureBoxTild->Size = System::Drawing::Size(50, 50);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBoxHyphen))->EndInit();
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
			 int op = 0;
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
}; //end of myform class
}
