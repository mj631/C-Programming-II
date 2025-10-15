/* ���ϸ�: assignment-12.c
 * ����: PA012. �Է¹��� ���ڿ��� ���Ͽ� �̵��� ���� ���� �Է¹޾� �����̳� ���������� ȸ�� �� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
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

    printf("���ڿ�? ");
    fgets(str, sizeof(str), stdin);


    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    while (1)
    {
        printf("�̵��� ���ڼ�? ");
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
