#include<stdio.h>
#include<math.h>
void main()
{
    float p,r,h,l,s,s1,v,v1;
    p=3.14;
    scanf("%f,%f",&r,&h);
    l=2*p*r;
    s=p*r*r;
    s1=4*p*r*r;
    v=4.0/3.0*p*r*r*r;
    v1=p*r*r*h;
    printf("Բ���ܳ�=%.2f\n",l);
    printf("Բ�����=%.2f\n",s);
    printf("��ı����=%.2f\n",s1);
    printf("������=%.2f\n",v);
    printf("Բ�������=%.2f\n",v1);
}
