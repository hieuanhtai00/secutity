#include <stdio.h>

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
    int b[10], m[10];
    printf("Nhap so luong cap dong du : ");
    int n, N = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d%d", &b[i], &m[i]);
        N = N * m[i];
    }
    int Ni, Mi;
    int x = 0;
    for (int i = 0; i < n; ++i)
    {
        Ni = N / m[i];
        Mi = NghichDaoModule(Ni, m[i]);
        x += b[i] * Ni * Mi;
    }
    if (x % N > 0)
    {
        x = x % N;
    }
    else
    {
        x = N + x % N;
    }

    printf("X = %d mod N", x);
    return 0;
}