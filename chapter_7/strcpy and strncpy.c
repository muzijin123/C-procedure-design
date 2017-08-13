#include<stdio.h>

int main()
{
    char str1[10] = "asdas";
    char str2[] = {"China"};
    strcpy(str1,str2);
    printf("%s",str1);

}
