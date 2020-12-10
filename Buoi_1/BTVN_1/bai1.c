#include<stdio.h>

int main() {
    int a;
    do
    {
        printf("Nhap a = ");
        scanf("%d", &a);
    } while ( a < 2 || a > 50 );
    float b = (float)a;
    float tinh = (b/3)*(b/3)*(b/3)*(b/3);
    printf("%.3f", tinh);
    
    return 0;
}