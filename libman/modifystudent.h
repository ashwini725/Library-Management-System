#pragma once
#include<msclr/marshal_cppstd.h>
#include<fstream>
#include <sstream>
namespace libman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for modifystudent
	/// </summary>
	public ref class modifystudent : public System::Windows::Forms::Form
	{
	public:
		modifystudent(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
			String^ id,^msname,^msbranch,^mssem;
		int flag;
		msclr::interop::marshal_context context;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~modifystudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(225, 211);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &modifystudent::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(830, 323);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Modify";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &modifystudent::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(158, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Student ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(710, 196);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(253, 148);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &modifystudent::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(710, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 16);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Student ID:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(805, 148);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(805, 190);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &modifystudent::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(805, 229);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 2;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &modifystudent::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(805, 271);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 2;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &modifystudent::textBox5_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(710, 277);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Sem:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(710, 229);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Branch:";
			// 
			// modifystudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1091, 588);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"modifystudent";
			this->Text = L"modifystudent";
			this->Load += gcnew System::EventHandler(this, &modifystudent::modifystudent_Load);
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
		id = textBox1->Text;
		if (textBox1->Text == "")
		{
			button1->Enabled = false;
		}
		else
			button1->Enabled = true;
	}
private: System::Void modifystudent_Load(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = false;
	button2->Enabled = false;
	textBox2->Enabled = false;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	flag = 0;

	std::string key = context.marshal_as<std::string>(id);
	using namespace std;
	fstream f1;
	string saddr[20], sid[10];
	f1.open("Studentindex.txt", ios::in);
	int i = -1;
	while (!(f1.eof()))
	{
		getline(f1, sid[++i], '|');
		getline(f1, saddr[i], '\n');
	}
	for (int j = 0; j <= i; j++)
	{
		if (key == sid[j]) {
			textBox2->Text = id;
			//textBox2->Enabled = false;
			flag = 1;
			MessageBox::Show("Record Found :) " + id);
		}
	}
	if (flag == 0)
	{
		textBox2->Clear();
		MessageBox::Show("Record Not Found :( ");
	}
	f1.close();
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	msname = textBox3->Text;
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	msbranch= textBox4->Text;
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[^0-9]"))
	{
		MessageBox::Show("Please enter only numbers.");
		textBox5->Clear();
	}
	mssem= textBox5->Text;
	if (msname == "" || msbranch == "" || mssem == "")
	{
		button2->Enabled = false;
	}
	else
		button2->Enabled = true;

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (mssem->Length != 1)
	{
		MessageBox::Show("Enter sem in 1 digit");
	}
	else
	{
		using namespace std;
		string key = context.marshal_as<string>(id);
		fstream f2;
		string sid[50], sname[50], addr[50], sbranch[50], ssem[50], s_id[50], tempsid;
		f2.open("Studentindex.txt", ios::in);
		int i = -1, j = -1, temp, pos[10];
		while (!(f2.eof()))
		{

			getline(f2, sid[++i], '|');
			getline(f2, addr[i], '\n');

		}
		f2.close();
		for (int a = 0; a < i; a++)
		{
			if (key == sid[a]) {
				temp = a;
				break;
			}
		}
		f2.open("Studentlist.txt", ios::in);
		while (!(f2.eof()))
		{
			getline(f2, s_id[++j], '|');
			getline(f2, sname[j], '|');
			getline(f2, sbranch[j], '|');
			getline(f2, ssem[j], '\n');
		}
		f2.close();
		if (flag == 1) {
			sname[temp] = context.marshal_as<std::string>(msname);
			sbranch[temp] = context.marshal_as<std::string>(msbranch);
			ssem[temp] = context.marshal_as<std::string>(mssem);
			f2.open("Studentlist.txt", ios::out);
			for (int k = 0; k < j; k++)
			{
				f2.seekp(0, ios::end);
				pos[k] = f2.tellg();
				f2 << s_id[k] << "|" << sname[k] << "|" << sbranch[k] << "|" << ssem[k] << endl;
			}
			f2.close();
			f2.open("Studentindex.txt", ios::out);
			for (int l = 0; l < j - 1; l++) {
				for (int k = l + 1; k < j; k++)
				{
					if ((s_id[l]) > (s_id[k])) {
						tempsid = s_id[l];
						s_id[l] = s_id[k];
						s_id[k] = tempsid;
						temp = pos[l];
						pos[l] = pos[k];
						pos[k] = temp;
					}
				}
			}
			for (int i = 0; i < j; i++)
			{
				f2 << s_id[i] << "|" << pos[i] << endl;
			}
			f2.close();
		}
	}
}
};
}
