#pragma once
#include <stdio.h>

namespace Pr4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	public ref class MyForm4 : public System::Windows::Forms::Form
	{
	public:
		MyForm4(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		~MyForm4()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private:System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm4::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(366, 359);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Зберегти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm4::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(806, 339);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm4::richTextBox1_KeyUp);
			// 
			// MyForm4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(806, 394);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm4";
			this->Text = L"Створення\\Редагування теоретичних відомостей";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm4::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm4::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		FILE * f = fopen("data.txt", "a");//якщо файл data.txt не існує то створимо його, якщо існує - ніяких дій не зробимо
		fclose(f);
		richTextBox1->LoadFile("data.txt", RichTextBoxStreamType::PlainText); //завантажуємо інформацію з файлу data.txt в richTextBox1
		richTextBox1->Modified = false; //вказуємо, що зміни тексту richTextBox1 немає

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->SaveFile("data.txt", RichTextBoxStreamType::PlainText); //зберігаємо інформацію з richTextBox1 в файл data.txt
		richTextBox1->Modified = false;//вказуємо, що зміни тексту richTextBox1 немає    
		button1->Enabled = false;//кнопку "Зберегти" робимо неактивною
	}

	private: System::Void richTextBox1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (richTextBox1->Modified == true) //якщо зміна вмісту richTextBox1
			button1->Enabled = true; //кнопку "Зберегти" робимо активною
	}
	private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		if (button1->Enabled == true)
		{
			auto MeBox = MessageBox::Show("Текст було змінено. \nЗберегти зміни?", "Простий редактор", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Exclamation); //якщо кнопка button1 активна (тобто зміни тексту не збережені) то виводимо повідомлення в MessageBox, що має 3 кнопки: "Yes", "No" і "Cancel"
			if (MeBox == Windows::Forms::DialogResult::No) return; //якщо натиснута кнопка "No" то не зберігаємо змін і закриваємо форму
			if (MeBox == Windows::Forms::DialogResult::Cancel) e->Cancel = true; //якщо натиснута кнопка "Cancel" то нічого не робимо і не закриваємо форму
			if (MeBox == Windows::Forms::DialogResult::Yes) richTextBox1->SaveFile("data.txt", RichTextBoxStreamType::PlainText); //якщо натиснута кнопка "Yes" то зберігаємо зміни і закриваємо форму
		}
	}
	};
}