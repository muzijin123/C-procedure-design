#include<stdio.h>

void swap(int * p1, int * p2);

int main()
{
  int a, b;
  int * pointer_1,* pointer_2;
  scanf("%d %d", &a, &b);
  if(a < b) swap(pointer_1, pointer_2);
  printf("\n%d %d\n", a, b);
}
void swap(int * p1, int * p2)
{
    int t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}

