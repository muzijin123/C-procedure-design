#include<stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d", &a);
    if(a>9999)
        b=5;
    else if(a>999)
        b=4;
    else if(a>99)
        b=3;
    else if(a>9)
        b=2;
    else
        b=1;
    printf("%d", b);

    return 0;
}
