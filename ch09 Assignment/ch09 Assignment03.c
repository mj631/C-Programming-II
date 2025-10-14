/* 파일명: assignment-03.c
 * 내용: PA003. 입력받은 문자열의 소문자는 대문자로, 대분자는 소문자로 변환하는 프로그램을 작성하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#include <stdio.h>
#include <ctype.h>  

void change_case(char str[]);

int main(void)
{
    char str[200];

    printf("문자열? ");
    fgets(str, sizeof(str), stdin);

    change_case(str);

    printf("변환 후: %s\n", str);

    return 0;
}

void change_case(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]))
            str[i] = toupper(str[i]);
        else if (isupper(str[i]))
            str[i] = tolower(str[i]);
    }
}
