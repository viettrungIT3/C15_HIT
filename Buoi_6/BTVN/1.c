#include <stdio.h>
#include <math.h>

void InputN( int *n) 
{
    // printf("Nhap n = ");
    do
    {
        scanf("%d", n);
    } while ( *n < 3 || *n > 50 );
}

void InputArr( int a[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        // printf("\ta[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void OutputArr( int a[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void InsertX( int a[], int *n, int k, int x){
    int i;
    k--;
    if ( k >= *n || k < 0)
    {
        printf("-1");
        // return;
    }
    else
    {
        for (int i = n ; i > k; i--)
        {
            a[i] = a[i-1];
        }
        a[k] = x;
        *n = *n +1;
        OutputArr( a, *n);
    }
}


int main(int argc, char const *argv[])
{
    int n;
    InputN( &n);
    int a[n+5];
    InputArr( a, n);
    int k,x;
    scanf("%d%d", &k, &x);
    InsertX( a, &n, k, x);    
    return 0;
}
