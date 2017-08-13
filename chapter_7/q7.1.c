#include<stdio.h>

int main()
{
    int a[101];
    int i, m, k;
    for(i = 1;i <= 100;i ++)
    {c
        a[i] = i;
        k = sqrt(a[i]);
        for(m = 2; m < a[i]; m++)
            if(a[i] % m == 0)
                break;
        if(m >= k)
        {
            printf("%d", a[i]);
        }
        printf("\n");

    }



}
