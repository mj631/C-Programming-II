/* 파일명: assignment-08.c
 * 내용: PA008. 정수형 배열을 특정 값으로 채우는 fill_array 함수를 작성하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_array(int* arr, int size, int value);

int main(void)
{
    int arr[20];
    int value;
    int i;

    printf("배열의 원소에 저장할 값? ");
    scanf_s("%d", &value);

    fill_array(arr, 20, value);

    for (i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void fill_array(int* arr, int size, int value)
{
    int* p;
    for (p = arr; p < arr + size; p++) {
        *p = value;
    }
}
