#pragma once
#include <stdio.h>
#include <cstdlib>
#include <msclr\marshal.h>
#include <time.h>
#include "Header.h"
#include "MyForm5.h"



namespace Pr4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Runtime::InteropServices;
	using namespace msclr::interop;

	public ref class MyForm2 : public System::Windows::Forms::Form
	{
		
			static int Second = 0;
			static int Minute = 0;
			String^ Sec;
			String^ Min;


	public:
		char* name; //������ �������� ���� char ��� ������ �������
		MyForm2(char* name_)
		{
			InitializeComponent();
			name = name_; //�������� � �������� ������ ������ ������� ���� �� ���������� � ����� �� ��� �� ��������� � ������� ����.
		}

	protected:
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  Time;
	private: System::ComponentModel::IContainer^  components;

	public:

	protected:


	protected:

	private:


#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Time = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(463, 318);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 15;
			this->button5->Text = L">";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(301, 318);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 16;
			this->button4->Text = L"<";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm2::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(382, 318);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 17;
			this->button3->Text = L"³�������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(370, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"������� ������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(389, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"�������";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(257, 121);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(327, 20);
			this->textBox1->TabIndex = 11;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(257, 176);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 17);
			this->radioButton1->TabIndex = 18;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(257, 202);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 17);
			this->radioButton2->TabIndex = 19;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton1_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(257, 228);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 17);
			this->radioButton3->TabIndex = 20;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton1_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(257, 254);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(85, 17);
			this->radioButton4->TabIndex = 21;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton1_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(257, 280);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(85, 17);
			this->radioButton5->TabIndex = 22;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm2::radioButton1_CheckedChanged);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm2::timer1_Tick);
			// 
			// Time
			// 
			this->Time->AutoSize = true;
			this->Time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Time->Location = System::Drawing::Point(13, 13);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(31, 20);
			this->Time->TabIndex = 23;
			this->Time->Text = L"0:0";
			this->Time->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(841, 430);
			this->Controls->Add(this->Time);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm2";
			this->Text = L"����������";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		Question_list* global_pointer; //���������� ��������
