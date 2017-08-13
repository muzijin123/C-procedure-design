#include<stdio.h>

int main()
{
    int n, i, j = 0, r = 0, sum = 0;
    for(n = 1; n <= 1000; n++)
    {
        for(i = 1; i < n;i++)
        {
            r = n % i;
            if(r == 0)
                sum += i;
        }
        if(sum == n)
            printf("%d %d\n", n, j);
    }

}
