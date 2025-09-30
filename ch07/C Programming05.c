#include <stdio.h>
#define ARR_SIZE 5

int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int arr[ARR_SIZE] = { 0 };
	int i;

	arr[0] = 5;
	arr[1] = arr[0] + 10;
	arr[2] = add(arr[0], arr[1]);
	printf("정수를 2개 입력하세요: ");
	scanf("%d", arr[i]);
	
	for (i = 0; i < ARR_SIZE; i++)
		printf("%d", arr[i]);
	printf("\n");

	return 0;
}