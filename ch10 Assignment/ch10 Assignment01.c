/* ���ϸ�: assignment-01.c
 * ����: PA0101.���ͳ� ����Ʈ�� �α��� �Ҷ� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct LOGIN {
    char id[21];
    char pw[21];
};

int main(void)
{
    struct LOGIN user;

    printf("ID? ");
    scanf("%s", user.id);

    printf("Password? ");
    scanf("%s", user.pw);

    printf("\nID: %s\n", user.id);
    printf("PW: ");
    for (int i = 0; i < strlen(user.pw); i++)
        printf("*");
    printf("\n");

    return 0;
}
