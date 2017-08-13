#include<math.h>
#include<stdio.h>

int judge(int n);

int main()
{
    int x, y;
    scanf("%d", &x);
    y = judge(x);
    if(y == 0)
        printf("%d not is a prime", x);
}
int judge(int n)
{
    int i, k = 0, r = 0;
    k = sqrt(n);
    for(i = 2; i <= k; i++){
        r = n % i;
        if(r == 0)
            return 0;
    }
    return 1;
}
