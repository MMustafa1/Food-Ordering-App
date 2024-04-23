#pragma once
#include "login.h"
#include "resgisteruser.h"
#include "registerasdelivery.h"

//#include "User.h"
namespace OOPFINALPROJECTSEMESTER2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;



	protected:

	protected:



	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowText;
			this->button1->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(857, 441);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 52);
			this->button1->TabIndex = 19;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click_1);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(794, 209);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(495, 74);
			this->label1->TabIndex = 20;
			this->label1->Text = L"TAST TRIALS";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::WindowText;
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(857, 545);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(203, 52);
			this->button3->TabIndex = 21;
			this->button3->Text = L"SIGN UP";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::WindowText;
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(857, 664);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(203, 52);
			this->button4->TabIndex = 22;
			this->button4->Text = L"SIGN UP AS DELIVERY PERSON";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(869, 283);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 16);
			this->label2->TabIndex = 23;
			this->label2->Text = L"RIDE THE FLAVOR WAVE";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->Name = L"MyForm1";
			this->Text = L"FOOD ORDERING APP";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public:bool switchtologin = false;
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
	
	
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		OOPFINALPROJECTSEMESTER2::login^ login1 = gcnew OOPFINALPROJECTSEMESTER2::login();
		login1->Show(); // Show MyForm1
		this->Hide(); // Hide the current form  

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::resgisteruser^ reg1 = gcnew OOPFINALPROJECTSEMESTER2::resgisteruser();
	reg1->Show(); // Show MyForm1
	this->Hide(); // Hide the current form

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::registerasdelivery^ reg2 = gcnew OOPFINALPROJECTSEMESTER2::registerasdelivery();
	reg2->Show(); // Show MyForm1
	this->Hide();


}
};
}
