/* 파일명: assignment-03.c
 * 내용: PA0103.로그인 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
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
                printf("로그인 성공\n");
            }
            else {
                printf("비밀번호가 틀렸습니다.\n");
            }
            break;
        }
    }

    
    if (!found) {
        printf("존재하지 않는 ID입니다.\n");
    }

    return 0;
}