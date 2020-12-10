#include <stdio.h>
int main(){
    int n;
    float x;
    do{
        printf("Nhap so nguyen duong n: ");
        scanf("%d",&n);
        if (n<=0){
            printf("Nhap lai n > 0\n");
        }
    }while (n<=0);
    printf("Nhap so thuc x: ");     scanf("%f",&x);
    float f = 0;
    if (n % 2 == 0){
        f = 2019 * x + sqrt(n*n*n*n + 5);
    }else{
        f = x;
        int i;
        //C1:
        for(i=0;i<=n;i++){
            f = f + 1.0/pow(2,i);
        }
        //C2:
        // float mau = 0.5;
        // for(i = 0;i<=n;i++){
        //     mau = mau * 2;
        //     f = f + 1.0/mau;
        // }
    }
    printf("\tf(%d,%.3f) = %.3f",n,x,f);
    return 0;
}
