/* ���ϸ�: assignment-03.c
 * ����: PA003. �Է¹��� ���ڿ��� �ҹ��ڴ� �빮�ڷ�, ����ڴ� �ҹ��ڷ� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#include <stdio.h>
#include <ctype.h>  

void change_case(char str[]);

int main(void)
{
    char str[200];

    printf("���ڿ�? ");
    fgets(str, sizeof(str), stdin);

    change_case(str);

    printf("��ȯ ��: %s\n", str);

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
