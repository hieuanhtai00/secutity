#include <stdio.h>
int main()
{
    printf("Nhap a : ");
    int a;
    scanf("%d", &a);
    printf("Nhap n : ");
    int n;
    scanf("%d", &n);
    printf("Nhap module p : ");
    int p;
    scanf("%d", &p);
    int r = a;
    for (int i = 1; i < n; ++i)
    {
        r = (r * a) % p;
    }
    printf("\nKet qua a^n mod p = %d", r);
    return 0;
}