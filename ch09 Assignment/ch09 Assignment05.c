/* 파일명: assignment-05.c
 * 내용: PA005. 대소문자를 구분하지 않고 문자열을 비교하는 strcmp_ic 함수를 작성하시오. strcmp_ic(lhs,rhs)함수의 리턴값은 strcmp와 마찬가지로 lhs가 rhs보다 크면 0보다 큰값, 두 문자열이 같으면 0, lhs가 rhs보다 작으면 0보다 작은 값을 리턴한다.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#include <stdio.h>
#include <ctype.h> 

int strcmp_ic(const char* lhs, const char* rhs);

int main(void)
{
    char str1[100], str2[100];
    int result;

    printf("첫 번째 문자열 ? ");
    fgets(str1, sizeof(str1), stdin);
    printf("두 번째 문자열 ? ");
    fgets(str2, sizeof(str2), stdin);

    int i;
    for (i = 0; str1[i] != '\0'; i++)
        if (str1[i] == '\n') str1[i] = '\0';
    for (i = 0; str2[i] != '\0'; i++)
        if (str2[i] == '\n') str2[i] = '\0';

    result = strcmp_ic(str1, str2);

    if (result == 0)
        printf("%s와 %s가 같습니다.\n", str1, str2);
    else if (result < 0)
        printf("%s가 %s보다 작습니다.\n", str1, str2);
    else
        printf("%s가 %s보다 큽니다.\n", str1, str2);

    return 0;
}

int strcmp_ic(const char* lhs, const char* rhs)
{
    while (*lhs != '\0' && *rhs != '\0')
    {
        char c1 = tolower(*lhs);
        char c2 = tolower(*rhs);

        if (c1 != c2)
            return c1 - c2;

        lhs++;
        rhs++;
    }

    return tolower(*lhs) - tolower(*rhs);
}
