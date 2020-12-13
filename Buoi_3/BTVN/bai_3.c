#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n < 1 || n > 1000000);

    int count = 0;
    for (int i = 1; i <= n; i++) {
        int value = i;
        int count2 = 1;
        while (value > 0) {
            int temp = value % 10;
            // printf("%d ", temp);
            if (temp != 4 && temp != 7) {
                count2 = 0;
                break;
            }
            value /= 10;
        }
        if (count2 != 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d", count);

    return 0;
}
