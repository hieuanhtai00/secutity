#include <stdio.h>
#include <string.h>
char MaChu[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main()
{
    int length;
    char c[100];
    printf("Nhap ban ma : "); // Nhap ban ma
    scanf("%s", c);
    strupr(c);
    char key[20];
    fflush(stdin);
    printf("Nhap key : ");
    scanf("%s", key); // Nhap key
    strupr(key);
    fflush(stdin);
    char p[200];        // Ban ro chua dc giai
    int count = 0;      // Do dai ban ro
    length = strlen(c); // Do dai ban ma
    printf("\nMA:\n");
    for (int i = 0; c[i] != '\0'; ++i)
    {
        printf("%d ", c[i] - 65);
    }
    printf("\nMa ban ro:\n"); // Tao ban ro
    int k = 0;
    for (int i = 0; key[i] != '\0'; ++i)
    {
        printf("%c", MaChu[(c[i] - key[i]) < 0 ? (c[i] - key[i] + 26) : (c[i] - key[i])]);
    }
    return 0;
}