#include <stdio.h>

struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
};
int main(void)
{
	printf("contact ����ü�� ũ�� = %d\n", sizeof(struct contact));

	return 0;
}
void test()
{
	struct contact c1;
}