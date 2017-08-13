#include<stdio.h>

int main()
{
    int n, i = 2, t = 1,x = 0;
    float r = 0,sum = 0;
    for(n = 1; n <= 2; n++)
    {
        r = 1.0 * i / t;
        x = i;
        i = i + t;
        t = x;
        sum += r;
    }
    printf("%f ", sum);


}
