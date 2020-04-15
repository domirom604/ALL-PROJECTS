#pragma once
#include "MyForm1.h"



namespace Project6 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		int a = 0;
		MyForm1(void)
		{
			InitializeComponent();
			

			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		
	protected:
		/// <summary>
		/// WyczyúÊ wszystkie uøywane zasoby.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textB;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button9;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs≥ugi projektanta ó nie naleøy modyfikowaÊ
		/// jej zawartoúci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textB = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(463, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(105, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(342, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"TEST WIEDZY OG”LNEJ:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(305, 135);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"TAK";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(305, 190);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"TAK";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(305, 245);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"TAK";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(463, 135);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"NIE";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(463, 187);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"NIE";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(463, 245);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"NIE";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(8, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(238, 20);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Czy Audi powsta≥o w 1896 roku\?";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(8, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(275, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Czy koÒ by≥ pierwszym samochodem\?";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(8, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(238, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Czy seradela to roúlina czy ryba\?";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(117, 363);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"TW”J SCORE TO:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(285, 356);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 29);
			this->label6->TabIndex = 13;
			this->label6->Text = L"0";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm1::label6_Click);
			// 
			// textB
			// 
			this->textB->Location = System::Drawing::Point(305, 303);
			this->textB->Name = L"textB";
			this->textB->Size = System::Drawing::Size(233, 20);
			this->textB->TabIndex = 14;
			this->textB->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(12, 303);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(218, 20);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Podaj imiÍ twÛrcy Facebooka:";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm1::label7_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(383, 329);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 16;
			this->button9->Text = L"ZATWIERDè";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 406);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textB);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		button4->ForeColor = System::Drawing::Color::Red;
		button7->Hide();
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	button3->ForeColor = System::Drawing::Color::Red;
	button6->Hide();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	button6->ForeColor = System::Drawing::Color::Green;
	a++;
	this->label6->Text = a.ToString("D2");
	button6->Hide();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	button7->ForeColor = System::Drawing::Color::Green;
	a++;
	this->label6->Text = a.ToString("D2");
	button7->Hide();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	button8->ForeColor = System::Drawing::Color::Red;
	button5->Hide();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	button5->ForeColor = System::Drawing::Color::Green;
	a++;
	this->label6->Text = a.ToString("D2");
	button5->Hide();
	
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^odp = textB->Text;
	String ^odpowiedz = "Mark";
	String ^odpowiedz1 = "mark";
	if (odp == odpowiedz || odp== odpowiedz1)
	{
		a++;
		this->label6->Text = a.ToString("D2");
		button9->Hide();
		
	}
	else
	{
		button9->ForeColor = System::Drawing::Color::Red;
		this->button9->Text = L"èle";
	}
}
};
}
