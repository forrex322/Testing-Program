#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"

//Реалізація реєстрації і входу
struct login_user
{
	char log[25];
	char pass[25];
};
typedef struct login_user Login_user; //визначається нове ім'я існуючому типу

struct login_list
{
	Login_user login_user;
	login_list* next;
	login_list* prev;
};
typedef struct login_list Login_list; //визначається нове ім'я існуючому типу

namespace Pr4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			MyForm1 ^ FS1 = gcnew  MyForm1();
			FS1->ShowDialog();
		}
	
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button7;














	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"label1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(313, 278);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Увійти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(313, 213);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(313, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Тестування";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(313, 147);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Результати";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(313, 252);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 10;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(617, 307);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Редагування тестів";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(313, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 23);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Навч.Інф.";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(617, 278);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(148, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Редагування Навч.Інф";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(310, 236);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Пароль";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(310, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Ім\'я";
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(313, 307);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 23);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Зареєструватися";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(777, 342);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Програма тестування";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		Login_list* gl_pointer = NULL;

#pragma endregion
	 char* System_to_char(String ^s)
	 {
		 using namespace Runtime::InteropServices;
		 const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		 return (char*)ptr;
	 }

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//зробимо невидимими кнопки Тестування і Результатів, а також label
		button2->Visible = false;
		button3->Visible = false;
		label1->Visible = false;
		button4->Visible = false;
		button5->Visible = false;
		button6->Visible = false;



	}

	 void push_end(Login_list* &head, Login_list* &tail, char* log, char* pass)
	 {
				 Login_list *NewNode = (Login_list*)malloc(sizeof(Login_list));

				 strcpy(NewNode->login_user.log, log);
				 strcpy(NewNode->login_user.pass, pass);


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

	 private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {


		Login_list* head = NULL;
		Login_list* tail = NULL;

		Login_user Login_user1;

		////Спочатку перевіримо чи існує такий користувач

		 int flag = 0;

		 FILE* f2;

		 if ((f2 = fopen("User.txt", "rb")) != NULL) // якщо файл існує
			// перевіряємо його на наявність вже зареєстрованих користувачів
		 {
				fread(&Login_user1, sizeof(Login_user1), 1, f2);
			 while (!feof(f2))
				{
				 push_end(head, tail, Login_user1.log, Login_user1.pass);
				 fread(&Login_user1, sizeof(Login_user1), 1, f2);
				}

			 fclose(f2);

			 /////////////////////////////////////////////////////////////////////////////////////////////////////// 
				// файл вже завантажений в структуру - починаємо перевірку


			 gl_pointer = head;

			 // Якщо тільки один користувач
				if (textBox1->Text == marshal_as<String^>(gl_pointer->login_user.log))
				 {
				 MessageBox::Show("Такий користувач вже зареєстрований", "Помилка");
						 flag = 1;
				 }


				 while (gl_pointer->next != NULL)
				 {

					if (textBox1->Text == marshal_as<String^>(gl_pointer->login_user.log) && (flag == 0))
				 {
					 MessageBox::Show("Такий користувач вже зареєстрований", "Помилка");
					 flag = 1;
				 }
					 gl_pointer = gl_pointer->next;
					}

				 }

				 if (textBox1->Text == marshal_as<String^>(gl_pointer->login_user.log) && (flag == 0))
				 {
					 MessageBox::Show("Такий користувач вже зареєстрований", "Помилка");
					 flag = 1;
				 }


				 ////////////////////////////////////////////////////////////////////////////////////////////////////////

				 if (flag == 0)

				 {
					 FILE* f;

					 strcpy(Login_user1.log, System_to_char(textBox1->Text)); // скопіюємо всі тесвові поля в об'єкт Question1
					 strcpy(Login_user1.pass, System_to_char(textBox2->Text));


					 f = fopen("User.txt", "ab"); // відкриємо і запишемо питання в файл додаючи його в кінець
					 fwrite(&Login_user1, sizeof(Login_user1), 1, f);
					 fclose(f);
					 MessageBox::Show("Користувач " + textBox1->Text + " доданий");

				 }
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		Login_list* head = NULL;
		Login_list* tail = NULL;

		Login_user Login_user1;

		int flag = 0;

		FILE* f2;

		if ((f2 = fopen("User.txt", "rb")) != NULL) // якщо файл існує
		   // перевіряємо його на наявність вже зареєстрованих користувачів
		{
			fread(&Login_user1, sizeof(Login_user1), 1, f2);
			while (!feof(f2))
			{
				push_end(head, tail, Login_user1.log, Login_user1.pass);
				fread(&Login_user1, sizeof(Login_user1), 1, f2);
			}

			fclose(f2);

			gl_pointer = head;

			if (textBox1->Text == marshal_as<String^>(gl_pointer->login_user.log) && textBox2->Text == marshal_as<String^>(gl_pointer->login_user.pass) && textBox2->Text != "admin")
			{
				label1->Text = "Ви увійшли під ім'ям " + textBox1->Text;
				label1->Visible = true; //зробимо видимими кнопки Тестування і Результатів, а також label
				textBox1->Visible = false; // і невидимими текстове поле і кнопку Увійти
				textBox2->Visible = false;
				button1->Visible = false;
				button2->Visible = true;
				button3->Visible = true;
				button5->Visible = true;
				button7->Visible = false;
				label2->Visible = false;
				label3->Visible = false;
				//MessageBox::Show("Такий користувач вже зареєстрований", "Помилка");
				flag = 1;
			}
			

			while (gl_pointer->next != NULL)
			{

				if (textBox1->Text == marshal_as<String^>(gl_pointer->login_user.log) && textBox2->Text == marshal_as<String^>(gl_pointer->login_user.pass) &&  textBox2->Text != "admin")
				{
					label1->Text = "Ви увійшли під ім'ям " + textBox1->Text;
					label1->Visible = true; //зробимо видимими кнопки Тестування і Результатів, а також label
					textBox1->Visible = false; // і невидимими текстове поле і кнопку Увійти
					textBox2->Visible = false;
					button1->Visible = false;
					button2->Visible = true;
					button3->Visible = true;
					button5->Visible = true;
					button7->Visible = false;
					label2->Visible = false;
					label3->Visible = false;
					//MessageBox::Show("Такий користувач вже зареєстрований", "Помилка");
					flag = 1;
				}
				gl_pointer = gl_pointer->next;
			}



			if (textBox1->Text == marshal_as<String^>(gl_pointer->login_user.log) && textBox2->Text == marshal_as<String^>(gl_pointer->login_user.pass) && textBox2->Text != "admin")
			{
				label1->Text = "Ви увійшли під ім'ям " + textBox1->Text;
				label1->Visible = true; //зробимо видимими кнопки Тестування і Результатів, а також label
				textBox1->Visible = false; // і невидимими текстове поле і кнопку Увійти
				textBox2->Visible = false;
				button1->Visible = false;
				button2->Visible = true;
				button3->Visible = true;
				button5->Visible = true;
				button7->Visible = false;
				label2->Visible = false;
				label3->Visible = false;
				//MessageBox::Show("Такий користувач вже зареєстрований", "Помилка");
				flag = 1;
			}
			


			if (textBox1->Text == marshal_as<String^>(gl_pointer->login_user.log) && textBox1->Text == "admin" && textBox2->Text == marshal_as<String^>(gl_pointer->login_user.pass) && textBox2->Text == "admin")
			{
				label1->Text = "Ви увійшли під ім'ям Адміністратором ";
				label1->Visible = true; //зробимо видимими кнопки Тестування і Результатів, а також label
				textBox1->Visible = false; // і невидимими текстове поле і кнопку Увійти
				textBox2->Visible = false;
				button1->Visible = false;
				button2->Visible = true;
				button3->Visible = true;
				button4->Visible = true;
				button5->Visible = true;
				button6->Visible = true;
				button7->Visible = false;
				label2->Visible = false;
				label3->Visible = false;
				//MessageBox::Show("Такий користувач вже зареєстрований", "Помилка");
				flag = 1;
			}

			while (gl_pointer->next != NULL)
			{

				if (textBox1->Text == marshal_as<String^>(gl_pointer->login_user.log) && textBox1->Text == "admin" && textBox2->Text == marshal_as<String^>(gl_pointer->login_user.pass) && textBox2->Text == "admin")
				{
					label1->Text = "Ви увійшли під ім'ям Адміністратором ";
					label1->Visible = true; //зробимо видимими кнопки Тестування і Результатів, а також label
					textBox1->Visible = false; // і невидимими текстове поле і кнопку Увійти
					textBox2->Visible = false;
					button1->Visible = false;
					button2->Visible = true;
					button3->Visible = true;
					button4->Visible = true;
					button5->Visible = true;
					button6->Visible = true;
					button7->Visible = false;
					label2->Visible = false;
					label3->Visible = false;
					//MessageBox::Show("Такий користувач вже зареєстрований", "Помилка");
					flag = 1;
				}
				gl_pointer = gl_pointer->next;
			}



			if (textBox1->Text == marshal_as<String^>(gl_pointer->login_user.log) && textBox1->Text == "admin" && textBox2->Text == marshal_as<String^>(gl_pointer->login_user.pass) && textBox2->Text == "admin")
			{
				label1->Text = "Ви увійшли під ім'ям Адміністратором ";
				label1->Visible = true; //зробимо видимими кнопки Тестування і Результатів, а також label
				textBox1->Visible = false; // і невидимими текстове поле і кнопку Увійти
				textBox2->Visible = false;
				button1->Visible = false;
				button2->Visible = true;
				button3->Visible = true;
				button4->Visible = true;
				button5->Visible = true;
				button6->Visible = true;
				button7->Visible = false;
				label2->Visible = false;
				label3->Visible = false;
				//MessageBox::Show("Такий користувач вже зареєстрований", "Помилка");
				flag = 1;
			}
			
		}

	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm2 ^ FS2 = gcnew  MyForm2(System_to_char(textBox1->Text));
	FS2->Show();
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm3 ^ FS3 = gcnew  MyForm3();
	FS3->Show();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm6 ^ FS6 = gcnew  MyForm6();
	FS6->Show();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm5 ^ FS5 = gcnew  MyForm5();
	FS5->Show();
	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm4 ^ FS4 = gcnew  MyForm4();
	FS4->Show();
}

		 


};
}
