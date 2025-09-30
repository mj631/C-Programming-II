#include <stdio.h>

int main(void)
{
	int amount[5] = { 1,2,3,4,5 };
	int price[5] = { 0 };
	int i;

	printf("amount = ");
	for (i = 0; i < 5; i++)
		printf("%d", amount[i]);
	printf("\n");

	printf("price = ");
	for (i = 0; i < 5; i++)
		printf("%d", price[i]);
	printf("\n");
	return 0;


}