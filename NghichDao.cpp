#include <stdio.h>
int GCD(int a, int b)
{
    int r;
    if (b == 0)
        return a;
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int NghichDaoModule(int n, int p)
{
    int a = n, b = p;
    int q, r, x, y, x2 = 1, x1 = 0, y2 = 0, y1 = 1;
    while (b != 0)
    {
        q = a / b;
        r = a % b;
        a = b;
        b = r;
        x = x2 - q * x1;
        y = y2 - q * y1;
        x2 = x1;
        x1 = x;
        y2 = y1;
        y1 = y;
    }
    return x2;
}
int main()
{
    int n, p;
    printf("Nhap n , p : ");
    scanf("%d%d", &n, &p);
    if (GCD(n, p) != 1)
        printf("KHONG TON TAI n^-1 mod p !!");
    else
    {
        int x = NghichDaoModule(n, p);
        printf("n^-1 mod p = %d", x > 0 ? x : 0 - x);
    }
    return 0;
}