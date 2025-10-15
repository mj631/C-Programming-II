/* ���ϸ�: assignment-04.c
 * ����: PA0104.�������� ��Ÿ���� DATE ����ü�� DATE ����ü�� �Ű������� ���޹޾� ��¥�� "2022/1/1"ó�� ����ϴ� print_date �Լ��� �����Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
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