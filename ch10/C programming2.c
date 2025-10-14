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
	struct contact ct = { "생갈치", "01095119511", 0 };
	struct contact ct1 = { 0 }, ct2 = { 0 };

	ct.ringtone = 5;
	strcpy(ct.phone, "01012345678");
	printf("이 름: %s\n", ct.name);
	printf("전화번호: %s\n", ct.phone);

	printf("벨 소 리: %d\n", ct.ringtone);

	strcpy(ct1.name, "개갈치");
	strcpy(ct1.phone, "01068646864");
	ct1.ringtone = 1;
	printf("이 름: %s\n", ct.name);
	printf("전화번호: %s\n", ct1.phone);
	printf("벨소리: %d\n", ct1.ringtone);

	printf("이름: ");
	scanf("%s", ct2.name);
	printf("전화번호:");
	scanf("%s", ct2.phone);
	printf("벨소리(0~9)? ");
	scanf("%d", &ct2.ringtone);
	printf("이름: %s\n", ct2.name);
	printf("전화번호: %s\n", ct2.phone);
	printf("벨소리: %d\n", ct2.ringtone);

	return 0;
}