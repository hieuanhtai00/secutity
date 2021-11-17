#include <stdio.h>
int main()
{
    int a, p;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap p: ");
    scanf("%d", &p);
    int r = a;
    for (int i = 1; i < (p - 1) / 2; ++i)
    {
        r = (r * a) % p;
    }
    printf("Gia tri legendre cua a/p la : %d", r);
    return 0;
}