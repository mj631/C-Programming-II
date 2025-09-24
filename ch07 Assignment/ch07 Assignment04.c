/* 파일명: assignment-04.c
  내용: PA04.배열의 원소 중 최댓값을 가진 원소와 최솟값을 가진 원소를 찾아서 인덱스와 값을 함께 출력하는 프로그램을 작성하시오.
 작성자: 김민지
 날짜: 2025.9.15
 */
#define _CRT_SECURE_NO_WARNINGS	
#include<stdio.h>

int main(void)
{
	int arr[] = { 55, 22, 77, 11, 15, 89, 32, 75, 12, 52 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int max = arr[0], min = arr[0];
	int maxindex = 0, minindex = 0;

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxindex = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			minindex = i;
		}
	}

	printf("배열: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);

	}
	printf("\n");

	printf("최댓값: 인덱스=%d , 값=%d\n", maxindex, max);
	printf("최솟값: 인덱스=%d , 값=%d\n", minindex, min);

	return 0;
}