#include <stdio.h>

int main()
{
	int x[6] = { 10, 20, 30, 40, 50, 60 };
	int y[6] = { 10, 20, 30, 40, 50, 60 };
	int i;
	int is_equal;

	if (x == y)
		printf("�� �迭�� �ּҰ� �����ϴ�.\n");

	is_equal = 1;
	for (i = 0; i < 6; i++) {
		if (x[i] != y[i]) {
			is_equal = 0;
			break;
		}
	}
	if (is_equal == 1)
		printf("�� �迭�� ������ ���ƺη���");

	return 0;

}