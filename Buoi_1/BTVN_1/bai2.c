#include<stdio.h>

int main() {
    int n, m;
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while ( n < 1 || n > 999 );
    do
    {
        printf("Nhap m = ");
        scanf("%d", &m);
    } while ( m < 7000 || m > 200000 || m%100 != 0);
    //Ket thuc nhap

    int tongTien = 0;
    if (n % 2 == 1 && n > 5)
    {
        tongTien = n*m*0.8;
    } if (n % 2 == 0 && n > 4)
    {
        tongTien = n*m*0.85;
    } else
    {
        tongTien = n*m;
    }
    // Ket thuc xu li

    printf("Tong tien = %d", tongTien);
    
    return 0;
}