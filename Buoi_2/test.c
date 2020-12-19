#include <stdio.h>
#include <math.h>
int main()
{
   int m,n,a,b,i;
   printf("nhap 2 so: ");	scanf("%d%d", &m, &n);
   if ( m > n) {   
	   a=n;b=m;
   } else 
        { a=m;
          b=n;
		}
	i=0;
	while ((b%a!=0) || (a%b!=0))
	    {
		  printf("(%d hv %d x %d) ",b/a,a,a) ;
		  i=i+b/a;
		  b=b-(b/a)*a;
		  printf("(%d hv %d x %d) ",a/b,b,b) ;
		  i=i+a/b;
		  a=a-(a/b)*b;
		} 
		
	if  (a!=0){
		if (a>b)
	{
	printf(" (%d hv %d x %d)",a/b,b,b) ;
	i=i+a; }
	   else {
	   printf(" (%d hv %d x %d)",b/a,a,a) ;
	   i=i+b;
        }}
    printf("so hv la: %d ",i);
   	return 0;
}