/* ���ϸ�: assignment-01.c
 * ����: PA0101. �� ���� ���ڿ��� �Է¹޾Ƽ� ���� ����('','\n','\t,'\f,'\r','\v')�� ������ ���� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#include <stdio.h>

int count_space(char str[]);

int main(void)
{
    char str[200];
    int count;

    printf("���ڿ�? ");
    fgets(str, sizeof(str), stdin);

    count = count_space(str);

    printf("���� ���� ��: %d\n", count);

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
