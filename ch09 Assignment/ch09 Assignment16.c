/* 파일명: assignment-16.c
 * 내용: PA016. 인터넷 사이트에 로그인 하려는 사용자로부터 아이디와 패스워드를 입력받아 로그인과정을 처리하려고 한다. ....
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
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
                    printf("로그인 성공!\n");
                    success = 1;
                }
                else {
                    printf("비밀번호가 틀렸습니다.\n");
                }
                break;
            }
        }

        if (!found) {
            printf("없는 ID입니다.\n");
        }

        if (success) break;
    }

    if (!success)
        printf("3번 실패했습니다.\n");

    return 0;
}