#include <stdio.h>
#include <string.h>
char MaChu[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main()
{
    char p[100];
    int k;
    printf("Nhap ban ro : ");
    scanf("%s", p);
    strupr(p);
    printf("Nhap khoa K : ");
    scanf("%d", &k);
    printf("\n");
    for (int i = 0; p[i] != '\0'; ++i)
    {
        printf("%d ", p[i] - 65);
    }
    printf("\n");
    for (int i = 0; p[i] != '\0'; ++i)
    {
        printf("%d ", (p[i] + k - 65) % 26);
    }
    printf("\n");
    for (int i = 0; p[i] != '\0'; ++i)
    {
        printf("%c", MaChu[(p[i] + k - 65) % 26]);
    }
    return 0;
}