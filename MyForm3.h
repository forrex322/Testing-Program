#pragma once
#include <stdio.h>
namespace Pr4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(529, 370);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(529, 370);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm3";
			this->Text = L"�������� ����������";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->ReadOnly = true; // ���������� �����������
		FILE * f;
		// ��� ���� ��� ����������� ���� ����� � richTextBox �� ����'������ ���� ���������, ��� ����� �����
		//�� ������� ��������� �� �� ����, ���� ���� ���� �� �� ���� ��������
		// ������� ������� � �������� ���������
		if ((f = fopen("rez_file.txt", "r")) == NULL) // ������� ���� ��� �������
		{// � ��� ������� �������� ����� ������� �������� �� ������� ������
			MessageBox::Show("���������� ������, ���� ���� �� ����������", "�������");
			this->Close();
		}
		else
		{
			fclose(f);
			richTextBox1->LoadFile("rez_file.txt", RichTextBoxStreamType::PlainText);//����������� ���������� � ����� data.txt � richTextBox1
		}
	}
	};
}
