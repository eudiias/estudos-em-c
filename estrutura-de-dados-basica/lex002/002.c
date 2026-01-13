#include <stdio.h>

int main()
{
    float notas[3][4], media, soma = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("\n==== ALUNO %d ====\n", i + 1);
        for(int j = 0; j < 4; j++)
        {
            printf("aluno %d, nota %d: ", i + 1, j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }

        media = soma / 4;

        printf("\nMedia do aluno %d: %.2f\n", i + 1, media);
    }

    return 0;
}