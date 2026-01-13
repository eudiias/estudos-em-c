#include <stdio.h>

int main()
{
    int notas[3][2];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%d", &notas[i][j]);
        }
    }

    printf("\n==== NOTAS ====\n");

    for(int i = 0; i < 3; i++)
    {
        printf("ALUNO %d \n", i + 1);
        for(int j = 0; j < 2; j++)
        {
            printf("NOTA %d: %d\n", j + 1, notas[i][j]);
        }
    }

    return 0;
}