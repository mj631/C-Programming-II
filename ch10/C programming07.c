#include <stdio.h>
#include <string.h>

#define STR_SIZE 20

typedef struct contact
{
	char name[STR_SIZE];
	char phone[STR_SIZE];
	int fingtone;

}CONTACT;

int main()
{
	CONTACT ct = { "����ġ", "01095116864", 0 };
	CONTACT* p = &ct;

	p->fingtone = 5;
	strcpy(p->phone, "01095116864");
	printf("�̸�: %s\n", p->name);
	printf("��ȭ��ȣ: %s\n", p->phone);
	printf("���Ҹ�: %d\n", p->fingtone);

	return 0;
}