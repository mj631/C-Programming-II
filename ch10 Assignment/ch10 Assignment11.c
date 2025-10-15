/* ���ϸ�: assignment-11.c
 * ����: PA011.PRODUCT ����ü �迭�� �̿��ؼ� ��ǰ���� �Է¹޾� �˻� �� �ֹ� ó���ϴ� ���α׷��� �ۼ�
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#include <stdio.h>
#include <string.h>

#define SIZE 5

typedef struct {
    char name[20];
    int price;
    int stock;
} PRODUCT;

int main() {
    PRODUCT items[SIZE] = {
        {"�Ƹ޸�ī��", 4000, 10},
        {"ī���", 4500, 8},
        {"�÷�ȭ��Ʈ", 5000, 10},
        {"�ݵ���", 4800, 6},
        {"���ڶ�", 4300, 5}
    };

    char order_name[20];
    int qty;
    int i, found;

    while (1) {
        printf("�ֹ��� ��ǰ��? ");
        scanf("%s", order_name);

       
        if (strcmp(order_name, "��") == 0) break;

        printf("�ֹ��� ����? ");
        scanf("%d", &qty);

        found = 0;

        for (i = 0; i < SIZE; i++) {
            if (strcmp(items[i].name, order_name) == 0) {
                found = 1;
                if (items[i].stock >= qty) {
                    int total = items[i].price * qty;
                    items[i].stock -= qty;
                    printf("���� �ݾ�: %d��, %s ���: %d\n",
                        total, items[i].name, items[i].stock);
                }
                else {
                    printf("��� �����մϴ�. ���� ���: %d\n", items[i].stock);
                }
                break;
            }
        }

        if (!found)
            printf("�ش� ��ǰ�� �������� �ʽ��ϴ�.\n");
    }


    printf("\n[���� ��� ��Ȳ]\n");
    for (i = 0; i < SIZE; i++) {
        printf("[%s] %d�� ���:%d\n", items[i].name, items[i].price, items[i].stock);
    }

    return 0;
}