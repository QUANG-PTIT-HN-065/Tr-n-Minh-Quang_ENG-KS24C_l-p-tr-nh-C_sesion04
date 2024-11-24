#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Nhap so nguyen thu 1: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu 2: ");
    scanf("%d", &num2);
    printf("Nhap so nguyen thu 3: ");
    scanf("%d", &num3);

    if ((num1 < num3 && num3 < num2) || (num2 < num3 && num3 < num1)) {
        printf("So thu 3 nam trong khoang giua so thu 1 va so thu 2.\n");
    } else {
        printf("So thu 3 khong nam trong khoang giua so thu 1 va so thu 2.\n");
    }

    return 0;
}
