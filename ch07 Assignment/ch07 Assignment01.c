/* 파일명: assignment-01.c
  내용: PA01. 첫 번째 항의 값과 공차를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.
 작성자: 김민지
 날짜: 2025.9.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int a[10];

	int t, n;

	printf("첫 번째 항? ");
	scanf("%d", &t);

	printf("공차? ");
	scanf("%d", &n);

	a[0] = t;

	printf("등차수열 : %d ", a[0]);

	int i;

	for (i = 1; i < 10; i++) {
		a[i] = a[i - 1] + n;
		printf("%d ", a[i]);
	}
	printf("\n");


	return 0;
}