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