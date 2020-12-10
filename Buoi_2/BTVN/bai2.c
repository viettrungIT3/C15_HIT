#include <stdio.h>
int main(){
    int n;
    for( n = 2; n <= 10000; n++){
        int tong = 0;
        int i;
        for( i = 1; i <= n; i++){
            if ( n % i == 0 ){
                tong += i;
            }
        }
        if ( tong == 2*n ){
            printf("%d\n",n);
        }
    }
    return 0;
}