#pragma endregion


		void push_end(Question_list* &head, Question_list* &tail, char* question_text, char* v1, char* v2, char* v3, char* v4, char* v5, int answer)
		{ // ������� ��������� ������� � ������ ������
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


		void get_rand(bool* mas)
			// ������� ��� �������� ������� ����� ���, 
			// ��� 20 ���������� �������� ���� �������� true
			// � 30 �������� ���� �������� false
		{
			srand(time(NULL));
			bool a = true;
			for (int i = 0; i < 10; i++) mas[i] = false; //�� �������� ��������� false

			while (a) // ���� a = true �������� ��������� ���
			{
				mas[rand() % 10] = true; //���������� ������� = true

				for (int i = 0, k = 0; i < 10; i++) // ���������� �������� true ��������
				{
					if (mas[i] == true) k++;
					if (k == 5) // ���� �� 20 �� �������� � ����� for i while 
					{
						a = false; //��� ������ � while
						break;// ��� ������ � for
					}
				}
			}
		}

		void print(Question_list *p)
		{ // ������� �������� �������� ���� � �������� radioButton ������� ������� � ��������� ������
			textBox1->Text = marshal_as<String^>(p->question.question_text);
			radioButton1->Text = marshal_as<String^>(p->question.v1);
			radioButton2->Text = marshal_as<String^>(p->question.v2);
			radioButton3->Text = marshal_as<String^>(p->question.v3);
			radioButton4->Text = marshal_as<String^>(p->question.v4);
			radioButton5->Text = marshal_as<String^>(p->question.v5);
		}

		int who_Checked()
		{ //������� ������� ����� ��������� radioButton � ����� ������ ���� ���� "�� ��������"
			if (radioButton1->Checked == true)
			{
				radioButton1->Checked = false;
				return 1;
			}
			if (radioButton2->Checked == true)
			{
				radioButton2->Checked = false;
				return 2;
			}
			if (radioButton3->Checked == true)
			{
				radioButton3->Checked = false;
				return 3;
			}
			if (radioButton4->Checked == true)
			{
				radioButton4->Checked = false;
				return 4;
			}
			if (radioButton5->Checked == true)
			{
				radioButton5->Checked = false;
				return 5;
			}
		}

	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {

		timer1->Enabled = true;

		Question_list* head = NULL; //�������� �� ������ ������/
		Question_list* tail = NULL; //�������� �� ���� ������

		bool mas[10];
		get_rand(mas);

		button4->Enabled = false; //������ < ������� �� ��������
		button3->Enabled = false; //������ �������� ������� �� ��������

		Question Question1;
		FILE *f1;

		if ((f1 = fopen("Question_file.txt", "rb")) == NULL) // ������� ���� ��� �������
		{// � ��� ������� �������� ����� ������� �������� �� ������� ������
			MessageBox::Show("������� ������", "�������");
			return;
		};

		fread(&Question1, sizeof(Question1), 1, f1); // ������� ������� � ����� �� �������� �� � ������

		int i = 0;
		while (!feof(f1))
		{   // ������� 20 ���������� ������, ������ ������ �� ��������� ������� ����� �������� true � ����� mas
			if (mas[i] == true)	push_end(head, tail, Question1.question_text, Question1.v1, Question1.v2, Question1.v3, Question1.v4, Question1.v5, Question1.answer);
			i++;
			fread(&Question1, sizeof(Question1), 1, f1);
		}

		fclose(f1);

		global_pointer = head; // ���������� ���������� �������� �� ������ ������ 
		print(global_pointer); // �������� ����� �������
	}



	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		button5->Enabled = true; // ������� �������� ������ ��������� ������, �� ������� ���� ���� ���� �� �������

		if (global_pointer->prev != NULL) // ���� ��������� ������� ����
		{
			global_pointer = global_pointer->prev; // ���������� �� ��������� �������
			print(global_pointer); // �������� ����
			if (global_pointer->prev == NULL) button4->Enabled = false; // ���� ����� �������� ����� ���� �������� ������ ������ ��������� ����������
		}
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
		
		float mark = 0;
		int true_ans = 0;
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//static float mark = 0; // ����(������)
		static int questions_counter = 0; // �������� ��������
		//static int true_ans = 0;

		questions_counter++; // �������� �������� ������ �� �� ���� �������
		if (who_Checked() == global_pointer->question.answer) {
			mark += 0.25;
			true_ans += 1;
		}
		//���� ����� ��������� radioButton �������� � ������� ��������� ������ �������� �������� ����

		// ��������� ���� ���� ������ ������� �� �������� ������� � �������
		// ������� �� ��� ��� ���� �������

		// ������� �����
		Question_list* temp = global_pointer; //�������� ������ �������� �������

		if (global_pointer->next != NULL) // ���� ����� ������� �� �������� �� ���������� 
		{
			if (global_pointer->prev != NULL) button4->Enabled = true;
			global_pointer = global_pointer->next;
			print(global_pointer);
			if (global_pointer->next == NULL) button5->Enabled = false;
		}
		else // ���� �� ���� ����� ������� � ������, ��� �� �� ���� ������� �� ��������
			// �� ���������� �� �������� �������
			if (global_pointer->prev != NULL)
			{
				button5->Enabled = false;
				global_pointer = global_pointer->prev;
				print(global_pointer);
				if (global_pointer->prev == NULL) button4->Enabled = false;
			}
		// ������� ��'���� �� ���������� � ����� ����������� ��������
		if (temp->next != NULL) temp->next->prev = temp->prev;
		if (temp->prev != NULL) temp->prev->next = temp->next;
		free(temp); // ��������� �������
		//����� �����

		if (questions_counter == 5) // ���� ���� ������� �� �� �������
		{
			FILE *f2;
			f2 = fopen("rez_file.txt", "a");
			fprintf(f2, "%s - %.2f - %d ���������� � 20\n", name, mark,true_ans); //�������� ����������
			fclose(f2);
			this->Close(); //��������� �����
		}
		button3->Enabled = false;
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		button3->Enabled = true;
	}
			
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		int a;
		FILE* time1;
		time1 = fopen("time.txt", "rb");
		if ((time1 = fopen("time.txt", "rb")) == NULL) // ������� ���� ��� �������
		{// � ��� ������� �������� ����� ������� �������� �� ������� ������
			MessageBox::Show("������� ������", "�������");
			return;
		};
		fread(&a, sizeof(a), 1, time1);
		fclose(time1);


		Second++;
		if (Second == 60)
		{
			Minute++;
			Second = 0;
		}
		
		Sec = Convert::ToString(Second);
		Min = Convert::ToString(Minute);
		Time->Text = Min + ":" + Sec;

		if (Second == a)
		{
			timer1->Enabled = false;
			FILE* f2;
			f2 = fopen("rez_file.txt", "a");
			fprintf(f2, "%s - %.2f\nʳ������ ���������� ��������: %i\n", name, mark, true_ans); //�������� ����������
			fclose(f2);
			auto MeBox = MessageBox::Show("��� ������. \n���� ���������. \nʳ������ ���������� ��������: " + true_ans.ToString() + "\n���� ������: " + mark.ToString() + "\n", "����������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			if (MeBox == Windows::Forms::DialogResult::OK)
			{
				this->Close(); //��������� �����
			}
			
		}
	}
	
};
}
