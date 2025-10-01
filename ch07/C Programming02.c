//예제 7-2 : 매크로 상수로 배열의 키기를 지정하는 경우 

#include <stdio.h>

#define ARR_SIZE 5

int main(void)
{
	int arr[ARR_SIZE];
	int i;

	for (i = 0; i < ARR_SIZE; i++)
		arr[i] = 0;

	printf("arr = ");
	for (i = 0; i < ARR_SIZE; i++)
		printf("%d", arr[i]);
	printf("\n");

	return 0;

}