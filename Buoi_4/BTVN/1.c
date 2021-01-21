#include <stdio.h>

void Find_Min( int a[], int n) {
    int m = a[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (m > a[i])
        {
            m = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (m == a[i])
        {
           printf("%d %d\n", m,i+1);
           break;
        }
    }
}

void Sort( int a[], int n) {
    int i, j;
    for ( i = 0; i < n; i++)
    {
        j = i+1;
        for ( ; j < n; j++)
        {
            if ( a[i] > a[j] )
            {
                //Doi cho
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
    }
    //Xuat
    for ( i = 0; i < n; i++)
        printf("%d ", a[i]);
}

int main(int argc, char const *argv[])
{
    int n;
    // printf("Nhap n = ");
    do
    {
        scanf("%d", &n);
        // if (n < 2 || n > 50)
        //     printf("Nhap lai n = ");

    } while (n < 2 || n > 50);

    int a[n + 5];
    int i;
    // printf("Nhap mang a: ");
    for (i = 0; i < n; i++)
    {
        // printf("\ta[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    Find_Min( a, n);
    Sort( a, n);

    return 0;
}
