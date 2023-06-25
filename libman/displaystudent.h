#pragma once

namespace libman {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for displaystudent
	/// </summary>
	public ref class displaystudent : public System::Windows::Forms::Form
	{
	public:
		displaystudent(void)
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
		~displaystudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(408, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Student Name";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &displaystudent::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(408, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 64);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Student Index";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &displaystudent::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(31, 121);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(350, 404);
			this->listBox1->TabIndex = 2;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 16;
			this->listBox2->Location = System::Drawing::Point(509, 121);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(350, 404);
			this->listBox2->TabIndex = 2;
			// 
			// displaystudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(915, 579);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"displaystudent";
			this->Text = L"displaystudent";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		StreamReader^ gds = File::OpenText("Studentlist.txt");
		String^ line;

		while ((line = gds->ReadLine()) != nullptr) {
			listBox1->Items->Add(line);
		}
		gds->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();
		StreamReader^ gds = File::OpenText("Studentindex.txt");
		String^ line;

		while ((line = gds->ReadLine()) != nullptr) {
			listBox2->Items->Add(line);
		}
		gds->Close();
	}
};
}
