#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int data[] = { 10,20,30,40,50,60 };
	int size;
	int key, i;

	size = sizeof(data) / sizeof(data[0]);
	printf("data = ");
	for (i = 0; i < size; i++)
		printf("%d", data[i]);
	printf("\n");

	printf("ã�� ��(Ű)? ");
	scanf("%d", &key);
	for (i = 0; i < size; i++) 
		if (data[i] == key)
			printf("ã�� ������ ���ؽ�: %d\n", i);
	
	return 0;
}