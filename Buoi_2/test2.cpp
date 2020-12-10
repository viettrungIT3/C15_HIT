#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n ;
    float x ;
    printf("nhap n = ");
    scanf("%d" , &n );
    printf("nhap x = ");
    scanf("%f" , &x);
    double s;
    if ( n % 2 == 1) {
        s = 0;
    }
    else {
        s = 2016*x;
        float tu = x;
        float mau = 1;
        for ( int i = 2; i <= n; i++) {
            // tu *= x;
            // mau *= 3;
            s += pow(x, i)/pow(3, i-1);
        }
    }
    printf("%.3f", s);
    return 0;
}
