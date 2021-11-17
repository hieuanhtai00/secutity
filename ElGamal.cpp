#include <stdio.h>
#include <math.h>
int NhanBPMODULE(int a, int n, int p)
{
    int r = a;
    for (int i = 1; i < n; ++i)
    {
        r = (r * a) % p;
    }
    return r;
}
int main()
{
    int p, alpha, a, beta;
    printf("Nhap p (SNT) : ");
    scanf("%d", &p);
    printf("Nhap alpha : ");
    scanf("%d", &alpha);
    printf("Nhap khoa bi mat a : ");
    scanf("%d", &a);
    beta = NhanBPMODULE(alpha, a, p);
    if (beta < 0)
    {
        beta += p;
    }
    printf("K(Ke = (%d,%d,%d), Kd = %d)", p, alpha, beta, a);
    printf("\nNhap so ngau nhien k : ");
    int k;
    scanf("%d", &k);
    printf("Nhap ban ro can ma hoa : ");
    int x;
    scanf("%d", &x);
    int y1, y2;
    y1 = NhanBPMODULE(alpha, k, p);
    y2 = (x * NhanBPMODULE(beta, k, p)) % p;
    printf("\nEk(X) = (%d,%d)", y1, y2);
    return 0;
}