#include<stdio.h>

int main()
{
    int m, n, r;
    scanf("%d %d", &m, &n);
    do
    {
        r = m % n == 0;
        m=n;
        n=r;
    }

    while(r = 0);
    printf("%d",m);


}
