#pragma once
#include"addbook.h"
#include"Displaybook.h"
#include"booksearch.h"
#include"modifybook.h"
#include"addlibrarian.h"
#include"displaylibrarian.h"
#include"librariansearch.h"
#include"modifylibrarian.h"
#include"addstudent.h"
#include"displaystudent.h"
#include"modifystudent.h"
#include"studentsearch.h"
namespace libman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminopsel
	/// </summary>
	public ref class adminopsel : public System::Windows::Forms::Form
	{
	public:
		adminopsel(void)
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
		~adminopsel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Button^ button1;












	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;








	private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(904, 505);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &adminopsel::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(202, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 31);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Book";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(202, 247);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 31);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Librarian";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(202, 383);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 31);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Student";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(259, 157);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 61);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Add/Remove";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &adminopsel::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(441, 157);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 61);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Display Records";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &adminopsel::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(782, 157);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 61);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Search";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &adminopsel::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(259, 297);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(113, 61);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Add/Remove";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &adminopsel::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(441, 297);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(113, 61);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Display Records";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &adminopsel::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(782, 297);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(113, 61);
			this->button7->TabIndex = 5;
			this->button7->Text = L"Search";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &adminopsel::button7_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(255, 425);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(113, 61);
			this->button8->TabIndex = 5;
			this->button8->Text = L"Add/Remove";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &adminopsel::button8_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(441, 425);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(113, 61);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Display Records";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &adminopsel::button9_Click);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(782, 425);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(113, 61);
			this->button10->TabIndex = 5;
			this->button10->Text = L"Search";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &adminopsel::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(606, 157);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(102, 61);
			this->button11->TabIndex = 6;
			this->button11->Text = L"Modify";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &adminopsel::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(606, 297);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(105, 60);
			this->button12->TabIndex = 7;
			this->button12->Text = L"Modify";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &adminopsel::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(606, 425);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(105, 60);
			this->button13->TabIndex = 7;
			this->button13->Text = L"Modify";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &adminopsel::button13_Click);
			// 
			// adminopsel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1060, 613);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"adminopsel";
			this->Text = L"adminopsel";
			this->Load += gcnew System::EventHandler(this, &adminopsel::adminopsel_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void adminopsel_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	studentsearch ss;
	ss.ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	addbook ab;
	ab.ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {	
	Displaybook db;
	db.ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {	
	booksearch bs;
	bs.ShowDialog();

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	addlibrarian al;
	al.ShowDialog();
}


private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	modifybook mb;
	mb.ShowDialog();

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	modifystudent ms;
	ms.ShowDialog();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	modifylibrarian ml;
	ml.ShowDialog();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	displaylibrarian dl;
	dl.ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	librariansearch ls;
	ls.ShowDialog();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	addstudent as;
	as.ShowDialog();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	displaystudent ds;
	ds.ShowDialog();
}
};
}
