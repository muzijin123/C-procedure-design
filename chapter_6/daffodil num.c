#include<stdio.h>

int main()
{
    int n, a, b, c, d, e, i = 1;
    for(n = 100; n <= 999; n++)
    {
        for(i = 100;i > 1;)
        {
            a = n / i;
            b = n % i;
            i = i / 10;
            c = b / i;
            d = b % i;
            i = i / 10;
            e = d / i;
        }
        if(n == a * a * a + c * c * c + e * e * e )
            printf("%d ", n);
    }





}
