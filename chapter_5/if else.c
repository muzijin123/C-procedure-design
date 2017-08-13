#include<stdio.h>
void main()
{
    float a, b, c, s, area;
    scanf("%f %f %f",&a, &b, &c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        s=0.5*(a+b+c);
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("area=%6.2f", area);
    }
    else
        printf("NO");

}
