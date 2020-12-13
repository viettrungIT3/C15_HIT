#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, m, k;
    do {
        printf("Nhap lan luot n,m,k: ");
        scanf("%d%d%d", &n, &m, &k);
    } while (n < 1 || n < k || n > 100000);
    int sum = 0;
    // int n = 223;
    while ( n > 0 ) {
        sum += n%10;
        n /= 10;
    }
    // int m = 223;
    while ( m > 10) {
        m /= 10;
    }
    sum += m;
    // printf("%d", sum);

    if ( sum == k ) {
        printf("yes");
    } else {
        printf("no");
    }

    return 0;
}
