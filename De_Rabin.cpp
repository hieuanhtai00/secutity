#include <stdio.h>
#include <math.h>
int main()
{

    int p, q, n;
    printf("Nhap p,q(SNT) : ");
    scanf("%d%d", &p, &q);
    n = p * q;
    printf("K(Ke = %d , Kd = (%d , %d)\n", n, p, q);
    int C;
    printf("Nhap ban ma can giai ma C : ");
    scanf("%d", &C);
    printf("\nBan ro sau khi giai ma : ");
    for (int i = 1; i < n; ++i)
    {
        if ((i * i) % n == C)
            printf("%d ", i);
    }
    return 0;
}