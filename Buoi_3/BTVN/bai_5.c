#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a,b;
    do {
        printf("Nhap lan luot a,b: ");
        scanf("%d%d", &a, &b);
    } while ( a < 1 || b > 100000);
    int max = (a>b) ? a : b;    // toan tu ba ngoi thay cho lenh if else
    // printf("%d", max);
    int temp;
    for (int i = max; i > 0; i--) {
        if ( a % i == 0 && b % i == 0 ) {
            temp = i;
            break;
        }
    }

    printf("%d/%d = %d/%d",a, b, a/temp, b/temp);


    return 0;
}
