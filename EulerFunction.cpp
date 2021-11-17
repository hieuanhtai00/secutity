#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Nhap n : ");
    scanf("%d", &n);
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
    printf("Phi(N) : %d", phi);
    return 0;
}