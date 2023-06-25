#pragma once
#include<msclr/marshal_cppstd.h>
#include<iostream>
#include<fstream>
namespace libman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for addbook
	/// </summary>
	public ref class addbook : public System::Windows::Forms::Form
	{
	public:
		addbook(void)
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
		String^ b_name,^b_id,^r_id;
		String^ a_name;
		String^ p_name;
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::TextBox^ textBox5;
		   String^ buffer;
		~addbook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Book Name:";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Author Name:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 249);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Publication Name:";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(166, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addbook::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->Location = System::Drawing::Point(147, 166);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(131, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &addbook::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->Location = System::Drawing::Point(147, 204);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(131, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &addbook::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox3->Location = System::Drawing::Point(147, 243);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(131, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &addbook::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(381, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Book ID:";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->Location = System::Drawing::Point(469, 172);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(131, 22);
			this->textBox4->TabIndex = 2;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &addbook::textBox4_TextChanged);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Location = System::Drawing::Point(469, 232);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &addbook::button2_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Book ID:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(147, 137);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(131, 22);
			this->textBox5->TabIndex = 3;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &addbook::textBox5_TextChanged);
			// 
			// addbook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 565);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Name = L"addbook";
			this->Text = L"addbook";
			this->Load += gcnew System::EventHandler(this, &addbook::addbook_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addbook_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	b_name = textBox1->Text;
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	a_name = textBox2->Text;
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	p_name = textBox3->Text;
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[^0-9]"))
	{
		MessageBox::Show("Please enter only numbers.");
		textBox4->Clear();
	}
	r_id = textBox4->Text;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (b_id->Length != 3)
	{
		MessageBox::Show("Enter id in 3 digits.");
	}
	else {
		buffer = b_id + "|" + b_name + "|" + a_name + "|" + p_name;
		MessageBox::Show(buffer);
		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(buffer);
		using namespace std;
		fstream f1, f2, f3, f4;
		f4.open("Booklist.txt", ios::out | ios::app);
		f4 << name << endl;
		f4.close();
		char bname[50][20], aname[50][20], pname[50][20], temp[20], bid[50][10];
		int i = -1, pos[100], tempos, count = 0;
		f1.open("Booklist.txt", ios::in);
		f2.open("Bookname.txt", ios::out);
		f3.open("Bookindex.txt", ios::out);
		while (!(f1.eof()))
		{
			f1.getline(bid[++i], 10, '|');
			f1.getline(bname[i], 15, '|');
			f1.getline(aname[i], 15, '|');
			f1.getline(pname[i], 15, '\n');
		}
		f1.close();
		//f1.open("Booklist.txt", ios::out);
		for (int j = 0; j < i; j++)
		{
			f2.seekp(0, ios::end);
			pos[j] = f2.tellp();
			f2 << bid[j] << '|' << bname[j] << "|" << aname[j] << "|" << pname[j] << endl;
			//f1 << j+1 << '|' << bname[j] << "|" << aname[j] << "|" << pname[j] << endl;
		}
		for (int j = 0; j < i; j++) {
			for (int k = j + 1; k <= i; k++)
			{
				if (strcmp(bid[j], bid[k]) > 0) {
					strcpy_s(temp, bid[j]);
					strcpy_s(bid[j], bid[k]);
					strcpy_s(bid[k], temp);
					tempos = pos[j];
					pos[j] = pos[k];
					pos[k] = tempos;
				}

			}
		}
		for (int j = 1; j <= i; j++)
		{
			f3 << bid[j] << "|" << pos[j] << endl;
		}
		//f1.close();
		f2.close();
		f3.close();
		//remove("Bookname.txt");
	}
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[^0-9]"))
	{
		MessageBox::Show("Please enter only numbers.");
		textBox5->Clear();
	}
	b_id = textBox5->Text;

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;
	msclr::interop::marshal_context context;
	std::string key = context.marshal_as<std::string>(r_id);
	fstream f2;
	string bname[50], pname[50], aname[50], b_id[50], tempbid;
	int j = -1,flag=0,pos[100],temp;
	f2.open("Booklist.txt", ios::in);
	while (!(f2.eof()))
	{
		getline(f2, b_id[++j], '|');
		getline(f2, bname[j], '|');
		getline(f2, aname[j], '|');
		getline(f2, pname[j], '\n');
		//MessageBox::Show(gcnew String(to_string(j).c_str()));
	}
	f2.close();
	for (int i = 0; i < j; i++)
	{
		if (key == b_id[i])
		{
			for (int k = i; k < j; k++)
			{
				b_id[k] = b_id[k + 1];
				bname[k] = bname[k + 1];
				aname[k] = aname[k + 1];
				pname[k] = pname[k + 1];
			}
			j--;
			MessageBox::Show("Successfully Removed");
			flag = 1;

			f2.open("Booklist.txt", ios::out);
			for (int k = 0; k < j; k++)
			{
				f2.seekp(0, ios::end);
				pos[k] = f2.tellg();
				f2 << b_id[k] << "|" << bname[k] << "|" << aname[k] << "|" << pname[k] << endl;
			}
			f2.close();

			f2.open("Bookindex.txt", ios::out);
			for (int l = 0; l < j - 1; l++) {
				for (int k = l + 1; k < j; k++)
				{
					if ((b_id[l]) > (b_id[k])) {
						tempbid = b_id[l];
						b_id[l] = b_id[k];
						b_id[k] = tempbid;
						temp = pos[l];
						pos[l] = pos[k];
						pos[k] = temp;
					}
				}
			}
			for (int i = 0; i < j; i++)
			{
				f2 << b_id[i] << "|" << pos[i] << endl;
			}
			f2.close();
			break;
		}
	}
	if(flag==0)
		MessageBox::Show("Not found");

}
};
}
