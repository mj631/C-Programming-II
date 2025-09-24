/* 파일명: assignment-09.c
 * 내용: PA09. 1~12월의 핸드폰 요금을 배열에 저장하고 화면에 막대 그래프로 출력하는 프로그램을 작성하시오.
 * 작성자: 김민지
* 날짜: 2025.9.15
 */
#include <stdio.h>

void printGraph(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%2d월 %5d: ", i + 1, arr[i]);
        int starCount = arr[i] / 2000;
        for (int j = 0; j < starCount; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int phone[12] = { 36000, 42000, 38000, 40000, 45000, 39000,
                     47000, 52000, 41000, 43000, 48000, 65000 };

    printGraph(phone, 12);

    return 0;
}