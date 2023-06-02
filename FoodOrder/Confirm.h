#pragma once
#include <thread> // Declare thread to add delay or sleep time
// You don't need declare the form because there's no 4th form.

// This code is automatically generate
namespace FoodOrder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Summary for Confirm
	/// </summary>

	public ref class Confirm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridViewReceipt;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Button^ btnDeleteRow;

	// Declare this variables from SetData function.
	private: int quan1, quan2, quan3, quan4, quan5, quan6; 

	// This is function of SetData in previous form.
	public:
		Form^ backForm;
		Confirm(Form^ form)
		{
			backForm = form;
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
		void SetData( int numBurgers, int numCoke, int numChicken, int numSpaghetti, int numSundae, int numRice ) {
			quan1 = numBurgers;
			quan2 = numCoke;
			quan3 = numChicken;
			quan4 = numSpaghetti;
			quan5 = numSundae;
			quan6 = numRice;
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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewReceipt = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnDeleteRow = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewReceipt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(363, 20);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(464, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CONFIRM YOUR ORDER";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(114, 84);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(467, 378);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(411, 479);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 49);
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
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(645, 218);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 18);
			this->label5->TabIndex = 7;
			this->label5->Text = L"NAME:          ";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(770, 218);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(293, 20);
			this->textBox1->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(645, 254);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 18);
			this->label6->TabIndex = 9;
			this->label6->Text = L"ADDRESS:   ";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(770, 254);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(293, 20);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->Location = System::Drawing::Point(770, 290);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(293, 20);
			this->textBox3->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(645, 290);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 18);
			this->label7->TabIndex = 11;
			this->label7->Text = L"CONTACT #:";
			// 
			// TotalPrice
			// 
			this->TotalPrice->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TotalPrice->AutoSize = true;
			this->TotalPrice->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->TotalPrice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TotalPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TotalPrice->ForeColor = System::Drawing::Color::Black;
			this->TotalPrice->Location = System::Drawing::Point(421, 415);
			this->TotalPrice->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TotalPrice->Name = L"TotalPrice";
			this->TotalPrice->Size = System::Drawing::Size(71, 22);
			this->TotalPrice->TabIndex = 13;
			this->TotalPrice->Text = L"TOTAL:";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(618, 479);
			this->button2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(167, 49);
			this->button2->TabIndex = 14;
			this->button2->Text = L"CONFIRM";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Confirm::button2_Click);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(770, 153);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 22);
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
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(305, 103);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 22);
			this->label3->TabIndex = 21;
			this->label3->Text = L"RECEIPT";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// dataGridViewReceipt
			// 
			this->dataGridViewReceipt->AllowUserToAddRows = false;
			this->dataGridViewReceipt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridViewReceipt->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewReceipt->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridViewReceipt->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridViewReceipt->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Raised;
			this->dataGridViewReceipt->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewReceipt->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Info;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewReceipt->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridViewReceipt->EnableHeadersVisualStyles = false;
			this->dataGridViewReceipt->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->dataGridViewReceipt->Location = System::Drawing::Point(132, 138);
			this->dataGridViewReceipt->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->dataGridViewReceipt->Name = L"dataGridViewReceipt";
			this->dataGridViewReceipt->RowHeadersVisible = false;
			this->dataGridViewReceipt->Size = System::Drawing::Size(432, 260);
			this->dataGridViewReceipt->TabIndex = 22;
			this->dataGridViewReceipt->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Confirm::dataGridViewReceipt_CellClick);
			this->dataGridViewReceipt->CellDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Confirm::dataGridViewReceipt_CellDoubleClick);
			// 
			// Column1
			// 
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle1;
			this->Column1->HeaderText = L"     ORDER:";
			this->Column1->Name = L"Column1";
			this->Column1->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column2
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Column2->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column2->HeaderText = L"      PRICE:";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->Column3->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column3->HeaderText = L"  QUANTITY:";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column4->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column4->HeaderText = L" SUBTOTAL:";
			this->Column4->Name = L"Column4";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(618, 84);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(469, 378);
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			// 
			// btnDeleteRow
			// 
			this->btnDeleteRow->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnDeleteRow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDeleteRow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDeleteRow->Location = System::Drawing::Point(132, 409);
			this->btnDeleteRow->Name = L"btnDeleteRow";
			this->btnDeleteRow->Size = System::Drawing::Size(127, 40);
			this->btnDeleteRow->TabIndex = 24;
			this->btnDeleteRow->Text = L"Delete Product";
			this->btnDeleteRow->UseVisualStyleBackColor = true;
			this->btnDeleteRow->Click += gcnew System::EventHandler(this, &Confirm::btnDeleteRow_Click);
			// 
			// Confirm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1200, 549);
			this->Controls->Add(this->btnDeleteRow);
			this->Controls->Add(this->dataGridViewReceipt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
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
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"Confirm";
			this->Text = L"Confirm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Confirm::Confirm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Confirm::Confirm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewReceipt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
//-------------------------------------------------------------------------------------------------------
#pragma endregion

double total = 0;
wchar_t pesoSign = L'\u20B1'; // A peso sign ₱.

private: System::Void Confirm_Load(System::Object^ sender, System::EventArgs^ e) {
	btnDeleteRow->Visible = false;
	// [quan1, quan2, quan3 and quan4 declaration is at the above.]
	// Their Price.
	double BurgerPrize = 45, CokePrize = 35, ChickenPrize = 89, SpaghettiPrize = 50, SundaePrize = 50, RicePrize = 15;
	double subtotal = 0;
	// Set the column's DefaultCellStyle to include the peso sign
	dataGridViewReceipt->Columns[1]->DefaultCellStyle->Format = L"₱0.00";
	dataGridViewReceipt->Columns[3]->DefaultCellStyle->Format = L"₱0.00";
	// dataGridViewReceipt have 4 parameters [columns] ("ORDER:", "PRICE:", "QUANTITY:", "SUBTOTAL:")
	// Total is the variable and it will shown on the TotalPrice label after it.
	// If you buy a burger.
	if (quan1 > 0) {
		subtotal = quan1 * BurgerPrize;
		dataGridViewReceipt->Rows->Add("Burger", BurgerPrize, quan1, subtotal);
		total += subtotal;
	}
	// If you buy a coke.
	if (quan2 > 0) {
		subtotal = quan2 * CokePrize;
		dataGridViewReceipt->Rows->Add("Coke", CokePrize, quan2, subtotal);
		total += subtotal;
	}
	// If you buy a chicken.
	if (quan3 > 0) {
		subtotal = quan3 * ChickenPrize;
		dataGridViewReceipt->Rows->Add("Chicken", ChickenPrize, quan3, subtotal);
		total += subtotal;
	}
	// If you buy a Spaghetti.
	if (quan4 > 0) {
		subtotal = quan4 * SpaghettiPrize;
		dataGridViewReceipt->Rows->Add("Spaghetti", SpaghettiPrize, quan4, subtotal);
		total += subtotal;
	}
	// If you buy a Sundae.
	if (quan5 > 0) {
		subtotal = quan5 * SundaePrize;
		dataGridViewReceipt->Rows->Add("Sundae", SundaePrize, quan5, subtotal);
		total += subtotal;
	}
	// If you buy a Rice.
	if (quan6 > 0) {
		subtotal = quan6 * RicePrize;
		dataGridViewReceipt->Rows->Add("Rice", RicePrize, quan6, subtotal);
		total += subtotal;
	}
	// After that, show the total of price.
	TotalPrice->Text = "TOTAL: " + pesoSign + total + ".00";
}
//-------------------------------------------------------------------------------------------------------
// Press to go back and reset the text.
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridViewReceipt->Rows->Clear();
	this->Hide();
	backForm->Show();
}
//-------------------------------------------------------------------------------------------------------
// When you press confirm button.
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "" && textBox3->Text != "") {
		if (total != 0) {
			System::Windows::Forms::MessageBox::Show("ORDER SUCCESS!\nWait a couple minutes until contacted by courier.\nThank you for trusting McDeeebug FoodHub!");
		}
		else {
			System::Windows::Forms::MessageBox::Show("You didn't bought any order. Why did you delete all the order?");
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Please complete this form.");
	}
}
//-------------------------------------------------------------------------------------------------------
// This will indicate about where do you click on the specific row
int clickedRowIndex;

