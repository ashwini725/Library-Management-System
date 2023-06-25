#pragma once
#include "adminopsel.h"


namespace libman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for adminlogin
	/// </summary>
	public ref class adminlogin : public System::Windows::Forms::Form
	{
	public:
		
		adminlogin(void)
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
		~adminlogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ usrname;

	private: System::Windows::Forms::TextBox^ pass;


	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// 
		/// </summary>
		System::ComponentModel::Container ^components;
		String^ uname = "admin"; String^ passw = "admin123";

	private: System::Windows::Forms::Label^ label4;

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
			this->usrname = (gcnew System::Windows::Forms::TextBox());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(337, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADMIN LOGIN PAGE";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(238, 165);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username:";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(238, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password:";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(341, 321);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &adminlogin::button1_Click);
			// 
			// usrname
			// 
			this->usrname->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->usrname->Location = System::Drawing::Point(355, 149);
			this->usrname->Multiline = true;
			this->usrname->Name = L"usrname";
			this->usrname->Size = System::Drawing::Size(203, 32);
			this->usrname->TabIndex = 4;
			this->usrname->TextChanged += gcnew System::EventHandler(this, &adminlogin::textBox1_TextChanged);
			// 
			// pass
			// 
			this->pass->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pass->Location = System::Drawing::Point(355, 206);
			this->pass->Multiline = true;
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(203, 31);
			this->pass->TabIndex = 4;
			this->pass->UseSystemPasswordChar = true;
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->AutoSize = true;
			this->button2->Location = System::Drawing::Point(565, 321);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 43);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &adminlogin::button2_Click);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(500, 266);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(116, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Forget Password\?";
			this->label4->Click += gcnew System::EventHandler(this, &adminlogin::label4_Click);
			// 
			// adminlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(783, 561);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->usrname);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"adminlogin";
			this->Text = L"adminlogin";
			this->Load += gcnew System::EventHandler(this, &adminlogin::adminlogin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		adminopsel obj;
		//if (usrname->Text == uname && pass->Text == passw)
		{
			MessageBox::Show("Successful");
			this->Hide();
			obj.ShowDialog();
		}
		/*else if (usrname->Text != uname && pass->Text != passw)
		{
			MessageBox::Show("Login Failed!!!\nWrong Username or Password");
		}*/
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void adminlogin_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Contact Officials to change password!!!");
}
};
}
