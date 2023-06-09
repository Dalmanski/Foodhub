#pragma once
// Declare the 2nd form.
#include "MenuOrder.h"

// This code is automatically generate.
namespace FoodOrder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Intro
	/// </summary>
	public ref class Intro : public System::Windows::Forms::Form
	{
	public:
		Intro(void)
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
		~Intro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ OrderButton;
	protected:
	private: System::Windows::Forms::Label^ TitleName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Intro::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->OrderButton = (gcnew System::Windows::Forms::Button());
			this->TitleName = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(112, 66);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(425, 381);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// OrderButton
			// 
			this->OrderButton->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->OrderButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->OrderButton->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OrderButton->Location = System::Drawing::Point(810, 298);
			this->OrderButton->Name = L"OrderButton";
			this->OrderButton->Size = System::Drawing::Size(139, 44);
			this->OrderButton->TabIndex = 1;
			this->OrderButton->Text = L"ORDER";
			this->OrderButton->UseVisualStyleBackColor = true;
			this->OrderButton->Click += gcnew System::EventHandler(this, &Intro::OrderButton_Click);
			// 
			// TitleName
			// 
			this->TitleName->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->TitleName->AutoSize = true;
			this->TitleName->BackColor = System::Drawing::Color::Transparent;
			this->TitleName->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitleName->Location = System::Drawing::Point(619, 86);
			this->TitleName->Name = L"TitleName";
			this->TitleName->Size = System::Drawing::Size(343, 56);
			this->TitleName->TabIndex = 2;
			this->TitleName->Text = L"WELCOME TO";
			this->TitleName->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 32.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(665, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(263, 56);
			this->label2->TabIndex = 4;
			this->label2->Text = L"FoodHub.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(697, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(193, 49);
			this->label1->TabIndex = 3;
			this->label1->Text = L"McDeebug";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(600, 276);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(172, 252);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Group 5:\r\nJayrald John Dalman\r\nHarold Dave Cabiles\r\nJudito Pepito\r\nAngelito Valde"
				L"rama\r\nJessah Dela Pena\r\nLei Di Bacu\r\nJam Riah Manza\r\nZybelle Dugho\r\n\r\n\r\n\r\n";
			// 
			// Intro
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1027, 538);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TitleName);
			this->Controls->Add(this->OrderButton);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Name = L"Intro";
			this->Text = L"Intro";
			this->Load += gcnew System::EventHandler(this, &Intro::Intro_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// Start the program
	private: System::Void Intro_Load(System::Object^ sender, System::EventArgs^ e) {
	}
//-------------------------------------------------------------------------------------------------------
	// On 1st form Intro.h
	// When you press Order button.
	private: System::Void OrderButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MenuOrder^ form = gcnew MenuOrder(this);
		form->StartPosition = FormStartPosition::CenterScreen; 
		form->WindowState = System::Windows::Forms::FormWindowState::Maximized;
		form->ShowDialog();
	}
//-------------------------------------------------------------------------------------------------------
	};
}
