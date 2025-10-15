/* ���ϸ�: assignment-08.c
 * ����: PA008. ������ �迭�� Ư�� ������ ä��� fill_array �Լ��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fill_array(int* arr, int size, int value);

int main(void)
{
    int arr[20];
    int value;
    int i;

    printf("�迭�� ���ҿ� ������ ��? ");
    scanf_s("%d", &value);

    fill_array(arr, 20, value);

    for (i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void fill_array(int* arr, int size, int value)
{
    int* p;
    for (p = arr; p < arr + size; p++) {
        *p = value;
    }
}
