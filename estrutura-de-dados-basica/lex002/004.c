#include <stdio.h>

int main()
{
    int matrizTransposta[3][2];

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Elemnto [%d][%d]: ", i, j);
            scanf("%d", &matrizTransposta[i][j]);
        }
    }

    printf("\n=== MATRIZ ORIGINAL ===\n");

    for (int i = 0; i < 3; i++)
    {
        printf("| ");
        for(int j  = 0; j < 2; j++)
        {
            printf("%d ", matrizTransposta[i][j]);
        }
        printf("|\n");
    }

    printf("\n=== MATRIZ TRANSPOSTA ===\n");

    for (int i = 0; i < 2; i++)
    {
        printf("| ");
        for(int j  = 0; j < 3; j++)
        {
            printf("%d ", matrizTransposta[j][i]);
        }
        printf("|\n");
    }

    return 0;
}