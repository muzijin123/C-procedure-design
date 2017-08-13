#include<stdio.h>

int main()
{
    int k, sum = 0, a = 0, b = 0, c = 0;
    for(k = 1;k <= 100;a = a + k, k++);
    for(k = 1;k <= 50;b = b + k * k, k++);
    for(k = 1;k <= 10;c = c + 1/k, k++);
    sum =a  + b + c;
    printf("%d ", sum);


}
