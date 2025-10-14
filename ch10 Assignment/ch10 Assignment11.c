/* 파일명: assignment-11.c
 * 내용: PA011.PRODUCT 구조체 배열을 이용해서 제품명을 입력받아 검색 후 주문 처리하는 프로그램울 작성
* 작성자: 김민지
* 날짜: 2025.10.15
 * 버전: v1.0
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
        {"아메리카노", 4000, 10},
        {"카페라떼", 4500, 8},
        {"플랫화이트", 5000, 10},
        {"콜드브루", 4800, 6},
        {"초코라떼", 4300, 5}
    };

    char order_name[20];
    int qty;
    int i, found;

    while (1) {
        printf("주문할 제품명? ");
        scanf("%s", order_name);

       
        if (strcmp(order_name, "끝") == 0) break;

        printf("주문할 수량? ");
        scanf("%d", &qty);

        found = 0;

        for (i = 0; i < SIZE; i++) {
            if (strcmp(items[i].name, order_name) == 0) {
                found = 1;
                if (items[i].stock >= qty) {
                    int total = items[i].price * qty;
                    items[i].stock -= qty;
                    printf("결제 금액: %d원, %s 재고: %d\n",
                        total, items[i].name, items[i].stock);
                }
                else {
                    printf("재고가 부족합니다. 현재 재고: %d\n", items[i].stock);
                }
                break;
            }
        }

        if (!found)
            printf("해당 제품이 존재하지 않습니다.\n");
    }


    printf("\n[최종 재고 현황]\n");
    for (i = 0; i < SIZE; i++) {
        printf("[%s] %d원 재고:%d\n", items[i].name, items[i].price, items[i].stock);
    }

    return 0;
}