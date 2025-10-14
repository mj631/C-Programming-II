/* 파일명: assignment-04.c
 * 내용: PA0104.연월일을 나타내는 DATE 구조체와 DATE 구조체를 매개변수로 전달받아 날짜를 "2022/1/1"처럼 출력하는 print_date 함수를 정의하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#include <stdio.h>
#include <time.h>

typedef struct {
    int year;
    int month;
    int day;
} DATE;

void set_as_today(DATE* d) {
    time_t t = time(NULL);           
    struct tm* now = localtime(&t);  

    d->year = now->tm_year + 1900;   
    d->month = now->tm_mon + 1;      
    d->day = now->tm_mday;
}

void print_date(DATE d) {
    printf("%d/%d/%d\n", d.year, d.month, d.day);
}

int main() {
    DATE today;

    set_as_today(&today);  
    print_date(today);    

    return 0;
}