#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    do {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while ( n < 1 || n > 1000 );
    int index1 = 1;
    int index2 = 1;        
    printf("%d ", index1);
    while ( index2 <= n )
    {
        int temp = index2;
        index2 += index1;
        index1 = temp;
        printf("%d ", index1);
    }
    
    return 0;
}
