#include <stdio.h>
#define SIZE 5

int main(void)
{
	int data[SIZE] = { 5, 8, 2, 4, 1 };
	int i, j;
	int index, temp;

	for (i = 0; i < SIZE; i++)
	{
		index = i;
		for (j = i + 1; j < SIZE; j++) {
			if (data[index] > data[j])
				index = 1;
		}
		if (i != index) {
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		}
	}
	printf("Á¤·Ä ÈÄ:");
	for (i = 0; i < SIZE; i++)
		printf(" %d", data[i]);
	printf("\n");
	return 0;
}