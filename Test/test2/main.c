#include<stdio.h>

int main () {
	int m,n,k;
	do {
		printf("Nhap so nguyen N,M,K: ");
		scanf("%d%d%d",&n,&m,&k);

	} while (m<1 || m>1000000 || n<1 || n>1000000 || k<1 || k>1000000);

	int t=0;
	int s=0;
	while (n!=0 && m!=0){
        t = n % 10;
        s += t;
        n /= 10;
        m /= 10;
    }
	if (s+m==k) {
		printf("yes");
	} else {
		printf("no");
	}
	return 0;
}
