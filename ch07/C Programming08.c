#include <stdio.h>

int main()
{
	int x[6] = { 10, 20, 30, 40, 50, 60 };
	int y[6] = { 10, 20, 30, 40, 50, 60 };
	int i;
	int is_equal;

	if (x == y)
		printf("두 배열의 주소가 같습니다.\n");

	is_equal = 1;
	for (i = 0; i < 6; i++) {
		if (x[i] != y[i]) {
			is_equal = 0;
			break;
		}
	}
	if (is_equal == 1)
		printf("두 배열의 내용이 같아부려요");

	return 0;

}