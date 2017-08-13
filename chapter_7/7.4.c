#include<stdio.h>

int main()
{
    int a[5] ={2, 4, 6, 8};
    int i, t, j, num;
    scanf("%d", &num);
   /* for(j = 0; j < 4; j++)
        for(i = 0;i < 4; i++)
            if(a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }*/
    for(i = 0; i < 5; i++)
        if(a[i] > num){
            j = i;
            break;
        }
    for(i = 3; i >= j; i--)
    {
        a[i+1] = a[i];
    }
    a[j] = num;
    for(i = 0;i < 5;i ++)
        printf("%d ", a[i]);
}
