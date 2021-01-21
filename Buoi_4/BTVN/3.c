#include <stdio.h>

float Find_Min( float a[], int n) {
    float m = a[0];
    int i;
    for (i = 1; i < n; i++)
    {
        if (m > a[i])
        {
            m = a[i];
        }
    }
    return m;
}

float Find_Max( float a[], int n) {
    float m = a[0];
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

void Swap_Min_Max( float a[], int n, float m1, float m2) {
    int i, vt1, vt2;
    for (i = 0; i < n; i++)
    {
        if (m1 == a[i])
            vt1 = i;
        if (m2 == a[i])
            vt2 = i;
    }
    a[vt1] = m2;
    a[vt2] = m1;
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

    float a[n + 5];
    int i;
    // printf("Nhap mang a: ");
    for (i = 0; i < n; i++)
    {
        // printf("\ta[%d] = ", i);
        scanf("%f", &a[i]);
    }

    float m1 = Find_Min( a, n);
    float m2 = Find_Max( a, n);
    printf("%f %f\n", m1, m2);

    Swap_Min_Max( a, n, m1, m2);
    //Xuat
    for ( i = 0; i < n; i++)
        printf("%f ", a[i]);
    return 0;
}
