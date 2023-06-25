#pragma once
#include"Displaybook.h"
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

	/// <summary>
	/// Summary for student_section
	/// </summary>
	public ref class student_section : public System::Windows::Forms::Form
	{
	public:
		student_section(void)
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
		~student_section()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(426, 230);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Display All Book Records";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &student_section::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(114, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Book Id:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(191, 152);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &student_section::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(150, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 48);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &student_section::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(53, 334);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(555, 109);
			this->dataGridView1->TabIndex = 3;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Book ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Author";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Publication";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// student_section
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(671, 580);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"student_section";
			this->Text = L"student_section";
			this->Load += gcnew System::EventHandler(this, &student_section::student_section_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ id;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Displaybook db;
		db.ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;
		std::string key = context.marshal_as<std::string>(id);
		using namespace std;
		fstream f1, f2;
		string b_id[50], baddr[50], bname,bid,aname,pname;
		int i = -1, pos = 0, flag = 0, pos1 = 0;
		f1.open("Bookindex.txt", ios::in);
		f2.open("Booklist.txt", ios::in);
		while (!(f1.eof()))
		{
			getline(f1, b_id[++i], '|');
			getline(f1, baddr[i], '\n');
		}
		f1.close();
		for (int j = 0; j < i; j++)
		{
			if (key == b_id[j])
			{
				pos = stoi(baddr[j]);
				f2.seekg(pos, ios::beg);
				getline(f2, bid, '|');
				getline(f2, bname, '|');
				getline(f2, aname, '|');
				getline(f2, pname, '\n');
				flag = 1;
				break;
			}
		}
		f2.close();
		if (flag == 1) {
			dataGridView1->Visible = true;
			dataGridView1->Rows->Clear();
			dataGridView1->Rows->Add(gcnew String(bid.c_str()), gcnew String(bname.c_str()), gcnew String(aname.c_str()), gcnew String(pname.c_str()));
		}
		else {
			MessageBox::Show("No Record Found");
		}

	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	id = textBox1->Text;
}
private: System::Void student_section_Load(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Visible = false;
}
};
}
