#pragma once
#include<msclr/marshal_cppstd.h>
#include<fstream>
#include<string>
namespace libman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for addstudent
	/// </summary>
	public ref class addstudent : public System::Windows::Forms::Form
	{
	public:
		addstudent(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ sid, ^ sname, ^ sbranch, ^ ssem, ^ r_sid, ^ buffer;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~addstudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(87, 145);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Student ID:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 138);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &addstudent::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(87, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Name:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(176, 200);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &addstudent::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(87, 268);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Branch:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(176, 261);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 1;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &addstudent::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(176, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addstudent::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(87, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 16);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Semester:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(176, 304);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 1;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &addstudent::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(475, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Student ID:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(564, 186);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 1;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &addstudent::textBox5_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(553, 252);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &addstudent::button2_Click);
			// 
			// addstudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(865, 604);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"addstudent";
			this->Text = L"addstudent";
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
	sid = textBox1->Text;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	sname = textBox2->Text;
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	sbranch = textBox3->Text;
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (System::Text::RegularExpressions::Regex::IsMatch(textBox4->Text, "[^0-9]"))
	{
		MessageBox::Show("Please enter only numbers.");
		textBox1->Clear();
	}
	ssem = textBox4->Text;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (sid->Length != 4||ssem->Length!=1)
	{
		MessageBox::Show("Enter id in 4 digits and sem in 1 digit.");
	}
	else {
		buffer = sid + "|" + sname + "|" + sbranch+ "|" + ssem;
		MessageBox::Show(buffer);
		msclr::interop::marshal_context context;
		std::string name = context.marshal_as<std::string>(buffer);
		using namespace std;
		fstream f1, f2, f3, f4;
		f1.open("Studentlist.txt", ios::out | ios::app);
		f1 << name << endl;
		f1.close();
		string sname[50], sbranch[50],ssem[50], temp, sid[10];
		int i = -1, pos[100], tempos, count = 0;
		f1.open("Studentlist.txt", ios::in);
		f3.open("Studentindex.txt", ios::out);
		while (!(f1.eof()))
		{
			getline(f1, sid[++i], '|');
			getline(f1, sname[i], '|');
			getline(f1, sbranch[i], '|');
			getline(f1, ssem[i], '\n');
		}
		f1.close();
		f2.open("Studentlist.txt", ios::out);
		for (int j = 0; j < i; j++)
		{
			f2.seekp(0, ios::end);
			pos[j] = f2.tellp();
			MessageBox::Show(gcnew String(to_string(pos[j]).c_str()));
			f2 << sid[j] << '|' << sname[j] << "|" << sbranch[j]<<"|"<<ssem[j] << endl;
		}
		for (int j = 0; j < i; j++) {
			for (int k = j + 1; k <= i; k++)
			{
				if (sid[j] > sid[k])
				{
					temp = sid[j];
					sid[j] = sid[k];
					sid[k] = temp;
					tempos = pos[j];
					pos[j] = pos[k];
					pos[k] = tempos;
				}

			}
		}
		for (int j = 1; j <= i; j++)
		{
			f3 << sid[j] << "|" << pos[j] << endl;
		}
		f2.close();
		f3.close();
	}
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (System::Text::RegularExpressions::Regex::IsMatch(textBox5->Text, "[^0-9]"))
	{
		MessageBox::Show("Please enter only numbers.");
		textBox5->Clear();
	}
	r_sid = textBox5->Text;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;
	msclr::interop::marshal_context context;
	std::string key = context.marshal_as<std::string>(r_sid);
	fstream f2;
	string sname[50], sbranch[50], sid[50], tempsid,ssem[50];
	int j = -1, flag = 0, pos[100], temp;
	f2.open("Studentlist.txt", ios::in);
	while (!(f2.eof()))
	{
		getline(f2, sid[++j], '|');
		getline(f2, sname[j], '|');
		getline(f2, sbranch[j], '|');
		getline(f2, ssem[j], '\n');
		//MessageBox::Show(gcnew String(to_string(j).c_str()));
	}
	f2.close();
	for (int i = 0; i < j; i++)
	{
		if (key == sid[i])
		{
			for (int k = i; k < j; k++)
			{
				sid[k] = sid[k + 1];
				sname[k] = sname[k + 1];
				sbranch[k] = sbranch[k + 1];
				ssem[k] = ssem[k + 1];
			}
			j--;
			MessageBox::Show("Successfully Removed");
			flag = 1;

			f2.open("Studentlist.txt", ios::out);
			for (int k = 0; k < j; k++)
			{
				f2.seekp(0, ios::end);
				pos[k] = f2.tellp();
				f2 << sid[k] << "|" << sname[k] << "|" << sbranch[k] << "|" << ssem[k] << endl;
			}
			f2.close();

			f2.open("Studentindex.txt", ios::out);
			for (int l = 0; l < j - 1; l++) {
				for (int k = l + 1; k < j; k++)
				{
					if ((sid[l]) > (sid[k])) {
						tempsid = sid[l];
						sid[l] = sid[k];
						sid[k] = tempsid;
						temp = pos[l];
						pos[l] = pos[k];
						pos[k] = temp;
					}
				}
			}
			for (int i = 0; i < j; i++)
			{
				f2 << sid[i] << "|" << pos[i] << endl;
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
