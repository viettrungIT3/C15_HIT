#include <stdio.h>

int main() {
    int n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n < 1 || n > 1000000);

    int count = 0;
    for (int i = 1; i <= n; i++) {
        int value = i;
        int check = 1;
        while (value > 0) {
            int temp = value % 10;
            // printf("%d ", temp);
            if (temp != 4 && temp != 7) {
                check = 0;
                break;
            }
            value /= 10;
        }
        if (check != 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n%d", count);

    return 0;
}
