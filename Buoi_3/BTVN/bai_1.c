#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0);
    int count;
    if ( n < 2 ) {
        printf("no");
    } else {
        for (int i = 2; i < n; i++) {
            if ( n % i == 0 ) {
                printf("no");
                return 0;
            }

        }
        printf("yes");
    }

    return 0;
}
