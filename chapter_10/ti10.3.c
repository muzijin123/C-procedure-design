#include<stdio.h>

void get(int b[10]);
void compare_swap(int b[10]);
void put(int b[10]);

int main()
{
    int a[10];
    get(a);
    compare_swap(a);
    put(a);
}
void get(int a[10])
{
    int i;
    for(i = 0; i <10; i++)
        scanf("%d", &a[i]);
}
void compare_swap(int b[10])
{
    int *max, *min, *p, *q;
    *max = *min = b;
    *q = b + 10;
    for(p = b + 1; p < b + 10;p++)
    {
        if(*p > *max)max = p;
        else if(*p < *min)min = p;
    }
    *p = b;
    max = p;
    *p = b;
    min = p;
    return;
}
void put(int b[10])
{
    int *p;
    for(p = b;p <= 9;p++)
        printf("%d",b[10]);
}
