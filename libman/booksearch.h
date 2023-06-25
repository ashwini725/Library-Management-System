#pragma once
#include<msclr/marshal_cppstd.h>
#include<string>
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
	/// Summary for bookindex
	/// </summary>
	public ref class booksearch : public System::Windows::Forms::Form
	{
	public:
		booksearch(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		String^ bname;
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~booksearch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(140, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Book ID:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(225, 73);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(169, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &booksearch::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(207, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &booksearch::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(501, 73);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(488, 324);
			this->listBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(574, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Book name:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(687, 54);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Author name:";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(799, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Publication name:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(498, 54);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Book ID";
			// 
			// booksearch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 479);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"booksearch";
			this->Text = L"bookindex";
			this->Load += gcnew System::EventHandler(this, &booksearch::booksearch_Load);
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
		if(textBox1->Text=="")
			button1->Enabled = false;
		else
			button1->Enabled = true;
		bname = textBox1->Text;
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	msclr::interop::marshal_context context;
	std::string name = context.marshal_as<std::string>(bname);
	using namespace std;
	fstream f1,f2,f3;
	string b_id[50], baddr[50],searched;
	int i = -1, pos = 0, flag = 0,pos1=0;
	f1.open("Bookindex.txt", ios::in);
	f2.open("Booklist.txt", ios::in);
	f3.open("search.txt", ios::out);
	while (!(f1.eof()))
	{
		getline(f1,b_id[++i],'|');
		getline(f1,baddr[i],'\n');
	}
	f1.close();
	for (int j = 0; j < i; j++)
	{
		if (name==b_id[j])
		{
			pos = stoi(baddr[j]);
			f2.seekg(pos, ios::beg);
			getline(f2, searched, '\n');
			f3 << searched <<endl;
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


private: System::Void booksearch_Load(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = false;
}
};
}
