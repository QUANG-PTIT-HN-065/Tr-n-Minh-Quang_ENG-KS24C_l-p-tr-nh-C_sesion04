#include <stdio.h>

int main() {
    int number; 
    printf("Nhap so nguyen: "); 
    scanf("%d", &number); 

    if (number % 3 == 0 && number % 5 == 0 )
    {
        printf("so chia het cho 3 va 5");
    } else if (number % 3 == 0)
    {
        printf("so chia het cho 3");
    } else if (number % 5 == 0)
    {
        printf("so chia het cho 5");
    } else
    {
        printf("so ko chia het cho 3 va 5");
    }
     
    return 0; 
}
