
/* ���ϸ�: assignment-07.c
 * ����: PA007. �Ǽ��� �迭�� ���ؼ� ���ҵ��� �������� ����� reverse_array�Լ��� �ۼ��Ͻÿ�
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#include <stdio.h>

void reverse_array(double* arr, int size);

int main(void)
{
    double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
    int i;

    printf("�迭: ");
    for (i = 0; i < 10; i++) {
        printf("%.1lf ", arr[i]);
    }

    reverse_array(arr, 10);

    printf("\n����: ");
    for (i = 0; i < 10; i++) {
        printf("%.1lf ", arr[i]);
    }

    printf("\n");
    return 0;
}

void reverse_array(double* arr, int size)
{
    int i;
    double temp;

    for (i = 0; i < size / 2; i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + (size - 1 - i));
        *(arr + (size - 1 - i)) = temp;
    }
}
