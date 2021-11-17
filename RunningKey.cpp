#include <stdio.h>
#include <string.h>
char MaChu[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int main()
{
    char p[100];
    printf("Nhap ban ro : ");
    scanf("%s", p);
    strupr(p);
    char key[20];
    fflush(stdin);
    printf("Nhap key : ");
    scanf("%s", key);
    fflush(stdin);
    char sumkey[200];
    strupr(key);
    int count = 0;
    int j = 0;
    int i = 0;
    printf("\nBan ro : \n");
    for (int k = 0; p[k] != '\0'; ++k)
    {
        printf("%d ", p[k] - 65);
    }
    while (key[i] != '\0')
    {
        sumkey[count++] = key[i++];
    }
    while (p[j] != '\0')
    {
        sumkey[count++] = p[j++];
    }
    sumkey[count] = '\0';
    printf("\nKhoa tu sinh : \n");
    for (int k = 0; p[k] != '\0'; ++k)
    {
        printf("%d ", sumkey[k] - 65);
    }
    printf("\nMa hoa : \n");
    for (int k = 0; p[k] != '\0'; ++k)
    {
        printf("%d ", (sumkey[k] - 65 + p[k] - 65) % 26);
    }
    printf("\nBan ma hoa : \n");
    for (int k = 0; p[k] != '\0'; ++k)
    {
        printf("%c", MaChu[(sumkey[k] - 65 + p[k] - 65) % 26]);
    }
    return 0;
}