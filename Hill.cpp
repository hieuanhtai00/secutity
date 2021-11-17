#include <stdio.h>
#include <string.h>
char MaChu[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
void NhanMaTran(int a[2][2], int b[2][2], int c[2][2])
{
    c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    c[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
}
int main()
{
    char p[100];
    printf("Nhap ban ro (4 tu) : ");
    scanf("%s", p);
    strupr(p);
    fflush(stdin);
    int key[2][2];
    printf("Nhap ma tran khoa : ");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
            scanf("%d", &key[i][j]);
    }
    printf("\n");
    int hill[2][2];
    hill[0][0] = p[0] - 65;
    hill[0][1] = p[1] - 65;
    hill[1][0] = p[2] - 65;
    hill[1][1] = p[3] - 65;
    int c[2][2];
    NhanMaTran(hill, key, c);
    printf("Ma hoa : \n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%d ", c[i][j] % 26);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%c", c[i][j] % 26 + 65);
        }
    }
    return 0;
    /*int detA = hill[0][0] * hill[1][1] - hill[0][1] * hill[1][0];
    if (GCD(detA, 26) != 1)
    {
        printf("Khong ton tai khoa dao !");
        return 0;
    }
    int detAdao = NghichDaoModule(detA, 26);
    */
}