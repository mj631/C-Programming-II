/* ���ϸ�: assignment-03.c
 * ����: PA0103.�α��� ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 5  

typedef struct {
    char id[20];
    char pw[20];
} LOGIN;

int main() {
   
    LOGIN users[SIZE] = {
        {"guest", "idontknow"},
        {"admin", "1234"},
        {"user1", "pass1"},
        {"test", "test123"},
        {"kim", "abcd"}
    };

    char input_id[20];
    char input_pw[20];
    int found = 0;  

    printf("ID? ");
    scanf("%s", input_id);

    for (int i = 0; i < SIZE; i++) {
        if (strcmp(users[i].id, input_id) == 0) { 
            found = 1;

            printf("PW: ");
            scanf("%s", input_pw);

         
            if (strcmp(users[i].pw, input_pw) == 0) {
                printf("�α��� ����\n");
            }
            else {
                printf("��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
            }
            break;
        }
    }

    
    if (!found) {
        printf("�������� �ʴ� ID�Դϴ�.\n");
    }

    return 0;
}