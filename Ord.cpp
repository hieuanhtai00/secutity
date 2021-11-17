#include <stdio.h>
#include <math.h>
int main()
{
    int a, t, G;
    printf("Nhap vao gia tri cua a : ");
    scanf("%d", &a);
    printf("Nhap vao module G :");
    scanf("%d", &G);
    for (int i = 1; i < 100000; ++i)
    {
        t = (int)pow(a, i) % G;
        if (t == 1)
        {
            printf("Ord(a) = %d", i);
            return 0;
        }
    }
    printf("Khong tim thay !");
    return 0;
}