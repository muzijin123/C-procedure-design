#include<stdio.h>

int main()
{
    int m, n, r, a, b, c;
    scanf("%d %d", &m, &n);
    b = m * n;
    do
    {

        r = m % n;
        m=n;
        n=r;
    }
    while(r = 0);
    printf("%d\n", m);
    a = b / m;
    printf("%d",a);
    return 0;
}

