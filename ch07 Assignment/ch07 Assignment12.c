/* 파일명: assignment-12.c
 * 내용: PA012. 기차표 예매 프로그램을 ㅏㄱ성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개 라고 하고, 예매할 좌석수를 입력받아 빈 자리를 할당한다. 예매할 때마다 각 좌석의 상태를 출력한다.
* 작성자: 김민지
* 날짜: 2025.9.15
 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int seat[10] = { 0 };
    int n, i, j;
    int reserved = 0;

    while (1) {

        printf("현재 좌석: [ ");
        for (i = 0; i < 10; i++) {
            if (seat[i] == 0)
                printf("0");
            else
                printf("X");
        }
        printf(" ]\n");


        printf("예약할 좌석수? ");
        scanf("%d", &n);


        if (reserved + n > 10) {
            printf("더 이상 예매할 수 없습니다.\n");
            break;
        }


        int count = 0;
        printf("%d", reserved + 1);
        for (i = 0; i < 10 && count < n; i++) {
            if (seat[i] == 0) {
                seat[i] = 1;
                reserved++;
                count++;
                if (count > 1) printf(" %d", reserved);
            }
        }
        printf(" 번 좌석을 예매했습니다.\n");


        if (reserved == 10) {
            printf("모든 좌석이 예약되었습니다.\n");
            break;
        }
    }

    return 0;
}