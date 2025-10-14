/* 파일명: assignment-11.c
 * 내용: PA011. 직사각형의 넓이와 둘레를 구하는 get_rect_info 함수를 작성하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#include <stdio.h>


void get_rect_info(int width, int height, int* area, int* perimeter);

int main(void)
{
    int width, height;
    int area, perimeter;

    printf("가로: ");
    scanf_s("%d", &width);
    printf("세로: ");
    scanf_s("%d", &height);


    get_rect_info(width, height, &area, &perimeter);

    printf("넓이: %d, 둘레: %d\n", area, perimeter);

    return 0;
}


void get_rect_info(int width, int height, int* area, int* perimeter)
{
    *area = width * height;
    *perimeter = 2 * (width + height);
}
