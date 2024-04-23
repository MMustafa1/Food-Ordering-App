#pragma once

namespace OOPFINALPROJECTSEMESTER2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dashboard
	/// </summary>
	public ref class dashboard : public System::Windows::Forms::Form
	{
	public:
		dashboard(void)
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
		~dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ mainpic;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker3;
	private: System::Windows::Forms::Button^ secondimage;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dashboard::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->mainpic = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker3 = (gcnew System::ComponentModel::BackgroundWorker());
			this->secondimage = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::RosyBrown;
			this->button1->Location = System::Drawing::Point(1811, 56);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 61);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::RosyBrown;
			this->button2->Location = System::Drawing::Point(1694, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(81, 61);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::RosyBrown;
			this->button3->Location = System::Drawing::Point(1571, 56);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 61);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::RosyBrown;
			this->button4->Location = System::Drawing::Point(1452, 56);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 61);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::RosyBrown;
			this->button5->Location = System::Drawing::Point(30, 56);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 61);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// mainpic
			// 
			this->mainpic->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mainpic.BackgroundImage")));
			this->mainpic->Location = System::Drawing::Point(198, 187);
			this->mainpic->Name = L"mainpic";
			this->mainpic->Size = System::Drawing::Size(1515, 285);
			this->mainpic->TabIndex = 6;
			this->mainpic->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button8->Location = System::Drawing::Point(45, 299);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(81, 61);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &dashboard::button8_Click);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->Location = System::Drawing::Point(1786, 299);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(81, 61);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &dashboard::button9_Click);
			// 
			// secondimage
			// 
			this->secondimage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"secondimage.BackgroundImage")));
			this->secondimage->Location = System::Drawing::Point(195, 378);
			this->secondimage->Name = L"secondimage";
			this->secondimage->Size = System::Drawing::Size(1515, 285);
			this->secondimage->TabIndex = 9;
			this->secondimage->UseVisualStyleBackColor = true;
			this->secondimage->Visible = false;
			// 
			// dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->secondimage);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->mainpic);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"dashboard";
			this->Text = L"FOOD ORDERING APP";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

		int newX1 = mainpic->Location.X;
		int newy1 = mainpic->Location.Y;
		int newX = button9->Location.X - mainpic->Location.X-10;
		int newY = mainpic->Location.Y;

		mainpic->Location = Point(newX, newY);

		button9->Visible = true;
		secondimage->Location = Point(newX1, newy1);
		secondimage->Visible = true;

	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	int newX1 = mainpic->Location.X;
	int newy1 = mainpic->Location.Y;
	int newX = button9->Location.X - mainpic->Location.X + 10;
	int newY = mainpic->Location.Y;

	mainpic->Location = Point(newX, newY);

	button9->Visible = true;
	secondimage->Location = Point(newX1, newy1);
	secondimage->Visible = true;
}
};
}
