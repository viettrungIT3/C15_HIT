#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    float x;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while ( n < 2 );
    printf("Nhap x = ");
    scanf("%f", &x);
    double T = 1;
    double tu = 1;
    for (int i = 1; i <= n; i++) {
        tu *= (-x);
        T += tu / i;
        // printf("%f   %f\n", tu/i, T);
    }

    printf("T = %.3f", T);



    return 0;
}
