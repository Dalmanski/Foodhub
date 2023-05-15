#pragma once

namespace FoodOrder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Confirm
	/// </summary>

	public ref class Confirm : public System::Windows::Forms::Form
	{
	private: int quan1, quan2, quan3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	public:
		Form^ obj; // This code is to go back form.
		Confirm(Form^ form)
		{
			obj = form;
			InitializeComponent();
			// This code is to go back form.
		}
		Confirm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void SetData(int numBurgers, int numCoke, int numChicken) {
			quan1 = numBurgers;
			quan2 = numCoke;
			quan3 = numChicken;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Confirm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ TotalPrice;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ OrderList;
	private: System::Windows::Forms::Label^ OrderAmount;
	private: System::Windows::Forms::Label^ OrderPrice;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Confirm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TotalPrice = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->OrderList = (gcnew System::Windows::Forms::Label());
			this->OrderAmount = (gcnew System::Windows::Forms::Label());
			this->OrderPrice = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(231, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CONFIRM YOUR ORDER";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(117, 100);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 233);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(333, 353);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"BACK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Confirm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(486, 138);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"NAME:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(556, 135);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 20);
			this->textBox1->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(486, 168);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"ADDRESS:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(556, 165);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(149, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(556, 194);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(149, 20);
			this->textBox3->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(486, 197);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"CONTACT #:";
			this->label7->Click += gcnew System::EventHandler(this, &Confirm::label7_Click);
			// 
			// TotalPrice
			// 
			this->TotalPrice->AutoSize = true;
			this->TotalPrice->Location = System::Drawing::Point(276, 308);
			this->TotalPrice->Name = L"TotalPrice";
			this->TotalPrice->Size = System::Drawing::Size(45, 13);
			this->TotalPrice->TabIndex = 13;
			this->TotalPrice->Text = L"TOTAL:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(439, 353);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"CONFIRM";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Confirm::button2_Click);
			// 
			// OrderList
			// 
			this->OrderList->AutoSize = true;
			this->OrderList->Location = System::Drawing::Point(146, 126);
			this->OrderList->Name = L"OrderList";
			this->OrderList->Size = System::Drawing::Size(46, 13);
			this->OrderList->TabIndex = 15;
			this->OrderList->Text = L"ORDER";
			this->OrderList->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// OrderAmount
			// 
			this->OrderAmount->AutoSize = true;
			this->OrderAmount->Location = System::Drawing::Point(216, 126);
			this->OrderAmount->Name = L"OrderAmount";
			this->OrderAmount->Size = System::Drawing::Size(54, 13);
			this->OrderAmount->TabIndex = 16;
			this->OrderAmount->Text = L"AMOUNT";
			this->OrderAmount->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// OrderPrice
			// 
			this->OrderPrice->AutoSize = true;
			this->OrderPrice->Location = System::Drawing::Point(294, 126);
			this->OrderPrice->Name = L"OrderPrice";
			this->OrderPrice->Size = System::Drawing::Size(39, 13);
			this->OrderPrice->TabIndex = 17;
			this->OrderPrice->Text = L"PRICE";
			this->OrderPrice->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Location = System::Drawing::Point(472, 100);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(250, 233);
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// Confirm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(836, 388);
			this->Controls->Add(this->OrderPrice);
			this->Controls->Add(this->OrderAmount);
			this->Controls->Add(this->OrderList);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->TotalPrice);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->DoubleBuffered = true;
			this->Name = L"Confirm";
			this->Text = L"Confirm";
			this->Load += gcnew System::EventHandler(this, &Confirm::Confirm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Confirm_Load(System::Object^ sender, System::EventArgs^ e) {
	// quan1 declaration is at the above.
	int BurgerPrize = 45, CokePrize = 35, ChickenPrize = 75;
	int sum = 0;
	int total = 0;
	// If you buy a burger.
	if (quan1 > 0) {
		OrderList->Text += "\nBurger";
		OrderAmount->Text += "\n" + quan1;
		sum = 0;
		for (int i = 0; i < quan1; i++) {
			sum += BurgerPrize;
			total += BurgerPrize;
		}
		OrderPrice->Text += "\nP" + sum;
	}
	// If you buy a coke.
	if (quan2 > 0) {
		OrderList->Text += "\nCoke";
		OrderAmount->Text += "\n" + quan2;
		sum = 0;
		for (int i = 0; i < quan2; i++) {
			sum += CokePrize;
			total += CokePrize;
		}
		OrderPrice->Text += "\nP" + sum;
	}
	if (quan3 > 0) {
		OrderList->Text += "\nChicken";
		OrderAmount->Text += "\n" + quan3;
		sum = 0;
		for (int i = 0; i < quan3; i++) {
			sum += ChickenPrize;
			total += ChickenPrize;
		}
		OrderPrice->Text += "\nP" + sum;
	}
	TotalPrice->Text += " P" + total;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OrderList->Text = "ORDER";
	OrderAmount->Text = "AMOUNT";
	OrderPrice->Text = "PRICE";
	this->Hide();
	obj->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "") {
		System::Windows::Forms::MessageBox::Show("Thank you for trusting McDeeebug FoodHub.");
	}
	else {
		System::Windows::Forms::MessageBox::Show("Please complete this form.");
	}
	
}
};
}
