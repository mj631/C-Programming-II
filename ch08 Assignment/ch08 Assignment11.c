/* ���ϸ�: assignment-11.c
 * ����: PA011. ���簢���� ���̿� �ѷ��� ���ϴ� get_rect_info �Լ��� �ۼ��Ͻÿ�.
* �ۼ���: �����
* ��¥: 2025.10.15
 * ����: v1.0
 */
#include <stdio.h>


void get_rect_info(int width, int height, int* area, int* perimeter);

int main(void)
{
    int width, height;
    int area, perimeter;

    printf("����: ");
    scanf_s("%d", &width);
    printf("����: ");
    scanf_s("%d", &height);


    get_rect_info(width, height, &area, &perimeter);

    printf("����: %d, �ѷ�: %d\n", area, perimeter);

    return 0;
}


void get_rect_info(int width, int height, int* area, int* perimeter)
{
    *area = width * height;
    *perimeter = 2 * (width + height);
}
