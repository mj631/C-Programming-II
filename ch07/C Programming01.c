#include <stdio.h>

int main()
{
	int arr[5];
	int byte_size = 0;
	int size = 0;
	int i;

	byte_size = sizeof(arr);
	printf("�迭�� ����Ʈ ũ��: %d\n", byte_size);
	
	size = sizeof(arr) / sizeof(arr[0]);
	printf("�迭�� ũ��: %d\m", size);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	return 0;

}