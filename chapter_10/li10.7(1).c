#include<stdio.h>

void inv(int *x, int n);

int main()
{
    int i, a[10] = {12, 23, 52, 26, 96, 74, 85, 98, 41, 15};
    printf("The original array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
    inv(a, 10);
    printf("The array has been inverted:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
}
void inv(int *x, int n)
{
    int *p, term, *i, *j, m = (n - 1) / 2;
    i = x; j = x + n - 1; p = x + m;
    for(; i <= p; i++, j--)
    {
        term = *i;
        *i = *j;
        *j = term;
    }


}
