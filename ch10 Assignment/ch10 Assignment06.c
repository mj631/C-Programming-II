/* 파일명: assignment-06.c
 * 내용: PA0106.DATE 구조체 2개를 매개변수로 전달받아 날짜가 같은지 비교하는 is_same_date 함수를 정의하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#include <stdio.h>

#define SIZE 5

typedef struct {
    int year;
    int month;
    int day;
} DATE;

int is_same_date(DATE d1, DATE d2) {
    return (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day);
}

int main() {
    DATE holidays[SIZE] = {
        {2019, 1, 1},
        {2019, 3, 1},
        {2019, 5, 5},
        {2022, 1, 1},
        {2022, 12, 25}
    };

    DATE input;
    int i, found;

    while (1) {
        printf("날짜(연 월 일)? ");
        scanf("%d %d %d", &input.year, &input.month, &input.day);

        if (input.year == 0 && input.month == 0 && input.day == 0)
            break;

        found = 0;
        for (i = 0; i < SIZE; i++) {
            if (is_same_date(input, holidays[i])) {
                printf("%d/%d/%d는 공휴일입니다.\n", input.year, input.month, input.day);
                found = 1;
                break;
            }
        }

        if (!found)
            printf("%d/%d/%d는 공휴일이 아닙니다.\n", input.year, input.month, input.day);
    }

    return 0;
}