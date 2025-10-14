/* 파일명: assignment-02.c
 * 내용: PA002. 문자 배열을 매개변수로 전달받아 공백 문자('','\n','\t,'\f,'\r','\v')를 모두 제거하는 remove_space 함수를 작성하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#include <stdio.h>

void remove_space(char str[]);

int main(void)
{
    char str[200];

    printf("문자열? ");
    fgets(str, sizeof(str), stdin);

    remove_space(str);

    printf("공백 제거 후: %s\n", str);

    return 0;
}

void remove_space(char str[])
{
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++)
    {

        if (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
            str[i] == '\f' || str[i] == '\r' || str[i] == '\v'))
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
