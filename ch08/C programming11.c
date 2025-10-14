#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	int* arr[5] = { &a, &b, &c, &d, &e };
	int i;

	for (i = 0; i < 5; i++) {
		*arr[i] = i;
		printf("%d", *arr[i]);

	}
	printf("\n");
	return 0;
}