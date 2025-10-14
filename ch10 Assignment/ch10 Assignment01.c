/* 파일명: assignment-01.c
 * 내용: PA0101.인터넷 사이트에 로그인 할때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
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
