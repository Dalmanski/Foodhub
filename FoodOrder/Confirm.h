#pragma once
// You don't need declare the form because there's no 4th form.

// This code is automatially generate
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
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ OrderPrice;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: int quan1, quan2, quan3, quan4; // Declare this variables from SetData function.

	public:
		Form^ obj;
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
		// This is function of SetData in previous form.
		void SetData( int numBurgers, int numCoke, int numChicken, int numSpaghetti ) {
			quan1 = numBurgers;
			quan2 = numCoke;
			quan3 = numChicken;
			quan4 = numSpaghetti;
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
	private: System::Windows::Forms::Label^ OrderSubTotal;

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
			this->OrderSubTotal = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->OrderPrice = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(181, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(381, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CONFIRM YOUR ORDER";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(105, 78);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 233);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(270, 336);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 32);
			this->button1->TabIndex = 5;
			this->button1->Text = L"BACK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Confirm::button1_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(404, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 14);
			this->label5->TabIndex = 7;
			this->label5->Text = L"NAME:          ";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(484, 129);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 20);
			this->textBox1->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(404, 161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 14);
			this->label6->TabIndex = 9;
			this->label6->Text = L"ADDRESS:   ";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(484, 159);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(149, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->Location = System::Drawing::Point(484, 188);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(149, 20);
			this->textBox3->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(404, 190);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 14);
			this->label7->TabIndex = 11;
			this->label7->Text = L"CONTACT #:";
			// 
			// TotalPrice
			// 
			this->TotalPrice->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TotalPrice->AutoSize = true;
			this->TotalPrice->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->TotalPrice->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->TotalPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TotalPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->TotalPrice->Location = System::Drawing::Point(259, 285);
			this->TotalPrice->Name = L"TotalPrice";
			this->TotalPrice->Size = System::Drawing::Size(53, 15);
			this->TotalPrice->TabIndex = 13;
			this->TotalPrice->Text = L"TOTAL:";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(388, 336);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 32);
			this->button2->TabIndex = 14;
			this->button2->Text = L"CONFIRM";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Confirm::button2_Click);
			// 
			// OrderList
			// 
			this->OrderList->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->OrderList->AutoSize = true;
			this->OrderList->BackColor = System::Drawing::SystemColors::Control;
			this->OrderList->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->OrderList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OrderList->Location = System::Drawing::Point(113, 129);
			this->OrderList->Name = L"OrderList";
			this->OrderList->Size = System::Drawing::Size(53, 14);
			this->OrderList->TabIndex = 15;
			this->OrderList->Text = L"ORDER: \r\n";
			this->OrderList->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// OrderAmount
			// 
			this->OrderAmount->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->OrderAmount->AutoSize = true;
			this->OrderAmount->BackColor = System::Drawing::SystemColors::Control;
			this->OrderAmount->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->OrderAmount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OrderAmount->Location = System::Drawing::Point(211, 129);
			this->OrderAmount->Name = L"OrderAmount";
			this->OrderAmount->Size = System::Drawing::Size(65, 14);
			this->OrderAmount->TabIndex = 16;
			this->OrderAmount->Text = L"QUANTITY:\r\n";
			this->OrderAmount->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// OrderSubTotal
			// 
			this->OrderSubTotal->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->OrderSubTotal->AutoSize = true;
			this->OrderSubTotal->BackColor = System::Drawing::SystemColors::Control;
			this->OrderSubTotal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->OrderSubTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OrderSubTotal->Location = System::Drawing::Point(276, 129);
			this->OrderSubTotal->Name = L"OrderSubTotal";
			this->OrderSubTotal->Size = System::Drawing::Size(67, 14);
			this->OrderSubTotal->TabIndex = 17;
			this->OrderSubTotal->Text = L"SUBTOTAL:\r\n";
			this->OrderSubTotal->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(393, 78);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(250, 233);
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// OrderPrice
			// 
			this->OrderPrice->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->OrderPrice->AutoSize = true;
			this->OrderPrice->BackColor = System::Drawing::SystemColors::Control;
			this->OrderPrice->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->OrderPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OrderPrice->Location = System::Drawing::Point(166, 129);
			this->OrderPrice->Name = L"OrderPrice";
			this->OrderPrice->Size = System::Drawing::Size(45, 14);
			this->OrderPrice->TabIndex = 19;
			this->OrderPrice->Text = L"PRICE:\r\n";
			this->OrderPrice->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(464, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 14);
			this->label2->TabIndex = 20;
			this->label2->Text = L"FILL UP USER INFO";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(203, 99);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 14);
			this->label3->TabIndex = 21;
			this->label3->Text = L"RECEIPT";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Confirm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(745, 384);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->OrderPrice);
			this->Controls->Add(this->OrderSubTotal);
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
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Name = L"Confirm";
			this->Text = L"Confirm";
			this->Load += gcnew System::EventHandler(this, &Confirm::Confirm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
//-------------------------------------------------------------------------------------------------------
#pragma endregion

private: System::Void Confirm_Load(System::Object^ sender, System::EventArgs^ e) {
	// quan1, quan2, quan3 and quan4 declaration is at the above.
	wchar_t pesoSign = L'\u20B1'; // A peso sign ₱.
	int BurgerPrize = 45, CokePrize = 35, ChickenPrize = 89, SpaghettiPrize = 50; // Their Price.
	int total = 0;
	// Remember, OrderList, OrderPrice, OrderAmount, OrderSubTotal is the name of the label.
	// While the total is the variable and it will shown the OrderTotal label after it.
	// If you buy a burger.
	if (quan1 > 0) {
		OrderList->Text += "\n" + "Burger";
		OrderPrice->Text += "\n" + pesoSign + BurgerPrize;
		OrderAmount->Text += "\n" + quan1;
		OrderSubTotal->Text += "\n" + pesoSign + (quan1 * BurgerPrize);
		total += quan1 * BurgerPrize;
	}
	// If you buy a coke.
	if (quan2 > 0) {
		OrderList->Text += "\n" + "Coke";
		OrderPrice->Text += "\n" + pesoSign + CokePrize;
		OrderAmount->Text += "\n" + quan2;
		OrderSubTotal->Text += "\n" + pesoSign + (quan2 * CokePrize);
		total += quan2 * CokePrize;
	}
	// If you buy a chicken.
	if (quan3 > 0) {
		OrderList->Text += "\n" + "Chicken";
		OrderPrice->Text += "\n" + pesoSign + ChickenPrize;
		OrderAmount->Text += "\n" + quan3;
		OrderSubTotal->Text += "\n" + pesoSign + (quan3 * ChickenPrize);
		total += quan3 * ChickenPrize;
	}
	// If you buy a Spaghetti.
	if (quan4 > 0) {
		OrderList->Text += "\n" + "Spaghetti";
		OrderPrice->Text += "\n" + pesoSign + SpaghettiPrize;
		OrderAmount->Text += "\n" + quan4;
		OrderSubTotal->Text += "\n" + pesoSign + (quan4 * SpaghettiPrize);
		total += quan4 * SpaghettiPrize;
	}
	// After that, show the total of price.
	TotalPrice->Text = "TOTAL: " + pesoSign + total;
}
//-------------------------------------------------------------------------------------------------------
// Press to go back and reset the text.
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OrderList->Text = "ORDER:";
	OrderPrice->Text = "PRICE:";
	OrderAmount->Text = "QUANTITY:";
	OrderSubTotal->Text = "SUBTOTAL:";
	TotalPrice->Text = "TOTAL:";
	this->Hide();
	obj->Show();
}
// When you press confirm button.
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "") {
		System::Windows::Forms::MessageBox::Show("ORDER SUCCESS!\nWait a couple minutes until contacted by courier.\nThank you for trusting McDeeebug FoodHub!");
	}
	else {
		System::Windows::Forms::MessageBox::Show("Please complete this form.");
	}
}
};
}
