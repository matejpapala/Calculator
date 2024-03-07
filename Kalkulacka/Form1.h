#pragma once

namespace Kalkulacka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  vysledek;
	protected:
	private: System::Windows::Forms::Button^  ButtonForOne;
	private: System::Windows::Forms::Button^  ButtonForTwo;
	private: System::Windows::Forms::Button^  ButtonForThree;
	private: System::Windows::Forms::Button^  ButtonForFour;
	private: System::Windows::Forms::Button^  ButtonForFive;
	private: System::Windows::Forms::Button^  ButtonForSix;
	private: System::Windows::Forms::Button^  ButtonForSeven;
	private: System::Windows::Forms::Button^  ButtonForEight;
	private: System::Windows::Forms::Button^  ButtonForNine;
	private: System::Windows::Forms::Button^  ButtonForZero;
	private: System::Windows::Forms::Button^  ButtonForReverse;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->vysledek = (gcnew System::Windows::Forms::Label());
			this->ButtonForOne = (gcnew System::Windows::Forms::Button());
			this->ButtonForTwo = (gcnew System::Windows::Forms::Button());
			this->ButtonForThree = (gcnew System::Windows::Forms::Button());
			this->ButtonForFour = (gcnew System::Windows::Forms::Button());
			this->ButtonForFive = (gcnew System::Windows::Forms::Button());
			this->ButtonForSix = (gcnew System::Windows::Forms::Button());
			this->ButtonForSeven = (gcnew System::Windows::Forms::Button());
			this->ButtonForEight = (gcnew System::Windows::Forms::Button());
			this->ButtonForNine = (gcnew System::Windows::Forms::Button());
			this->ButtonForZero = (gcnew System::Windows::Forms::Button());
			this->ButtonForReverse = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// vysledek
			// 
			this->vysledek->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->vysledek->Location = System::Drawing::Point(199, 45);
			this->vysledek->Name = L"vysledek";
			this->vysledek->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->vysledek->Size = System::Drawing::Size(184, 34);
			this->vysledek->TabIndex = 0;
			this->vysledek->Text = L"0";
			// 
			// ButtonForOne
			// 
			this->ButtonForOne->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ButtonForOne->Location = System::Drawing::Point(2, 113);
			this->ButtonForOne->Name = L"ButtonForOne";
			this->ButtonForOne->Size = System::Drawing::Size(60, 60);
			this->ButtonForOne->TabIndex = 1;
			this->ButtonForOne->Text = L"1";
			this->ButtonForOne->UseVisualStyleBackColor = true;
			this->ButtonForOne->Click += gcnew System::EventHandler(this, &Form1::ButtonForOne_Click);
			// 
			// ButtonForTwo
			// 
			this->ButtonForTwo->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ButtonForTwo->Location = System::Drawing::Point(68, 113);
			this->ButtonForTwo->Name = L"ButtonForTwo";
			this->ButtonForTwo->Size = System::Drawing::Size(60, 60);
			this->ButtonForTwo->TabIndex = 2;
			this->ButtonForTwo->Text = L"2";
			this->ButtonForTwo->UseVisualStyleBackColor = true;
			this->ButtonForTwo->Click += gcnew System::EventHandler(this, &Form1::ButtonForTwo_Click);
			// 
			// ButtonForThree
			// 
			this->ButtonForThree->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ButtonForThree->Location = System::Drawing::Point(134, 113);
			this->ButtonForThree->Name = L"ButtonForThree";
			this->ButtonForThree->Size = System::Drawing::Size(60, 60);
			this->ButtonForThree->TabIndex = 3;
			this->ButtonForThree->Text = L"3";
			this->ButtonForThree->UseVisualStyleBackColor = true;
			this->ButtonForThree->Click += gcnew System::EventHandler(this, &Form1::ButtonForThree_Click);
			// 
			// ButtonForFour
			// 
			this->ButtonForFour->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ButtonForFour->Location = System::Drawing::Point(2, 179);
			this->ButtonForFour->Name = L"ButtonForFour";
			this->ButtonForFour->Size = System::Drawing::Size(60, 60);
			this->ButtonForFour->TabIndex = 4;
			this->ButtonForFour->Text = L"4";
			this->ButtonForFour->UseVisualStyleBackColor = true;
			this->ButtonForFour->Click += gcnew System::EventHandler(this, &Form1::ButtonForFour_Click);
			// 
			// ButtonForFive
			// 
			this->ButtonForFive->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ButtonForFive->Location = System::Drawing::Point(68, 179);
			this->ButtonForFive->Name = L"ButtonForFive";
			this->ButtonForFive->Size = System::Drawing::Size(60, 60);
			this->ButtonForFive->TabIndex = 5;
			this->ButtonForFive->Text = L"5";
			this->ButtonForFive->UseVisualStyleBackColor = true;
			this->ButtonForFive->Click += gcnew System::EventHandler(this, &Form1::ButtonForFive_Click);
			// 
			// ButtonForSix
			// 
			this->ButtonForSix->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ButtonForSix->Location = System::Drawing::Point(134, 179);
			this->ButtonForSix->Name = L"ButtonForSix";
			this->ButtonForSix->Size = System::Drawing::Size(60, 60);
			this->ButtonForSix->TabIndex = 6;
			this->ButtonForSix->Text = L"6";
			this->ButtonForSix->UseVisualStyleBackColor = true;
			this->ButtonForSix->Click += gcnew System::EventHandler(this, &Form1::ButtonForSix_Click);
			// 
			// ButtonForSeven
			// 
			this->ButtonForSeven->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ButtonForSeven->Location = System::Drawing::Point(2, 245);
			this->ButtonForSeven->Name = L"ButtonForSeven";
			this->ButtonForSeven->Size = System::Drawing::Size(60, 60);
			this->ButtonForSeven->TabIndex = 7;
			this->ButtonForSeven->Text = L"7";
			this->ButtonForSeven->UseVisualStyleBackColor = true;
			this->ButtonForSeven->Click += gcnew System::EventHandler(this, &Form1::ButtonForSeven_Click);
			// 
			// ButtonForEight
			// 
			this->ButtonForEight->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ButtonForEight->Location = System::Drawing::Point(68, 245);
			this->ButtonForEight->Name = L"ButtonForEight";
			this->ButtonForEight->Size = System::Drawing::Size(60, 60);
			this->ButtonForEight->TabIndex = 8;
			this->ButtonForEight->Text = L"8";
			this->ButtonForEight->UseVisualStyleBackColor = true;
			this->ButtonForEight->Click += gcnew System::EventHandler(this, &Form1::ButtonForEight_Click);
			// 
			// ButtonForNine
			// 
			this->ButtonForNine->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ButtonForNine->Location = System::Drawing::Point(134, 245);
			this->ButtonForNine->Name = L"ButtonForNine";
			this->ButtonForNine->Size = System::Drawing::Size(60, 60);
			this->ButtonForNine->TabIndex = 9;
			this->ButtonForNine->Text = L"9";
			this->ButtonForNine->UseVisualStyleBackColor = true;
			this->ButtonForNine->Click += gcnew System::EventHandler(this, &Form1::ButtonForNine_Click);
			// 
			// ButtonForZero
			// 
			this->ButtonForZero->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ButtonForZero->Location = System::Drawing::Point(2, 311);
			this->ButtonForZero->Name = L"ButtonForZero";
			this->ButtonForZero->Size = System::Drawing::Size(192, 60);
			this->ButtonForZero->TabIndex = 10;
			this->ButtonForZero->Text = L"0";
			this->ButtonForZero->UseVisualStyleBackColor = true;
			this->ButtonForZero->Click += gcnew System::EventHandler(this, &Form1::ButtonForZero_Click);
			// 
			// ButtonForReverse
			// 
			this->ButtonForReverse->Font = (gcnew System::Drawing::Font(L"Impact", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ButtonForReverse->Location = System::Drawing::Point(200, 245);
			this->ButtonForReverse->Name = L"ButtonForReverse";
			this->ButtonForReverse->Size = System::Drawing::Size(60, 60);
			this->ButtonForReverse->TabIndex = 11;
			this->ButtonForReverse->Text = L"±";
			this->ButtonForReverse->UseVisualStyleBackColor = true;
			this->ButtonForReverse->Click += gcnew System::EventHandler(this, &Form1::ButtonForReverse_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(395, 399);
			this->Controls->Add(this->ButtonForReverse);
			this->Controls->Add(this->ButtonForZero);
			this->Controls->Add(this->ButtonForNine);
			this->Controls->Add(this->ButtonForEight);
			this->Controls->Add(this->ButtonForSeven);
			this->Controls->Add(this->ButtonForSix);
			this->Controls->Add(this->ButtonForFive);
			this->Controls->Add(this->ButtonForFour);
			this->Controls->Add(this->ButtonForThree);
			this->Controls->Add(this->ButtonForTwo);
			this->Controls->Add(this->ButtonForOne);
			this->Controls->Add(this->vysledek);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	void PridaniCisla(String^ cislo) {
		if (vysledek->Text == "0") {
			vysledek->Text = cislo;
		}
		else {
			vysledek->Text += cislo;
		}
	}

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ButtonForOne_Click(System::Object^  sender, System::EventArgs^  e) {
		PridaniCisla("1");
	}
	private: System::Void ButtonForTwo_Click(System::Object^  sender, System::EventArgs^  e) {
		PridaniCisla("2");
	}
private: System::Void ButtonForThree_Click(System::Object^  sender, System::EventArgs^  e) {
	PridaniCisla("3");
}
private: System::Void ButtonForFour_Click(System::Object^  sender, System::EventArgs^  e) {
	PridaniCisla("4");
}
private: System::Void ButtonForFive_Click(System::Object^  sender, System::EventArgs^  e) {
	PridaniCisla("5");
}
private: System::Void ButtonForSix_Click(System::Object^  sender, System::EventArgs^  e) {
	PridaniCisla("6");
}
private: System::Void ButtonForSeven_Click(System::Object^  sender, System::EventArgs^  e) {
	PridaniCisla("7");
}
private: System::Void ButtonForEight_Click(System::Object^  sender, System::EventArgs^  e) {
	PridaniCisla("8");
}
private: System::Void ButtonForNine_Click(System::Object^  sender, System::EventArgs^  e) {
	PridaniCisla("9");
}
private: System::Void ButtonForZero_Click(System::Object^  sender, System::EventArgs^  e) {
	PridaniCisla("0");
}
private: System::Void ButtonForReverse_Click(System::Object^  sender, System::EventArgs^  e) {
	double res;
	double x = System::Convert::ToDouble(vysledek->Text);
	res = x * -1;
	vysledek->Text = System::Convert::ToString(res);
	//vysledek->Text = vysledek->Text + "-"; dava - pred cislo
}
};
}
