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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ToolStripMenuItem^  restartToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  Exit_Button;

	private: System::Windows::Forms::PictureBox^  Second_Button;

	private: System::Windows::Forms::PictureBox^  Start_Pictutre;

	private: System::Windows::Forms::PictureBox^  MenuPicture;


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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->restartToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->MenuPicture = (gcnew System::Windows::Forms::PictureBox());
			this->Start_Pictutre = (gcnew System::Windows::Forms::PictureBox());
			this->Second_Button = (gcnew System::Windows::Forms::PictureBox());
			this->Exit_Button = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start_Pictutre))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Second_Button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_Button))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(954, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->restartToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->aboutToolStripMenuItem1
			});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem->Text = L"Tutorial";
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem1->Text = L"About";
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
			// 
			// restartToolStripMenuItem
			// 
			this->restartToolStripMenuItem->Name = L"restartToolStripMenuItem";
			this->restartToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->restartToolStripMenuItem->Text = L"Restart";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// MenuPicture
			// 
			this->MenuPicture->Location = System::Drawing::Point(26, 20);
			this->MenuPicture->Name = L"MenuPicture";
			this->MenuPicture->Size = System::Drawing::Size(855, 149);
			this->MenuPicture->TabIndex = 0;
			this->MenuPicture->TabStop = false;
			// 
			// Start_Pictutre
			// 
			this->Start_Pictutre->Location = System::Drawing::Point(385, 203);
			this->Start_Pictutre->Name = L"Start_Pictutre";
			this->Start_Pictutre->Size = System::Drawing::Size(100, 50);
			this->Start_Pictutre->TabIndex = 1;
			this->Start_Pictutre->TabStop = false;
			// 
			// Second_Button
			// 
			this->Second_Button->Location = System::Drawing::Point(385, 277);
			this->Second_Button->Name = L"Second_Button";
			this->Second_Button->Size = System::Drawing::Size(100, 50);
			this->Second_Button->TabIndex = 2;
			this->Second_Button->TabStop = false;
			// 
			// Exit_Button
			// 
			this->Exit_Button->Location = System::Drawing::Point(385, 354);
			this->Exit_Button->Name = L"Exit_Button";
			this->Exit_Button->Size = System::Drawing::Size(100, 50);
			this->Exit_Button->TabIndex = 3;
			this->Exit_Button->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(954, 546);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MenuPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start_Pictutre))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Second_Button))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Exit_Button))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
