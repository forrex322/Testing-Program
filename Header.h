#pragma once

struct question
{
	char question_text[25]; //тест питання
	char v1[25]; // варіанти відповіді
	char v2[25];
	char v3[25];
	char v4[25];
	char v5[25];
	int answer; // номер правильної відповіді
};
typedef struct question Question; //визначається нове ім'я існуючому типу

struct question_list
{
	Question question;
	question_list* next;
	question_list* prev;
};
typedef struct question_list Question_list; //визначається нове ім'я існуючому типу


/*Question_list* head = NULL; //покажчик на голову списку
Question_list* tail = NULL; //покажчик на хвіст списку
Question_list* global_pointer; //глобальний покажчик
*/