// When you click the datagridview
private: System::Void dataGridViewReceipt_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	// Check if a valid row is clicked
	if (e->RowIndex >= 0 && e->RowIndex < dataGridViewReceipt->RowCount) {
		// Show the delete button
		btnDeleteRow->Visible = true;
		// Display the clicked row index
		clickedRowIndex = e->RowIndex;
		String^ food = dataGridViewReceipt->Rows[clickedRowIndex]->Cells[0]->Value->ToString();
		btnDeleteRow->Text = "Delete " + food;
		// Add delay to deselect the dataGridViewReceipt
		Thread::Sleep(100);
		dataGridViewReceipt->ClearSelection();
	}
}
//-------------------------------------------------------------------------------------------------------
// When you press the delete row button
private: System::Void btnDeleteRow_Click(System::Object^ sender, System::EventArgs^ e) {
	// Peso Sign to remove
	String^ pesoSignRemove = L"\u20B1"; 
	// Read on the 1st column on the selected row to know the food
	String^ food = dataGridViewReceipt->Rows[clickedRowIndex]->Cells[0]->Value->ToString();
	// Messagebox will appear and ask if you want to delete the specific food
	System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("Are you sure you want to delete " + food + "?", "You sure?", System::Windows::Forms::MessageBoxButtons::YesNo, System::Windows::Forms::MessageBoxIcon::Question);
	// If the user confirms, delete the specific food.
	if (result == System::Windows::Forms::DialogResult::Yes) {
		// Hide the delete button
		btnDeleteRow->Visible = false;
		// Read the specific row on the 4th column to get the subtotal
		String^ valueWithPesos = dataGridViewReceipt->Rows[clickedRowIndex]->Cells[3]->Value->ToString();
		// Remove the peso sign from the string
		String^ valueWithoutPesos = valueWithPesos->Replace(pesoSignRemove, "");
		// Convert the string to a double
		double value = System::Double::Parse(valueWithoutPesos);
		// Minus the total of the value
		total -= value;
		// Then remove on the selected row
		dataGridViewReceipt->Rows->RemoveAt(clickedRowIndex);
		// After that, show the total of the price
		TotalPrice->Text = "TOTAL: " + pesoSign + total + ".00";
	}
}
//-------------------------------------------------------------------------------------------------------
private: System::Void Confirm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	// Ask the user for confirmation before closing the application
	System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("Are you sure you want to exit?", "Confirm Exit", System::Windows::Forms::MessageBoxButtons::YesNo, System::Windows::Forms::MessageBoxIcon::Question);
	// If the user confirms, close the application
	if (result == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
	else {
		// Cancel the closing event to prevent the form from closing
		e->Cancel = true;
	}
}
//-------------------------------------------------------------------------------------------------------
private: bool isDoubleClickHandled = false;
private: System::Void dataGridViewReceipt_CellDoubleClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (!isDoubleClickHandled) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
			// For example, display the selected cell value
			DataGridViewCell^ selectedCell = dataGridViewReceipt->Rows[e->RowIndex]->Cells[e->ColumnIndex];
		}
		// Set the flag to indicate that the double click has been handled
		isDoubleClickHandled = true;
		// Disable cell selection
		dataGridViewReceipt->ClearSelection();
	}
	else {
		// Reset the flag and allow cell selection
		isDoubleClickHandled = false;
	}
}
//-------------------------------------------------------------------------------------------------------
};
}
