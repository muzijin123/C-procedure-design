#include<stdio.h>

int main()
{
    int x = 0, y = 0;
    scanf("%d", &x);
    if(x >= 90)
        y = 'A';
    else if(x >= 80 && x <= 89)
        y = 'B';
    else if(x >= 70 && x <= 79)
        y = 'C';
    else if(x >= 60 && x <= 69)
        y = 'D';
    else
        y = 'E';
    printf("%c", y);

    return 0;
}
