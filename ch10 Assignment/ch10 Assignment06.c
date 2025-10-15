/* ���ϸ�: assignment-06.c
 * ����: PA0106.DATE ����ü 2���� �Ű������� ���޹޾� ��¥�� ������ ���ϴ� is_same_date �Լ��� �����Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#include <stdio.h>

#define SIZE 5

typedef struct {
    int year;
    int month;
    int day;
} DATE;

int is_same_date(DATE d1, DATE d2) {
    return (d1.year == d2.year && d1.month == d2.month && d1.day == d2.day);
}

int main() {
    DATE holidays[SIZE] = {
        {2019, 1, 1},
        {2019, 3, 1},
        {2019, 5, 5},
        {2022, 1, 1},
        {2022, 12, 25}
    };

    DATE input;
    int i, found;

    while (1) {
        printf("��¥(�� �� ��)? ");
        scanf("%d %d %d", &input.year, &input.month, &input.day);

        if (input.year == 0 && input.month == 0 && input.day == 0)
            break;

        found = 0;
        for (i = 0; i < SIZE; i++) {
            if (is_same_date(input, holidays[i])) {
                printf("%d/%d/%d�� �������Դϴ�.\n", input.year, input.month, input.day);
                found = 1;
                break;
            }
        }

        if (!found)
            printf("%d/%d/%d�� �������� �ƴմϴ�.\n", input.year, input.month, input.day);
    }

    return 0;
}