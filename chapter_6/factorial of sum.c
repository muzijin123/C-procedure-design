#include<stdio.h>

int main()
{
    int n, i = 0;
    long sum = 0, ns = 1;
    for(n = 1; n <= 5; n++)
    {
        ns =  1;
        for(i = n; i >= 1; i--)
            ns = ns * i;
        printf("%dµÄ½×³ËÊÇ:%8ld\n", n, ns);
        sum += ns;
    }
    printf("sum = %ld\n", sum);
}
