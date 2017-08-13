#include<stdio.h>

void solve1(int x ,int y, int z);
int solve2(int x ,int y, int z);
void solve3(int x ,int y, int z);
void solve4(int x ,int y, int z);

int main()
{
   int a = 0, b = 0, c = 0;
   scanf("%d %d %d", &a, &b, &c);
   printf("a = %d b = %d c = %d\n", a, b, c);
   solve1(a, b, c);
   solve3(a, b, c);
   solve4(a, b, c);
}
void solve1(int x ,int y, int z)
{
    int m = 0, q = 0, p = 0, x1 = 0, x2 = 0;
    m = solve2(x, y, z);
    if(m > 0)
    {
        q = -y / (2 * x);
        p = sqrt(m) / (2 * x);
        x1 = q + p;
        x2 = q - p;
        printf("x1 = %d x2 = %d\n", x1, x2);
    }

}
void solve3(int x ,int y, int z)
{
    int m,q = 0;
    m = solve2(x, y, z);
    printf("m = %d\n", m);
    if(m == 0){
        q = -y / (2 * x);
        printf("x = %d\n", q);
    }
}
void solve4(int x ,int y, int z)
{
    int a, b, c, m;
    m = solve2(x, y, z);
    if (m < 0)
        printf("нч╫Б");
}

int solve2(int x ,int y, int z)
{
    int m, p;
    m = y * y - 4 * x *z;
    return m;
}
