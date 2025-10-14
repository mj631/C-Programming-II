#include <stdio.h>

struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
};
int main(void)
{
	printf("contact 구조체의 크기 = %d\n", sizeof(struct contact));

	return 0;
}
void test()
{
	struct contact c1;
}