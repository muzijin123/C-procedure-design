#include<stdio.h>

int main()
{
    int a, b, c;
    int *p1, *p2, *p3;
    scanf("%d %d %d", &a, &b, &c);
    p1 = &a; p2 = &b; p3 = &c;
    if(a > b){
        p1 = &b;
        p2 = &a;
    }
    else{
        p1 = &a;
        p2 = &b;
    }
    if(p2 < c){
        p3 = &c;
    }
    else if(p1 < c)
    {
        p3 = p2;
        p2 = c;
    }
    else
        p1 = c;
    printf("%d %d %d", a, b, c);

}




