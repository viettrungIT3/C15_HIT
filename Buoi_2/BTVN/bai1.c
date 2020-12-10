#include <stdio.h>
int main(){
    int m,n;
    printf("Nhap m = ");    scanf("%d",&m);
    printf("Nhap n = ");    scanf("%d",&n);
    int i,j;
    for( i = 1; i <= m; i++){
        for( j = 1; j <= n; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
