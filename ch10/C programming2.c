#include <stdio.h>
#include <string.h>

struct contact
{
	char name[20];
	char phone[20];
	int ringtone;

};

int main(void)
{
	struct contact ct = { "����ġ", "01095119511", 0 };
	struct contact ct1 = { 0 }, ct2 = { 0 };

	ct.ringtone = 5;
	strcpy(ct.phone, "01012345678");
	printf("�� ��: %s\n", ct.name);
	printf("��ȭ��ȣ: %s\n", ct.phone);

	printf("�� �� ��: %d\n", ct.ringtone);

	strcpy(ct1.name, "����ġ");
	strcpy(ct1.phone, "01068646864");
	ct1.ringtone = 1;
	printf("�� ��: %s\n", ct.name);
	printf("��ȭ��ȣ: %s\n", ct1.phone);
	printf("���Ҹ�: %d\n", ct1.ringtone);

	printf("�̸�: ");
	scanf("%s", ct2.name);
	printf("��ȭ��ȣ:");
	scanf("%s", ct2.phone);
	printf("���Ҹ�(0~9)? ");
	scanf("%d", &ct2.ringtone);
	printf("�̸�: %s\n", ct2.name);
	printf("��ȭ��ȣ: %s\n", ct2.phone);
	printf("���Ҹ�: %d\n", ct2.ringtone);

	return 0;
}