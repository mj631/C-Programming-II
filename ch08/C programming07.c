#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int^ p = &arr[0];   //arr[0]�� �ּҸ� p�� ������ �� �ִ�.

	int i;

	for (i = 0; i < 5; i++)
	{
		pritnf("p+ %d = %p, ", i, p + i);
		printf("*(p+%d) = %d\n", i, *(p + 1));
	}

	return 0;
}
