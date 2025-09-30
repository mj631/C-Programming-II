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

	printf("찾을 값(키)? ");
	scanf("%d", &key);
	for (i = 0; i < size; i++) 
		if (data[i] == key)
			printf("찾은 원소의 인텍스: %d\n", i);
	
	return 0;
}