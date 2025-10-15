/* ���ϸ�: assignment-05.c
 * ����: PA005. ��ҹ��ڸ� �������� �ʰ� ���ڿ��� ���ϴ� strcmp_ic �Լ��� �ۼ��Ͻÿ�. strcmp_ic(lhs,rhs)�Լ��� ���ϰ��� strcmp�� ���������� lhs�� rhs���� ũ�� 0���� ū��, �� ���ڿ��� ������ 0, lhs�� rhs���� ������ 0���� ���� ���� �����Ѵ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#include <stdio.h>
#include <ctype.h> 

int strcmp_ic(const char* lhs, const char* rhs);

int main(void)
{
    char str1[100], str2[100];
    int result;

    printf("ù ��° ���ڿ� ? ");
    fgets(str1, sizeof(str1), stdin);
    printf("�� ��° ���ڿ� ? ");
    fgets(str2, sizeof(str2), stdin);

    int i;
    for (i = 0; str1[i] != '\0'; i++)
        if (str1[i] == '\n') str1[i] = '\0';
    for (i = 0; str2[i] != '\0'; i++)
        if (str2[i] == '\n') str2[i] = '\0';

    result = strcmp_ic(str1, str2);

    if (result == 0)
        printf("%s�� %s�� �����ϴ�.\n", str1, str2);
    else if (result < 0)
        printf("%s�� %s���� �۽��ϴ�.\n", str1, str2);
    else
        printf("%s�� %s���� Ů�ϴ�.\n", str1, str2);

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
