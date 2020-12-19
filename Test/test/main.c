#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a=24,b=36,uoc;
    int c=a;int d=b;
    while (a!=b)

    {
        if(a>b)
        a-=b;
        else b-=a;
    }
    uoc =a;

    printf("%d/%d",c/uoc,d/uoc);

    
    return 0;
}
