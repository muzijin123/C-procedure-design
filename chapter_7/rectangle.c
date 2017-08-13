#include<stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int sum;
    sum = a[0][1] + a[1][1] + a[2][2] +a[0][2] + a[2][0];
    printf("%d", sum);

}
