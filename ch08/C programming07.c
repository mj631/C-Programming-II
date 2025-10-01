#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int^ p = &arr[0];   //arr[0]의 주소를 p에 저장할 수 있다.

	int i;

	for (i = 0; i < 5; i++)
	{
		pritnf("p+ %d = %p, ", i, p + i);
		printf("*(p+%d) = %d\n", i, *(p + 1));
	}

	return 0;
}
