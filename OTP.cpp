#include <stdio.h>
#include <string.h>
char MaChu[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main()
{
    int a, b;
    char p[100], key[100];
    printf("Nhap ban ro otp : ");
    scanf("%s", p);
    fflush(stdin);
    strupr(p);
    printf("Nhap khoa otp : ");
    scanf("%s", key);
    strupr(key);
    printf("\n");
    for (int i = 0; p[i] != '\0'; ++i)
        printf("%d ", p[i] - 65);
    printf("\n");
    for (int i = 0; key[i] != '\0'; ++i)
        printf("%d ", key[i] - 65);
    printf("\nMa hoa:\n");
    for (int i = 0; p[i] != '\0'; ++i)
    {
        printf("%d ", ((p[i] - 65) ^ (key[i] - 65)) % 26);
    }
    printf("\n");
    for (int i = 0; p[i] != '\0'; ++i)
    {
        printf("%c", MaChu[(p[i] - 65) ^ (key[i] - 65) % 26]);
    }
    return 0;
}