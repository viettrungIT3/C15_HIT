#include<stdio.h>
#include<math.h>
void nhapMang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void chuyenSo(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	   if(a[i]%2==0)
	   {
	   	  while(a[i]%2==0)
			{
	   	  	    a[i]/=2;
			}
	   }
	   else
	   {
	   	  a[i]=a[i];
	   }
    }
}
int snt(int n)
{
	if (n < 2)
    {
        return 0; 
    }
    int i, count = sqrt(n);
    for (i = 2; i <= count; i++)
    {
        if (n % i == 0)
        {
            return -1;
        }
    }
    return 1;
}
void doisnt(int a[], int n)
{
	int i,x,y;
	for (i = 0; i < n; i++)
	{
		if (snt(a[i]) != 1){
			int temp1 = a[i];
            int temp2 = a[i];
            while (snt(temp1) != 1)     // tìm snt trước
            {
                temp1--;
            }
            while (snt(temp2) != 1)     // tìm snt sau
            {
                temp2++;
            }
            if (abs(a[i] - temp1) <= abs(a[i] - temp2))     // so sánh snt nào gần hơn
                a[i] = temp1;
            else
                a[i] = temp2;
		}
	}
	
}

int main()
{
	int i,n;	
	scanf("%d",&n);
	while(n<3 || n>50)
	{
		printf("nhap lai n: ");
		scanf("%d",&n);
	}
	int a[n];
	nhapMang(a,n);
	//chuyenSo(a,n);
	xuatMang(a,n);
	printf("\n");
	doisnt(a,n);
	xuatMang(a,n);
}