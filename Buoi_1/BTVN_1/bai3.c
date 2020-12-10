#include<stdio.h>

int main() {
    int n, m, k;
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while ( n < 1 || n > 20 );
    do
    {
        printf("Nhap m = ");
        scanf("%d", &m);
    } while ( m < 1 || m > 5 );
    do
    {
        printf("Nhap k = ");
        scanf("%d", &k);
    } while ( k < 10 || k > 50 );
    //Ket thuc nhap

    int tongKeo = m*k;
    if ( tongKeo % n != 0 )
    {
        printf("no");
    } else
    {
        printf("yes");
    }
    // Ket thuc xu li
    
    return 0;
}