#pragma once

struct question
{
	char question_text[25]; //���� �������
	char v1[25]; // ������� ������
	char v2[25];
	char v3[25];
	char v4[25];
	char v5[25];
	int answer; // ����� ��������� ������
};
typedef struct question Question; //����������� ���� ��'� ��������� ����

struct question_list
{
	Question question;
	question_list* next;
	question_list* prev;
};
typedef struct question_list Question_list; //����������� ���� ��'� ��������� ����


/*Question_list* head = NULL; //�������� �� ������ ������
Question_list* tail = NULL; //�������� �� ���� ������
Question_list* global_pointer; //���������� ��������
*/
