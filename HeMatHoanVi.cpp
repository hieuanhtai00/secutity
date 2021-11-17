#include <stdio.h>
#include <string.h>
char MaChu[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main()
{
    char p[100];
    printf("Nhap ban ro : ");
    scanf("%s", p);
    strupr(p);
    fflush(stdin);
    int a[20], n;
    printf("Nhap do dai ma hoan vi : ");
    scanf("%d", &n);
    printf("Nhap ma hoan vi : ");
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    printf("\nBan ro:\n");
    for (int i = 0; p[i] != '\0'; ++i)
    {
        printf("%d ", p[i] - 65);
    }
    printf("\nBan ma:\n");
    int i = 0, j = n - 1;
    int left, right;
    while (j < strlen(p))
    {
        left = i;
        right = j;
        for (int k = left; k < right; ++k)
        {
        }
    }

    return 0;
}