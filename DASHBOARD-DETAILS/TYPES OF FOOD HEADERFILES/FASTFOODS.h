#pragma once
#include "McDonalds.h"
#include"KFC.h"
#include"Subway.h"
#include"HennBun.h"
#include"HOWDIE.h"
#include"SuperGrillBurger.h"
namespace OOPFINALPROJECTSEMESTER2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FASTFOODS
	/// </summary>
	public ref class FASTFOODS : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		FASTFOODS(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FASTFOODS(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FASTFOODS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button8;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FASTFOODS::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(731, 193);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(409, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"FAST FOOD RESTAURANTS:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(28, 262);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(277, 243);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(825, 262);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(277, 243);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(1598, 262);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(277, 243);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(1598, 625);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(277, 243);
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(825, 625);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(277, 243);
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(28, 625);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(277, 243);
			this->pictureBox6->TabIndex = 4;
			this->pictureBox6->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSalmon;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(28, 529);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(277, 43);
			this->button1->TabIndex = 7;
			this->button1->Text = L"VIEW MENU";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FASTFOODS::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSalmon;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(825, 529);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(277, 43);
			this->button2->TabIndex = 8;
			this->button2->Text = L"VIEW MENU";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FASTFOODS::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightSalmon;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1598, 540);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(277, 43);
			this->button3->TabIndex = 9;
			this->button3->Text = L"VIEW MENU";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FASTFOODS::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightSalmon;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(28, 922);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(277, 43);
			this->button4->TabIndex = 10;
			this->button4->Text = L"VIEW MENU";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &FASTFOODS::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LightSalmon;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(825, 922);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(277, 43);
			this->button5->TabIndex = 11;
			this->button5->Text = L"VIEW MENU";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &FASTFOODS::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightSalmon;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1598, 913);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(277, 43);
			this->button6->TabIndex = 12;
			this->button6->Text = L"VIEW MENU";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &FASTFOODS::button6_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::RosyBrown;
			this->button8->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button8->Location = System::Drawing::Point(42, 60);
			this->button8->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 70);
			this->button8->TabIndex = 42;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &FASTFOODS::button8_Click);
			// 
			// FASTFOODS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FASTFOODS";
			this->Text = L"TASTY TRIALS";
			this->Load += gcnew System::EventHandler(this, &FASTFOODS::FASTFOODS_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FASTFOODS_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	OOPFINALPROJECTSEMESTER2::McDonalds^ MC = gcnew OOPFINALPROJECTSEMESTER2::McDonalds(this);

	MC->Show();
	this->Hide();


}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::KFC^ kf = gcnew OOPFINALPROJECTSEMESTER2::KFC(this);

	kf->Show();
	this->Hide();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::SuperGrillBurger^ sg = gcnew OOPFINALPROJECTSEMESTER2::SuperGrillBurger(this);

	sg->Show();
	this->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::HennBun^ HN = gcnew OOPFINALPROJECTSEMESTER2::HennBun(this);

	HN->Show();
	this->Hide();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::Subway^ SW = gcnew OOPFINALPROJECTSEMESTER2::Subway(this);

	SW->Show();
	this->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	OOPFINALPROJECTSEMESTER2::HOWDIE^ HD = gcnew OOPFINALPROJECTSEMESTER2::HOWDIE(this);

	HD->Show();
	this->Hide();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	obj->Show();


}
};
}
