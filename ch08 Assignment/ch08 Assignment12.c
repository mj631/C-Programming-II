/* 파일명: assignment-12.c
 * 내용: PA012. 정수형 배열과 키 값을 매개변수로 전달받아 배열에서 키 값을 모두 찾아 인덱스를 배열에 저장해서 리턴하는 find_all_in_array함수를 작성하시오.
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_all_in_array(int arr[], int size, int key, int index_array[]);

int main(void)
{
    int arr[10] = { 12, 45, 62, 12, 99, 83, 23, 12, 77, 37 };
    int key;
    int index_array[10];
    int count, i;

    printf("찾을 값: ");
    scanf_s("%d", &key);

    count = find_all_in_array(arr, 10, key, index_array);

    if (count == 0)
        printf("찾은 항목이 없습니다.\n");
    else {
        printf("찾은 항목은 모두 %d개입니다.\n", count);
        printf("찾은 항목의 인덱스: ");
        for (i = 0; i < count; i++)
            printf("%d ", index_array[i]);
        printf("\n");
    }

    return 0;
}
int find_all_in_array(int arr[], int size, int key, int index_array[])
{
    int i, count = 0;

    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            index_array[count] = i;
            count++;
        }
    }

    return count;
}
