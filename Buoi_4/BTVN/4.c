#include <stdio.h>
#include <math.h>

int isPrime(int n)
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
            return 1;
        }
    }
    return 1;
}

int max1(int a[], int n)
{
    int m = a[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (m < a[i])
        {
            m = a[i];
        }
    }
    return m;
}

int max2(int a[], int n)
{
    int m1 = max1(a, n);
    int m2 = a[0];
    int i;
    if (m1 == m2)
    {
        for (i = 0; i < n; i++)
        {
            if (m1 > a[i])
            {
                m2 = a[i];
                break;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (m2 < a[i] && a[i] < m1)
        {
            m2 = a[i];
        }
    }
    return m2;
}

int main(int argc, char const *argv[])
{
    // int n = 5;
    // int a[5] = { 5,3,5,1,4};
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    int a[n + 5];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n%d %d", max1(a, n), max2(a, n));
    return 0;
}
