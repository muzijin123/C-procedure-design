#include<stdio.h>

int main()
{
    int i(int x, int y);
    int v(int x, int y);
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    c = i(a, b);
    d = v(a, b);
    printf("%d %d", c, d);
}
int i(int x, int y)
{
    int r;
    do
    {
        r = x % y;
        x = y;
        y = r;
    }
    while(r = 0);
    return(x);
}
int v(int x, int y)
{
    int r, t, q;
    t = x * y;
    do
    {
        r = x % y;
        x = y;
        y = r;
    }
    while(r = 0);
    q = t / x;
    return(q);
}

