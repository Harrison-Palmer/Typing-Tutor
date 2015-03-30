#pragma once
#include "tutor.h"

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
			this->Exit_Button = (gcnew System::Windows::Forms::PictureBox());
			this->Second_Button = (gcnew System::Windows::Forms::PictureBox());
			this->Start_Pictutre = (gcnew System::Windows::Forms::PictureBox());
			this->MenuPicture = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_Button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Second_Button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start_Pictutre))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuPicture))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
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
			this->panel1->ResumeLayout(false);
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
		Bitmap^ NewGame = gcnew Bitmap("Images\\exit.bmp");

		/* potential way of level design
		char Level1[7];
		char Level1[] = {'t', 'e', 's', 't', 'i', 'n', 'g'};
		*/

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 g = panel1->CreateGraphics();
			 Exit_Button->Image = ExitGame;
			 Start_Pictutre->Image = NewGame;
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

}

//start game button
private: System::Void Start_Pictutre_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Controls->Clear();

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
			 panel1->Refresh();
			 PictureBox ^Keyboard = gcnew PictureBox();

			 Keyboard->Parent = this;
			 Keyboard->Location = Point(240, 120);
			 Keyboard->Size.Height = 30;
			 Keyboard->Size.Width = 30;
			 Keyboard->BackColor.Aquamarine;
}
//dont know yet
private: System::Void Second_Button_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Exit_Button_Click(System::Object^  sender, System::EventArgs^  e) {
}

}; //end of myform class
}
