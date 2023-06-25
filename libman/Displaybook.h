#pragma once

namespace libman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Displaybook
	/// </summary>
	public ref class Displaybook : public System::Windows::Forms::Form
	{
	public:
		Displaybook(void)
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
		~Displaybook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(425, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Details";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(70, 113);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(300, 324);
			this->listBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(387, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 51);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Display Books";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Displaybook::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(387, 199);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 51);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Display Index";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Displaybook::button2_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(581, 113);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(346, 324);
			this->listBox2->TabIndex = 4;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				27.01422F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				72.98578F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				210)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				198)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(70, 460);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 45.28302F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 54.71698F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(619, 127);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// Displaybook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(964, 626);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Displaybook";
			this->Text = L"Displaybook";
			this->Load += gcnew System::EventHandler(this, &Displaybook::Displaybook_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Displaybook_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		StreamReader^ gds = File::OpenText("Booklist.txt");
		String^ line;

		while ((line = gds->ReadLine()) != nullptr) {
			listBox1->Items->Add(line);
		}
		gds->Close();
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox2->Items->Clear();
	StreamReader^ gds = File::OpenText("Bookindex.txt");
	String^ line;

	while ((line = gds->ReadLine()) != nullptr) {
		listBox2->Items->Add(line);
	}
	gds->Close();
}
};
}
