/* ���ϸ�: assignment-16.c
 * ����: PA016. ���ͳ� ����Ʈ�� �α��� �Ϸ��� ����ڷκ��� ���̵�� �н����带 �Է¹޾� �α��ΰ����� ó���Ϸ��� �Ѵ�. ....
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct User {
    char id[20];
    char pw[20];
};

int main()
{
    struct User users[5] = {
        {"aaa", "111"},
        {"bbb", "222"},
        {"ccc", "333"},
        {"ddd", "444"},
        {"eee", "555"}
    };

    char id[20], pw[20];
    int success = 0;

    for (int t = 0; t < 3; t++) {
        printf("ID: ");
        scanf("%s", id);
        printf("PW: ");
        scanf("%s", pw);

        int found = 0;

        for (int i = 0; i < 5; i++) {
            if (strcmp(users[i].id, id) == 0) {
                found = 1;
                if (strcmp(users[i].pw, pw) == 0) {
                    printf("�α��� ����!\n");
                    success = 1;
                }
                else {
                    printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
                }
                break;
            }
        }

        if (!found) {
            printf("���� ID�Դϴ�.\n");
        }

        if (success) break;
    }

    if (!success)
        printf("3�� �����߽��ϴ�.\n");

    return 0;
}