#include <stdio.h>
#include <stdlib.h>

//Hàm trả về
// hàm không trả về
//int float -> return
//void

void Nhap( int a[], int n) {
    int i;
    for ( i = 0; i < n; i++) {
        printf("\ta[%d] = ", i);
        scanf("%d", &a[i]);
    }
    return ;
}

void Xuat( int a[], int n) {
    int i;
    for ( int i = 0; i < n; i++ ) {
        printf("%d ", a[i]);
    }
}

int Find_max( int a[], int n) {
    int m = a[0];
    int i;
    for ( i = 1; i < n; i++) {
        if ( m > a[i])
            m = a[i];
    }
    return m;
}

int main() {
    int n, i;
    printf("Nhap n = ");
    scanf("%d", &n);
    int a[n];


    //Sap xep
    for ( i = 0; i <n; i++) {
        for ( j = i + 1; j < n; j++) {
            if ( a[i] > a[j]) {
                //Doi cho
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;

            }
        }
    }
        return 0;
}
