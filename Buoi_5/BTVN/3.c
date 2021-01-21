#include <stdio.h>
#include <math.h>


// nhìn thấy gì không
// đang ở bệnh viện không nói đc
// ae chịu khó nhìn nhé
float avg_even(float a[], int n)
{
    int count = 0, i;
    for (i = 0; i < n; i++)
    {
        int nguyen = (int)a[i]; //ep về kiểu nguyên
        // c1: (kiêu dữ liệu) biến  vd: (int)n;     
        // c2: kiểu dữ liệu( biến) vd: int(n)
        int temp = nguyen % 10; // tách lấy chữ số hàng đơn vị
        if (temp % 2 == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        return -1;
    }
    else
    {
        float sumAvg = 0; // kệ đi
        for (i = 0; i < n; i++)
        {
            int nguyen = (int)a[i];
            int temp = nguyen % 10;
            if (temp % 2 == 0)
            {
                sumAvg += a[i]; // phần này thì chỉ cộng tích luỹ thôi
            }
        }
        return sumAvg / count;
    }
}

//sắp xếp chắc dễ nhỉ
void sortArr(float a[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void change_odd(float a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        int nguyen = (int) abs(a[i]);
        int temp = nguyen % 10;
        if (temp % 2 == 1)
        {
            a[i] = 1.23;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    float a[n + 5];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    printf("%f\n", avg_even(a, n));
    // sortArr(a, n);
    change_odd( a, n);
    for (i = 0; i < n; i++)
    {
        printf("%f ", a[i]);
    }
    // chuyển nhé 
    // ahihi
    return 0;
}
