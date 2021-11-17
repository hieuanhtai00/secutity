#include <stdio.h>
#include <math.h>
int EulerFunction(int n)
{
    int phi = 1;
    int count;
    for (int i = 2; i <= n; ++i)
    {
        count = 0;
        while (n % i == 0)
        {
            n /= i;
            ++count;
        }
        phi *= ((int)pow(i, count) - (int)pow(i, count - 1));
    }
    return phi;
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
    if (x2 % p < 0)
    {
        x2 = x2 % p + p;
    }
    else
        x2 = x2 % p;
    return x2;
}
int main()
{
    int p, q, n, e, d;
    printf("Nhap p,q(SNT) : ");
    scanf("%d%d", &p, &q);
    n = p * q;
    printf("Nhap e (gcd_n = 1) : ");
    scanf("%d", &e);
    d = NghichDaoModule(e, EulerFunction(n));
    printf("K(Ke = (%d , %d) , Kd = %d)\n", n, e, d);
    int C;
    printf("Nhap ban ma can giai ma : ");
    scanf("%d", &C);
    int r = C;
    for (int i = 1; i < d; ++i)
    {
        r = (r * C) % n;
    }
    printf("Ban ro sau khi ma hoa : %d", r);
    return 0;
}