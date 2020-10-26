#pragma once
#include <stdio.h>
#include <msclr\marshal.h>
#include "Header.h"


namespace Pr4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Runtime::InteropServices;
	using namespace msclr::interop;

	public ref class MyForm5 : public System::Windows::Forms::Form
	{
	public:
		MyForm5(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm5()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label5;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm5::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Внесення";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm5::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 42);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Редагування";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm5::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(267, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(327, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Tag = L"1";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(267, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(327, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Tag = L"1";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox1_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(267, 151);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(327, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Tag = L"1";
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox1_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(267, 177);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(327, 20);
			this->textBox4->TabIndex = 2;
			this->textBox4->Tag = L"1";
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox1_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(267, 203);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(327, 20);
			this->textBox5->TabIndex = 2;
			this->textBox5->Tag = L"1";
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox1_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(267, 229);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(327, 20);
			this->textBox6->TabIndex = 2;
			this->textBox6->Tag = L"1";
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(399, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 3;
			this->label1->Tag = L"1";
			this->label1->Text = L"Питання";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(380, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 13);
			this->label2->TabIndex = 3;
			this->label2->Tag = L"1";
			this->label2->Text = L"Варіанти відповіді";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(392, 303);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Tag = L"1";
			this->button3->Text = L"Зберегти";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm5::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(311, 303);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Tag = L"1";
			this->button4->Text = L"<";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm5::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(473, 303);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Tag = L"1";
			this->button5->Text = L">";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm5::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(267, 273);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(327, 20);
			this->textBox7->TabIndex = 2;
			this->textBox7->Tag = L"1";
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm5::textBox7_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(357, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 13);
			this->label3->TabIndex = 3;
			this->label3->Tag = L"1";
			this->label3->Text = L"Номер правильної відповіді";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 122);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Зберегти";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm5::button6_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(12, 96);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(97, 20);
			this->textBox8->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Редагування часу";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 174);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 23);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Видалити";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm5::button7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 151);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Видалення тестів";
			// 
			// MyForm5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(836, 361);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm5";
			this->Text = L" Внесення і редагування тестів";
			this->Load += gcnew System::EventHandler(this, &MyForm5::MyForm5_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		Question_list* global_pointer; //глобальний покажчик
		bool edit_mode = false; //режим редагування
#pragma endregion

		

		void push_end(Question_list* &head, Question_list* &tail, char* question_text, char* v1, char* v2, char* v3, char* v4, char* v5, int answer)
		{
			Question_list *NewNode = (Question_list*)malloc(sizeof(Question_list));

			strcpy(NewNode->question.question_text, question_text);
			strcpy(NewNode->question.v1, v1);
			strcpy(NewNode->question.v2, v2);
			strcpy(NewNode->question.v3, v3);
			strcpy(NewNode->question.v4, v4);
			strcpy(NewNode->question.v5, v5);
			NewNode->question.answer = answer;

			if (head == NULL)
			{
				NewNode->next = NULL;
				NewNode->prev = NULL;

				tail = NewNode;
				head = NewNode;
				return;
			}
			else
			{
				NewNode->next = NULL;
				tail->next = NewNode;
				NewNode->prev = tail;
				tail = NewNode;
			}
		}

		void Delete(Question_list* &head, Question_list* &tail) //видалення списку
		{
			Question_list* temp = head;
			while (head) // поки не кінець списку, видаляємо всі елементи
			{
				head = head->next;
				free(temp);
				temp = head;
			}
			head = NULL;
			tail = NULL;
		}

		char* System_to_char(String ^s)
		{
			using namespace Runtime::InteropServices;
			const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			return (char*)ptr;
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		button3->Enabled = false; //кнопку Save зробим не активною
		edit_mode = false;  // значення false означає що ми знаходимося в режимі Внесення питання
		changeVisibility(true); // робимо видимими всі елементи форми, крім кнопок прокрутки, які зробимо знову невидимими наступними 2 стрічками коду
		button4->Visible = false;
		button5->Visible = false;

		textBox1->Clear();//очищаємо всі поля
		textBox2->Clear();
		textBox3->Clear();
		textBox4->Clear();
		textBox5->Clear();
		textBox6->Clear();
		textBox7->Clear();
	}



			 private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

				 Question_list* head = NULL; //покажчик на голову списку
				 Question_list* tail = NULL; //покажчик на хвіст списку

				 button3->Enabled = false; //кнопку Save зробимо не активною
				 button4->Enabled = false; //кнопку < зробимо не активною
				 button5->Enabled = true;//кнопку > зробимо активною
				 edit_mode = true; // значення true означає що ми знаходимося в режимі реданування
				 if (head != NULL) Delete(head, tail);//видалення списку потрібне для того щоб при повторному натискані на кнопку редагування спинок не дублювався
				 Question_list* temp = head;
				 if (head != NULL)
				 {
					 Question_list* temp = head;
					 while (head)
					 {
						 head = head->next;
						 free(temp);
						 temp = head;
					 }
					 head = NULL;
					 tail = NULL;
				 }


				 Question Question1;
				 FILE *f2;
				 if ((f2 = fopen("Question_file.txt", "rb")) == NULL) // відкриємо файл для читання
				 {// в разі помилки відкриття файлу зробимо висновок що питання відсутні
					 MessageBox::Show("Питання відсутні", "Помилка");
					 return;
				 };
				 fread(&Question1, sizeof(Question1), 1, f2); // зчитаємо питання з файлу та запишемо їх у список
				 while (!feof(f2))
				 {
					 push_end(head, tail, Question1.question_text, Question1.v1, Question1.v2,
						 Question1.v3, Question1.v4, Question1.v5, Question1.answer);
					 fread(&Question1, sizeof(Question1), 1, f2);
				 }
				 fclose(f2);
				 global_pointer = head; // встановимо глобальний покажчик на голову списку
				 print(global_pointer); // виведемо перше питання
				 changeVisibility(true); // зробимо видимими всі елементи форми
			 }

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		
		Question_list* head = NULL; //покажчик на голову списку
		Question_list* tail = NULL; //покажчик на хвіст списку
		
		if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != "") &&
			(textBox4->Text != "") && (textBox5->Text != "") && (textBox6->Text != "") && (textBox7 -> Text != ""))
		{ //якщо заповнені всі поля зробимо наступні дії
			Question Question1;
			FILE *f;
			strcpy(Question1.question_text, System_to_char(textBox1->Text)); //скопіюємо всі тесвові поля в об'єкт Question1
			strcpy(Question1.v1, System_to_char(textBox2->Text));
			strcpy(Question1.v2, System_to_char(textBox3->Text));
			strcpy(Question1.v3, System_to_char(textBox4->Text));
			strcpy(Question1.v4, System_to_char(textBox5->Text));
			strcpy(Question1.v5, System_to_char(textBox6->Text));
			Question1.answer = Convert::ToInt64(textBox7->Text);
			if (edit_mode == true) // якщо ми знаходимося в режимі редагування
			{ //отже ми внесли зміни в питання в режимі редагування і натиснули кнопку Save
					// далі необхідно записати ці зміни в список питань
			strcpy(global_pointer->question.question_text,Question1.question_text);
			strcpy(global_pointer->question.v1, Question1.v1);
			strcpy(global_pointer->question.v2, Question1.v2);
			strcpy(global_pointer->question.v3, Question1.v3);
			strcpy(global_pointer->question.v4, Question1.v4);
			strcpy(global_pointer->question.v5, Question1.v5);
			global_pointer->question.answer = Question1.answer;
			Question_list* temp = head;
			f = fopen("Question_file.txt", "wb"); //тепер очистимо файл
			fclose(f);
			f = fopen("Question_file.txt", "ab"); //і заново перезапишемо змінений список питань у файл
					while (global_pointer)
					{
						fwrite(&(*global_pointer), sizeof(Question1), 1, f);
						global_pointer = global_pointer->next;
					}
				fclose(f);
			}
			else
			{ // якщо ми натиснули кнопку Save в режимі Внесення
				f = fopen("Question_file.txt", "ab"); // відкриємо і запишемо питання в файл додаючи його в кінець
					fwrite(&Question1, sizeof(Question1), 1, f);
				fclose(f);
				// очистимо всі поля
				textBox1->Clear();
				textBox2->Clear();
				textBox3->Clear();
				textBox4->Clear();
				textBox5->Clear();
				textBox6->Clear();
				textBox7->Clear();
			}
		}
		else MessageBox::Show("Заповніть всі поля", "Помилка");
		button3->Enabled = false; // зробимо кнопку Save неактивною
	}


	private: System::Void textBox7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		button3->Enabled = true; //зробимо кнопку Save активною, так як були внесені зміни 
		if (e->KeyChar < 49 | e->KeyChar > 53 | textBox7->Text->Length > 0)
		{// діапазон від 49 до 53 відповідає за коди символів 1,2,3,4,5.  textBox7->Text->Length - відповідає за довжину
			e->Handled = true;
		}

	}

	

	private: System::Void MyForm5_Load(System::Object^  sender, System::EventArgs^  e) {
		changeVisibility(false);
	}

			 void changeVisibility(bool state)
			 {
				 for each (Control^ c in this->Controls)
				 {
					 if (c->Tag == "1")
						 c->Visible = state;
				 }
			 }

			 void print(Question_list *p)
			 {
				 textBox1->Text = marshal_as<String^>(p->question.question_text);
				 textBox2->Text = marshal_as<String^>(p->question.v1);
				 textBox3->Text = marshal_as<String^>(p->question.v2);
				 textBox4->Text = marshal_as<String^>(p->question.v3);
				 textBox5->Text = marshal_as<String^>(p->question.v4);
				 textBox6->Text = marshal_as<String^>(p->question.v5);
				 textBox7->Text = p->question.answer.ToString();
			 }

	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		button3->Enabled = true;
	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		button4->Enabled = true;
		if (global_pointer->next != NULL)
		{
			global_pointer = global_pointer->next;
			print(global_pointer);
			if (global_pointer->next == NULL) button5->Enabled = false;
		}
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		button5->Enabled = true; // зробимо активною кнопку прокрутки вправо, на випадок якщо вона була не активна

		if (global_pointer->prev != NULL) // якщо попередній елемент існує
		{
			global_pointer = global_pointer->prev; // переходимо на попередній елемент
			print(global_pointer); // виводимо його
			if (global_pointer->prev == NULL) button4->Enabled = false; // якщо перед елеметом більше немає елементів робимо кнопку прокрутки неактивною
		}


	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		int a ;
		FILE* f;
		f = fopen("time.txt", "wb");
		if ((f = fopen("time.txt", "wb")) == NULL)
		{
			MessageBox::Show("Error");
			return;
		}
		a = Convert::ToInt64(textBox8->Text);
		fwrite(&a, sizeof(a), 1, f);
		fclose(f);
		textBox8->Clear();
	}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (-1 == remove("Question_file.txt"))
		MessageBox::Show("Ошибка");
	else
		MessageBox::Show("Выполнено");


}
};
}

