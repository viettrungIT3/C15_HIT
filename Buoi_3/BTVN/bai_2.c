#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    long n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n < 2 || n > 100000000);
    int i = 2;
    while ( n > 1) {
        if ( n % i == 0 ) {
            printf("%d ", i);
            if ( n > i ) {
                printf("* ");
            }
            n /= i;
            i--;
        }
        i++;
    }


    return 0;
}
