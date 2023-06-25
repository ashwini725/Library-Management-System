#pragma once
#include<msclr/marshal_cppstd.h>
#include<fstream>
#include<iostream>
namespace libman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for libbookissue
	/// </summary>
	public ref class libbookissue : public System::Windows::Forms::Form
	{
	public:
		libbookissue(void)
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
		~libbookissue()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student ID:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &libbookissue::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(239, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Book ID:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Date:";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(82, 148);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(99, 22);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->Value = System::DateTime(2023, 6, 19, 0, 0, 0, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &libbookissue::dateTimePicker1_ValueChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(180, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Issue";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &libbookissue::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(317, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &libbookissue::textBox2_TextChanged);
			// 
			// libbookissue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 395);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Name = L"libbookissue";
			this->Text = L"libbookissue";
			this->Load += gcnew System::EventHandler(this, &libbookissue::libbookissue_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ sid,^bid,^date;
		int flag;
		msclr::interop::marshal_context context;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[^0-9]"))
		{
			MessageBox::Show("Please enter only numbers.");
			textBox1->Clear();
		}
		sid = textBox1->Text;
	}

private: System::Void libbookissue_Load(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = false;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (System::Text::RegularExpressions::Regex::IsMatch(textBox2->Text, "[^0-9]"))
	{
		MessageBox::Show("Please enter only numbers.");
		textBox2->Clear();
	}
	bid = textBox2->Text;
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	date = dateTimePicker1->Value.ToShortDateString();
	if (bid == "" || sid == "" || date == "")
		button1->Enabled = false;
	else
		button1->Enabled = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	flag = 0;

	using namespace std;
	string skey = context.marshal_as<std::string>(sid);
	string bkey = context.marshal_as<std::string>(bid);
	fstream f1, f2, f3, f4;
	string baddr[20], saddr[20], s_id[20], temp, b_id[10];
	f1.open("Bookindex.txt", ios::in);
	f2.open("Studentindex.txt", ios::in);
	int i = -1,s=-1;
	while (!(f1.eof()))
	{
		getline(f1, b_id[++i], '|');
		getline(f1, baddr[i], '\n');
	}
	while (!(f2.eof()))
	{
		getline(f2, s_id[++s], '|');
		getline(f2, saddr[s], '\n');
	}
	f1.close();
	f2.close();
	for (int j = 0; j <= i; j++)
	{
		if (bkey == b_id[j]) {
			flag = 1;
		}
	}
	if (flag == 0)
	{
		MessageBox::Show("Book not found :( ");
	}
	int sflag = 0;
	for (int j = 0; j <= s; j++)
	{
		if (skey == s_id[j]) {
			sflag = 1;
		}
	}
	if (sflag == 0)
	{
		MessageBox::Show("Student not Found :( ");
	}

	if (flag == 1&&sflag==1) {
		string idate = context.marshal_as<std::string>(date);
		f3.open("IssuedBook.txt", ios::out | ios::app);
		f3 << skey << "|" << bkey << "|" << idate << endl;
		f3.close();
		MessageBox::Show("Book Issued");
		textBox1->Clear();
		textBox2->Clear();
	}
}
};
}
