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
		{"생갈치", "01096116864",0 },
		{"개갈치", "01095116864",1},
		{"개날치", "01098987676",2}
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("이름  전화번호  벨\n");
	for (i = 0; i < size; i++)
	{
		printf("%6s %11s %d\n", arr[i].name, arr[i].phone, arr[i].ringtone);
	}
	return 0;
}