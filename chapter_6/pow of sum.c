#include<stdio.h>
#include<math.h>

int main()
{
    int i = 1, a, s, n, sum;
    scanf("%d %d", &n, &a);
    do
    {
       sum = sum + s;
       s = s + a *pow(10,i);
       i++;
    }

    while(i<=n);
    printf("%d", sum);

}
