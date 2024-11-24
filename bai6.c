#include <stdio.h>

int main() {
    int SodienCu, SodienMoi, soDien;
    int tienDien = 0;
    printf("Nhap chi so cong to cu: ");
    scanf("%d", &SodienCu);
    printf("Nhap chi so cong to moi: ");
    scanf("%d", &SodienMoi);

    // Kiểm tra chỉ số hợp lệ
    if (SodienMoi < SodienCu) {
        printf("Chi so moi phai lon hon hoac bang chi so cu.\n");
        return 0;
    }

    soDien = SodienMoi - SodienCu;
    if (soDien >= 0 && soDien <= 50) 
    {
        tienDien = soDien * 10000;
    } else if (soDien > 50 && soDien <= 100) 
    {
        tienDien = soDien *  15000;
    } else if (soDien > 100 && soDien <= 150) 
    {
        tienDien = soDien * 20000;
    } else if (soDien > 150 && soDien < 200) 
    {
        tienDien = soDien * 25000;
    } else if (soDien >= 200)
    {
        tienDien = soDien * 30000;
    }
    
    printf("So dien tieu thu: %d kWh\n", soDien);
    printf("Tien dien phai tra: %d VND", tienDien);

    return 0;
}
