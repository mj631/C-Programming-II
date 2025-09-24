/* 파일명: assignment-10.c
 * 내용: PA10. 3 x 3 행렬의 합을 구하는 프로그램을 작성하시오. 행렬로 사용될 2차원 배열은 마음대로 초기화해도 된다.
* 작성자: 김민지
* 날짜: 2025.9.15
 * 버전: v1.0
 */
#include <stdio.h>

int main() {
    int x[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int y[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[3][3];


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = x[i][j] + y[i][j];
        }
    }


    printf("x 행렬:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }

    printf("\ny 행렬:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", y[i][j]);
        }
        printf("\n");
    }

    printf("\nx + y 행렬:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}