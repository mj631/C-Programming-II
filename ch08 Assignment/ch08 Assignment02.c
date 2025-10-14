/* 파일명: assignment-02.c
 * 내용: PA002. 배열 원소를 가리키는 포인터와 포인터 연산을 이용해서 실수현 배열의 모든 원소를 출력하는 프로그램을 작성하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#include <stdio.h>

int main(void)
{
    double arr[10] = { 0.1, 2.0, 3.4, 5.2, 4.5, 7.8, 9.7, 1.4, 6.6, 7.2 };
    double* p;
    int i;

    p = arr;

    for (i = 0; i < 10; i++) {
        printf("%.2lf ", *(p + i));
    }

    printf("\n");
    return 0;
}
