#include <stdio.h>
#include <math.h>

int isPrime(int n)      // ngoài cách trả về kiểu int thì ta có thể dùng bool nhé!
{
    if (n < 2)
    {
        return 0; // nono, như này check nhiều loại bài
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

void check_no_prime(int a[], int n)     // đặt tên hàm sai
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (isPrime(a[i]) != 1)
        {
            int temp1 = a[i];
            int temp2 = a[i];
            while (isPrime(temp1) != 1)     // tìm snt trước
            {
                temp1--;
            }
            while (isPrime(temp2) != 1)     // tìm snt sau
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

int main()      // đây là viết theo vs
{
    // int n = 5;
    // int a[5] = { 5,3,5,1,4};
    int n;
    // printf("Nhap n = ");
    scanf("%d", &n);
    int a[n + 5];   // à cái này khai báo thừa thôi, để tránh tình trạng gặp bài insert
    // đã học con trỏ đâu mà cấp phát động
    // trên lớp có bài nào thầy cho hóc không
    int i;
    for (i = 0; i < n; i++)
    {
        // printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    check_no_prime( a, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
