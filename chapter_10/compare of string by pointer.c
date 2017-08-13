#include<stdio.h>

void exchange_string(char str1[],  char str2[], char str3[]);

int main()
{
    char str1[10], str2[10], str3[10];
    scanf("%s %s %s", str1, str2, str3);
    printf("%s %s %s\n",str1, str2, str3);
    char *a = str1, *b = str2, *c = str3;
    exchange_string(a, b, c);
}
void exchange_string(char str1[],  char str2[], char str3[])
{
    char *p_big, *p_small,*p_smallest;
    if(strcmp(str1, str2) > 0){
        p_big = str1;
        p_small = str2;
    }
    else{
        p_big = str2;
        p_small = str1;
    }
    if(strcmp(p_big, str3) < 0){
        p_smallest = p_small;
        p_small = p_big;
        p_big = str3;
    }
    else if(strcmp(p_small, str3) < 0){
        p_smallest = p_small;
        p_small = str3;
    }
    else
        p_smallest = str3;
    printf("%s %s %s", p_big, p_small, p_smallest);
}
