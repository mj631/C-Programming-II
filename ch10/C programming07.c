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
	CONTACT ct = { "생갈치", "01095116864", 0 };
	CONTACT* p = &ct;

	p->fingtone = 5;
	strcpy(p->phone, "01095116864");
	printf("이름: %s\n", p->name);
	printf("전화번호: %s\n", p->phone);
	printf("벨소리: %d\n", p->fingtone);

	return 0;
}