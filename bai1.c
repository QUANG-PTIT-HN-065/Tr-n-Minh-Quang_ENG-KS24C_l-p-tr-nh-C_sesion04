#include <stdio.h>

int main() {
    int number; 
    printf("Nhap so nguyen: "); 
    scanf("%d", &number); 

    if (number > 0 && number != 0) 
    {
        printf("So duong");
    } else if (number == 0)
    {
        printf("0 ko phai la so nguyen duong va ko phai la so nguyen am");
    } else
    {
        printf("so am");
    }-1
    
    
    return 0; 
}
