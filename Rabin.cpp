#include <stdio.h>
#include <math.h>

int main()
{
    int p, q, n;
    printf("Nhap p,q(SNT) : ");
    scanf("%d%d", &p, &q);
    n = p * q;
    printf("K(Ke = %d , Kd = (%d , %d)\n", n, p, q);
    int P;
    printf("Nhap ban ro can ma hoa : ");
    scanf("%d", &P);
    printf("Ban ro sau khi ma hoa : %d", (P * P) % n);
    return 0;
}