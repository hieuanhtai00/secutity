#include <stdio.h>
#include <string.h>
char MaChu[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main()
{
    char c[100];
    printf("Nhap ban ma : ");
    scanf("%s", c);
    int k;
    printf("Nhap khoa giai ma K : ");
    scanf("%d", &k);
    printf("\n");
    for (int i = 0; c[i] != '\0'; ++i)
        printf("%d ", c[i] - 65);
    printf("\n");
    for (int i = 0; c[i] != '\0'; ++i)
    {
        if (c[i] - 65 - k < 0)
        {
            printf("%d ", c[i] - 65 - k + 26);
        }
        else
            printf("%d ", c[i] - 65 - k);
    }
    printf("\n");
    for (int i = 0; c[i] != '\0'; ++i)
    {
        if (c[i] - 65 - k < 0)
        {
            printf("%c", MaChu[c[i] - 65 - k + 26]);
        }
        else
            printf("%c", MaChu[c[i] - 65 - k]);
    }
    return 0;
}