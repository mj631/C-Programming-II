/* ���ϸ�: assignment-02.c
 * ����: PA002. ���� �迭�� �Ű������� ���޹޾� ���� ����('','\n','\t,'\f,'\r','\v')�� ��� �����ϴ� remove_space �Լ��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#include <stdio.h>

void remove_space(char str[]);

int main(void)
{
    char str[200];

    printf("���ڿ�? ");
    fgets(str, sizeof(str), stdin);

    remove_space(str);

    printf("���� ���� ��: %s\n", str);

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
