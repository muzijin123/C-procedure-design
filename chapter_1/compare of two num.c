#include<stdio.h>

void main()
{
    int max(int x,int y);
    int a, b, c;
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    printf("max=%d a = %d b = %d\n",c, a, b);
}

int max(int x,int y)
{
    int z;
    if(x>y)
        z = x;
    else{
        z = y;
        printf("z = %d\n", z);
    }
    return(z);
}
