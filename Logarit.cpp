#include <stdio.h>

int main()
{
    int a, n, m;
    printf("Nhap module : ");
    scanf("%d", &n);
    printf("Nhap co so cua log : ");
    scanf("%d", &a);
    printf("Nhap so can tim log : ");
    scanf("%d", &m);
    int log[100];
    log[0] = 1;
    for (int i = 1; i < n; ++i)
    {
        log[i] = (log[i - 1] * a) % n;
    }
    printf("\nCac log co so %d cua %d mod N :\n", a, m, n);
    for (int i = 0; i < n; ++i)
    {
        if (log[i] == m)
            printf("%d ", i);
    }
    return 0;
}