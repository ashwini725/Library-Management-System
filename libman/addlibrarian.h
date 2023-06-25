#pragma once
#include<msclr/marshal_cppstd.h>
#include<fstream>
#include<string>
#include<iostream>
namespace libman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Summary for addlibrarian
	/// </summary>
	public ref class addlibrarian : public System::Windows::Forms::Form
	{
	public:
		addlibrarian(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ lid, ^ lname, ^ lcity,^r_lid,^buffer;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addlibrarian()
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(60, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Librarian ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(60, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 217);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"City:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 115);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &addlibrarian::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(154, 161);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &addlibrarian::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(154, 211);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(150, 22);
			this->textBox3->TabIndex = 1;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &addlibrarian::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(154, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addlibrarian::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(379, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Librarian ID:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(497, 144);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(150, 22);
			this->textBox4->TabIndex = 1;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &addlibrarian::textBox4_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(468, 210);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &addlibrarian::button2_Click);
			// 
			// addlibrarian
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 515);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"addlibrarian";
			this->Text = L"addlibrarian";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[^0-9]"))
		{
			MessageBox::Show("Please enter only numbers.");
			textBox1->Clear();
		}
		lid = textBox1->Text;
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	lname = textBox2->Text;
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	lcity = textBox3->Text;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lid->Length != 4)
	{
		MessageBox::Show("Enter id in 4 digits.");
	}
	else {
		buffer = lid + "|" + lname + "|" + lcity ;
		MessageBox::Show(buffer);
		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(buffer);
		using namespace std;
		fstream f1, f2, f3, f4;
		f1.open("Librarianlist.txt", ios::out | ios::app);
		f1 << name << endl;
		f1.close();
		string lname[50], lcity[50], temp,lid[10];
		int i = -1, pos[100], tempos, count = 0;
		f1.open("Librarianlist.txt", ios::in);
		f3.open("Librarianindex.txt", ios::out);
		while (!(f1.eof()))
		{
			getline(f1,lid[++i], '|');
			getline(f1, lname[i], '|');
			getline(f1,lcity[i],'\n');
		}
		f1.close();
		f2.open("Librarianlist.txt", ios::out);
		for (int j = 0; j < i; j++)
		{
			f2.seekp(0, ios::end);
			pos[j] = f2.tellp();
			MessageBox::Show(gcnew String(to_string(pos[j]).c_str()));
			f2 << lid[j] << '|' << lname[j] << "|" << lcity[j]<< endl;
		}
		for (int j = 0; j < i; j++) {
			for (int k = j + 1; k <= i; k++)
			{
				if (lid[j]> lid[k])
				{
					temp= lid[j];
					lid[j]= lid[k];
					lid[k]= temp;
					tempos = pos[j];
					pos[j] = pos[k];
					pos[k] = tempos;
				}

			}
		}
		for (int j = 1; j <= i; j++)
		{
			f3 << lid[j] << "|" << pos[j] << endl;
		}
		f2.close();
		f3.close();
	}
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[^0-9]"))
	{
		MessageBox::Show("Please enter only numbers.");
		textBox1->Clear();
	}
	r_lid = textBox4->Text;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;
	msclr::interop::marshal_context context;
	std::string key = context.marshal_as<std::string>(r_lid);
	fstream f2;
	string lname[50], lcity[50], lid[50], templid;
	int j = -1, flag = 0, pos[100], temp;
	f2.open("Librarianlist.txt", ios::in);
	while (!(f2.eof()))
	{
		getline(f2, lid[++j], '|');
		getline(f2, lname[j], '|');
		getline(f2, lcity[j], '\n');
		//MessageBox::Show(gcnew String(to_string(j).c_str()));
	}
	f2.close();
	for (int i = 0; i < j; i++)
	{
		if (key == lid[i])
		{
			for (int k = i; k < j; k++)
			{
				lid[k] = lid[k + 1];
				lname[k] = lname[k + 1];
				lcity[k] = lcity[k + 1];
			}
			j--;
			MessageBox::Show("Successfully Removed");
			flag = 1;

			f2.open("Librarianlist.txt", ios::out);
			for (int k = 0; k < j; k++)
			{
				f2.seekp(0, ios::end);
				pos[k] = f2.tellp();
				f2 << lid[k] << "|" << lname[k] << "|" << lcity[k] << endl;
			}
			f2.close();

			f2.open("Librarianindex.txt", ios::out);
			for (int l = 0; l < j - 1; l++) {
				for (int k = l + 1; k < j; k++)
				{
					if ((lid[l]) > (lid[k])) {
						templid = lid[l];
						lid[l] = lid[k];
						lid[k] = templid;
						temp = pos[l];
						pos[l] = pos[k];
						pos[k] = temp;
					}
				}
			}
			for (int i = 0; i < j; i++)
			{
				f2 << lid[i] << "|" << pos[i] << endl;
			}
			f2.close();
			break;
		}
	}
	if (flag == 0)
		MessageBox::Show("Not found");

}
};
}
