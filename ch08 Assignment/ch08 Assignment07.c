
/* 파일명: assignment-07.c
 * 내용: PA007. 실수형 배열에 대해서 원소들을 역순으로 만드는 reverse_array함수를 작성하시오
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#include <stdio.h>

void reverse_array(double* arr, int size);

int main(void)
{
    double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    int i;

    printf("배열: ");
    for (i = 0; i < 10; i++) {
        printf("%.1lf ", arr[i]);
    }

    reverse_array(arr, 10);

    printf("\n역순: ");
    for (i = 0; i < 10; i++) {
        printf("%.1lf ", arr[i]);
    }

    printf("\n");
    return 0;
}

void reverse_array(double* arr, int size)
{
    int i;
    double temp;

    for (i = 0; i < size / 2; i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + (size - 1 - i));
        *(arr + (size - 1 - i)) = temp;
    }
}
