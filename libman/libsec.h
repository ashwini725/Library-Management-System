#pragma once
#include"libbookissue.h"
#include"Displaybook.h"
#include"displaystudent.h"
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
	/// Summary for libsec
	/// </summary>
	public ref class libsec : public System::Windows::Forms::Form
	{
	public:
		libsec(void)
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
		~libsec()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(37, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 63);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Student Record";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &libsec::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(37, 163);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 63);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Issue Book";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &libsec::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(270, 163);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 63);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Display Issued Book";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &libsec::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(266, 71);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(96, 63);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Display Book";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &libsec::button5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(37, 253);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(428, 150);
			this->dataGridView1->TabIndex = 4;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Student ID:";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Book ID";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Issued Date";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// libsec
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 434);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Name = L"libsec";
			this->Text = L"libsec";
			this->Load += gcnew System::EventHandler(this, &libsec::libsec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		libbookissue bissue;
		bissue.ShowDialog();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	displaystudent ds;
	ds.ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Visible = true;
	using namespace std;
	fstream f1;
	string sid, bid, issuedate;
	f1.open("Issuedbook.txt", ios::in);
	while (!(f1.eof()))
	{
		getline(f1, sid, '|');
		getline(f1, bid, '|');
		getline(f1, issuedate, '\n');
		dataGridView1->Rows->Add(gcnew String(sid.c_str()), gcnew String(bid.c_str()), gcnew String(issuedate.c_str()));
		sid = bid = issuedate = "";
	}
	f1.close();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Displaybook db;
	db.ShowDialog();

}
private: System::Void libsec_Load(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Visible = false;
}
};
}
