#include<stdio.h>
void main()
{
    int x = 0, y = 0;
    scanf("%d", &x);
    if(x<1)
        y=x;
    else if(x>=1&&x<10)
        y=2*x-1;
    else
        y=3*x-1;
    printf("x=%d,y=%d",x,y);
}
