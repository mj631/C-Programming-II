//예제 9-4: 문자열의 비교

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void)
{
	char s1[SIZE] = "apple";
	char s2[SIZE] = "apple";
	char password[SIZE] = { 0 };

	if (s1 == s2)
		printf("same address\n");

	if (strcmp(s1, s2) == 0)
		printf("same string\n");

	printf("패스워드? ");
	fgets(password, SIZE, stdin);
	password[strcspn(password, "\n")] = '\0';
	
	if (strncmp(password, "kmj68766876", SIZE) == 0)
		printf("login succeeded\n");
	else
		printf("login failed\n");

	return 0;

}