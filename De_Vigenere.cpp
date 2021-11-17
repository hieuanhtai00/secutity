#include <stdio.h>
#include <string.h>
char MaChu[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main()
{
    char khoa[100];
    char banro[100];
    int n, j;
    printf("Nhap ban ma : ");
    scanf("%s", banro);
    strupr(banro);
    fflush(stdin);
    printf("Nhap do dai khoa : ");
    scanf("%d", &n);
    fflush(stdin);
    printf("Nhap vao khoa k : ");
    scanf("%s", khoa);
    strupr(khoa);
    printf("\nMa van ban :\n");
    for (int i = 0; banro[i] != '\0'; ++i)
    {
        printf("%d ", banro[i] - 65);
    }
    printf("\n");
    for (int i = 0; banro[i] != '\0'; ++i)
    {
        if (j == n)
            j = 0;
        if (banro[i] - khoa[j] >= 0)
            printf("%d ", (banro[i] - khoa[j++]) % 26);
        else
            printf("%d ", (banro[i] - khoa[j++] + 26) % 26);
    }
    j = 0;
    printf("\n");
    for (int i = 0; banro[i] != '\0'; ++i)
    {
        if (j == n)
            j = 0;
        if (banro[i] - khoa[j] >= 0)
            printf("%c", MaChu[(banro[i] - khoa[j++]) % 26]);
        else
            printf("%c", MaChu[(banro[i] - khoa[j++] + 26) % 26]);
    }
    return 0;
}