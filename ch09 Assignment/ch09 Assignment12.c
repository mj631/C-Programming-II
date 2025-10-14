/* 파일명: assignment-12.c
 * 내용: PA012. 입력받은 문자열에 대하여 이동할 글자 수를 입력받아 왼쪽이나 오른쪽으로 회전 한 결과를 출력하는 프로그램을 작성하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char* str, int start, int end);
void rotate(char* str, int n);

int main(void)
{
    char str[100];
    int n;

    printf("문자열? ");
    fgets(str, sizeof(str), stdin);


    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    while (1)
    {
        printf("이동할 글자수? ");
        scanf_s("%d", &n);

        if (n == 0)
            break;

        rotate(str, n);
        printf("%s\n", str);
    }

    return 0;
}

void reverse(char* str, int start, int end)
{
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void rotate(char* str, int n)
{
    int len = strlen(str);
    if (len == 0) return;

    n = n % len;

    if (n < 0)
        n = len + n;

    reverse(str, 0, len - n - 1);
    reverse(str, len - n, len - 1);
    reverse(str, 0, len - 1);
}
