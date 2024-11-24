#include <stdio.h>

int main() {
    int number; 
    printf("Nhap so nguyen: "); 
    scanf("%d", &number); 

    if (number % 2 == 0) 
    {
        printf("So chan");
    } else
    {
        printf("so le");
    }
    
    return 0; 
}
