#include <stdio.h>
#include <string.h>

typedef struct contact
{
	char name[20];
	char phone[20];
	int ringtone;
}CONTACT;

int main()
{
	CONTACT arr[] = {
		{"����ġ", "01096116864",0 },
		{"����ġ", "01095116864",1},
		{"����ġ", "01098987676",2}
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("�̸�  ��ȭ��ȣ  ��\n");
	for (i = 0; i < size; i++)
	{
		printf("%6s %11s %d\n", arr[i].name, arr[i].phone, arr[i].ringtone);
	}
	return 0;
}