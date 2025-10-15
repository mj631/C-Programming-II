/* ���ϸ�: assignment-12.c
 * ����: PA012. ������ �迭�� Ű ���� �Ű������� ���޹޾� �迭���� Ű ���� ��� ã�� �ε����� �迭�� �����ؼ� �����ϴ� find_all_in_array�Լ��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
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

    printf("ã�� ��: ");
    scanf_s("%d", &key);

    count = find_all_in_array(arr, 10, key, index_array);

    if (count == 0)
        printf("ã�� �׸��� �����ϴ�.\n");
    else {
        printf("ã�� �׸��� ��� %d���Դϴ�.\n", count);
        printf("ã�� �׸��� �ε���: ");
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
