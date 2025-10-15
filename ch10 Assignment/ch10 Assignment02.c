/* ���ϸ�: assignment-02.c
 * ����: PA0102.1�� ���α׷��� ���̵�� �н����带 �׻� �����ڷ� �����Ϸ��� �Ѵ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#define _CRT_XECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

struct LOGIN {
    char id[21];
    char pw[21];
};

void make_lower(struct LOGIN* p) {
    for (int i = 0; i < strlen(p->id); i++)
        p->id[i] = tolower(p->id[i]);
    for (int i = 0; i < strlen(p->pw); i++)
        p->pw[i] = tolower(p->pw[i]);
}

void print_login(struct LOGIN p) {
    printf("ID: %s\n", p.id);
    printf("PW: ");
    for (int i = 0; i < strlen(p.pw); i++)
        printf("*");
    printf("\n");
}

int main(void)
{
    struct LOGIN user;

    printf("ID? ");
    scanf("%s", user.id);

    printf("Password? ");
    scanf("%s", user.pw);

    make_lower(&user);
    printf("\n");
    print_login(user);

    return 0;
}
