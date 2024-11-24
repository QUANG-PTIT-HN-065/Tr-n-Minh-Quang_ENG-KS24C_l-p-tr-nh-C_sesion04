#include<stdio.h>
int main(){
    //yêu cầu nhập vào ngày,tháng,năm
    //1. kiểm tra năm nếu sai in ra ko hợp lệ nếu đúng sang bước tiếp 
    //2. kiểm tra tháng nếu sai in ra ko hợp lệ nếu đúng sang bước tiếp 
    //3. kiểm tra tháng đó có bao nhiêu ngày 
    int ngay,thang,nam;
    printf("hay nhap vao so ngay: ");
    scanf("%d",&ngay);
    printf("hay nhap vao so thang: ");
    scanf("%d",&thang);
    printf("hay nhap vao so nam <1000-2024>: ");
    scanf("%d",&nam);
    if (nam >= 1000 && nam <= 2024)
    {
        if (thang > 0 && thang <= 12)
        {
            if (thang ==1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
            {
                if (ngay <= 31 && ngay > 0)
                {
                    printf("ngay %d thang %d nam %d hop le",ngay,thang,nam);
                } else
                {
                    printf("ko hop le");
                }
            } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
            {
                if (ngay <= 30 && ngay > 0)
                {
                    printf("ngay %d thang %d nam %d hop le",ngay,thang,nam);
                } else
                {
                    printf("ko hop le");
                }
            } else if (thang == 2)
            {
                if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                {
                    if (ngay <= 29 && ngay > 0)
                    {
                        printf("ngay %d thang %d nam %d hop le",ngay,thang,nam);
                    } else
                    {
                        printf("ko hop le");
                    } 
                } else if (ngay <= 28 && ngay > 0)
                {
                    printf("ngay %d thang %d nam %d hop le",ngay,thang,nam);
                } else 
                {
                    printf("ko hop le");
                }        
            }
        } else
        {
            printf("ko hop le");
        }
    
    } else 
    {
        printf("ko hop le");   
    }
    
    
    return 0;
}