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
int main()
{
    int m, n;
    printf("Nhap m, n : ");
    scanf("%d%d", &m, &n);
    printf("UCLN(%d, %d) = %d", m, n, GCD(m, n));
    return 0;
}