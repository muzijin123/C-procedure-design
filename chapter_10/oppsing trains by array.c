#include<stdio.h>

void inv(int x[], int n);

int main()
{
   int i, a[10] = {3, 5, 9, 10, 15, 17, 6, 1, 2, 8};
   printf("The original array:\n");
   for(i = 0; i < 10; i++)
    printf("%d ", a[i]);
    printf("\n");
   inv(a,10);
   printf("The array has been inverted:\n");
   for(i = 0; i < 10; i++)
    printf("%d ", a[i]);
   printf("\n");
}
void inv(int x[], int n)
{
    int term, i, j, m = (n - 1) / 2;
    for (i = 0; i < m; i++)
    {
        j = n - 1 - i;
        term = x[i]; x[i] = x[j]; x[j] = term;
    }
    return;

}
