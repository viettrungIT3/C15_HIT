#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    float x;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while ( n < 3 );
    printf("Nhap x = ");
    scanf("%f", &x);
    double T = 1;
    double tu = 1;
    double mau = 1;
    for (int i = 1; i <= n; i++) {
        tu *= x;
        mau *= i;
        T += tu / mau;
    }

    printf("CLUB = %.3f", T);



    return 0;
}
