/* 파일명: assignment-06.c
 내용: PA06. 크기가10인 실수형 배열에 대해서 원도들을 역순으로 만드는 프로그램을 작성하시오.
작성자: 김민지
날짜: 2025.9.15 
 */

#include <stdio.h>

int main(void) {
    double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    double tmp[10];
    int i;

    printf("원래 :");
    for (i = 0; i < 10; i++) printf("%.1f ", arr[i]);
    printf("\n");


    for (i = 0; i < 10; i++) {
        tmp[i] = arr[9 - i];
    }

    for (i = 0; i < 10; i++) {
        arr[i] = tmp[i];
    }

    printf("역순 :");
    for (i = 0; i < 10; i++) printf("%.1f ", arr[i]);
    printf("\n");

    return 0;
}