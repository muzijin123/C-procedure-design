#include<stdio.h>

int swap(int b[3][3]);

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    printf("array a:\n");
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 2; j++)
        {
               printf("%7d", a[i][j]);
        }
        printf("\n");
    }
    swap(a);
}
int swap(int b[3][3])
{
    int i, j, c[3][3];
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <=2; j++)
        {
            c[j][i] = b[i][j];
        }
    }
    printf("array b:\n");
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= 2; j++)
            printf("%7d", c[i][j]);
        printf("\n");
    }

}
