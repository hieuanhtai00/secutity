#include <stdio.h>
int main()
{
    int a, p;
    printf("Nhap a,p : ");
    scanf("%d%d", &a, &p);
    for (int i = 1; i < p; ++i)
    {
        if ((i * i) % p == a)
            printf("%d ", i);
    }
    return 0;
}