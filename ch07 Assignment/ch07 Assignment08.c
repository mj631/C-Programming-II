/* 파일명: assignment-08.c
 * 내용: PA08. 상품 가격이 저장된 정수형 배열에 대하여 할인율(%)을 입력받아 할인된 가격을 계산해서 출력하는 프로그램을 작성하시오.
* 작성자: 김민지
* 날짜: 2025.9.15
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int price[5];
    int salePrice[5];
    int i, rate;

    printf("상품가 5개를 입력하세요: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &price[i]);
    }

    printf("할인율(%%)? ");
    scanf("%d", &rate);

    // 할인 가격 계산
    for (i = 0; i < 5; i++) {
        salePrice[i] = price[i] * (100 - rate) / 100;
    }

    // 결과 출력
    for (i = 0; i < 5; i++) {
        printf("가격: %d --> 할인가: %d\n", price[i], salePrice[i]);
    }

    return 0;
}