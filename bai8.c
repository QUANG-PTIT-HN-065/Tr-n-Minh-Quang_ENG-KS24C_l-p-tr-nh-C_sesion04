#include<accctrl.h>
int mian (){
    // khai báo biến a,b,c tương ứng với 3 cạnh của tam giá 
    // điều kiện để hình thành tam giá là tổng hai cạnh bất kỳ > cạnh còn lại 
    // a + b > c
    // a + c > b
    // b + c > a 
    // dùng && để đáp ứng cả ba điều kiện trên mới trả vè true     
    int a, b, c;
    printf("Nhap 3 canh cua tam giac: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("Là 3 cạnh tam giác.");
    } else {
        printf("Không phải 3 cạnh tam giác.");
    }
    return 0;
}