#include <stdio.h>
int main()
{
    int n;
    printf("Nhap so luong day sieu tang : ");
    scanf("%d", &n);
    int a[100];
    printf("Nhap day balo : ");
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &a[i]);
    }
    int hoanvi[100];
    printf("Nhap day hoan vi : ");
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &hoanvi[i]);
    }
    int m;
    printf("Nhap trong luong balo : ");
    scanf("%d", &m);
    int w;
    printf("Nhap W : ");
    scanf("%d", &w);
    int sl;
    printf("Nhap so luong nhi phan trong ban tin : ");
    scanf("%d", &sl);
    printf("Nhap ban tin can ma hoa (binary): ");
    int bin[100];
    for (int i = 1; i <= sl; ++i)
    {
        scanf("%d", &bin[i]);
    }
    int key[100];
    printf("\nKEY : ");
    for (int i = 1; i <= n; ++i)
    {
        key[i] = (w * a[hoanvi[i]]) % m;
        printf("%d ", key[i]);
    }
    int c = 0;
    printf("\nBan ma hoa : \n");
    for (int i = 1; i <= sl; ++i)
    {
        c += key[i] * bin[i];
    }
    printf("%d", c);
    return 0;
}