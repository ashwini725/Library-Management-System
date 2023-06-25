#pragma once
#include<fstream>
#include<string>
#include<msclr/marshal_cppstd.h>
namespace libman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for studentsearch
	/// </summary>
	public ref class studentsearch : public System::Windows::Forms::Form
	{
	public:
		studentsearch(void)
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
		~studentsearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(233, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &studentsearch::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(147, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Student ID:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(233, 162);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &studentsearch::textBox1_TextChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(584, 142);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(365, 212);
			this->listBox1->TabIndex = 3;
			// 
			// studentsearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1100, 586);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"studentsearch";
			this->Text = L"studentsearch";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		String^ sid;
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (System::Text::RegularExpressions::Regex::IsMatch(textBox1->Text, "[^0-9]"))
		{
			MessageBox::Show("Please enter only numbers.");
			textBox1->Clear();
		}
		if (textBox1->Text == "")
			button1->Enabled = false;
		else
			button1->Enabled = true;
		sid = textBox1->Text;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		msclr::interop::marshal_context context;
		std::string key = context.marshal_as<std::string>(sid);
		using namespace std;
		fstream f1, f2, f3;
		string s_id[50], saddr[50], searched;
		int i = -1, pos = 0, flag = 0, pos1 = 0;
		f1.open("Studentindex.txt", ios::in);
		f2.open("Studentlist.txt", ios::in);
		f3.open("search.txt", ios::out);
		while (!(f1.eof()))
		{
			getline(f1, s_id[++i], '|');
			getline(f1, saddr[i], '\n');
		}
		f1.close();
		for (int j = 0; j < i; j++)
		{
			if (key == s_id[j])
			{
				pos = stoi(saddr[j]);
				f2.seekg(pos, ios::beg);
				getline(f2, searched, '\n');
				f3 << searched << endl;
				flag = 1;
			}
		}
		//f1.close();
		f2.close();
		f3.close();
		if (flag == 1) {
			StreamReader^ gds = File::OpenText("search.txt");
			String^ line;

			while ((line = gds->ReadLine()) != nullptr) {
				listBox1->Items->Add(line);
			}
			gds->Close();
		}
		else {
			MessageBox::Show("No Record Found");
		}
		remove("search.txt");
	}
};
}
