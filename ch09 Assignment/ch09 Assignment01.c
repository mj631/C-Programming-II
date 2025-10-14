/* 파일명: assignment-01.c
 * 내용: PA0101. 한 줄의 문자열을 입력받아서 공백 문자('','\n','\t,'\f,'\r','\v')의 개수를 세는 프로그램을 작성하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#include <stdio.h>

int count_space(char str[]);

int main(void)
{
    char str[200];
    int count;

    printf("문자열? ");
    fgets(str, sizeof(str), stdin);

    count = count_space(str);

    printf("공백 문자 수: %d\n", count);

    return 0;
}

int count_space(char str[])
{
    int i, count = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
            str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
        {
            count++;
        }
    }
    return count;
}
