#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, l, **vetor;

    printf("Digite as dimensoes (EX: m n): ");
    scanf("%d %d", &c, &l);

    vetor = (int **) malloc (c * sizeof(int *));

    int soma[c];

    for(int i = 0; i < c; i++)
    {
        soma[i] = 0;
    }

    for(int i = 0; i < c; i++)
    {
        vetor[i] = (int *) malloc (l * sizeof(int));
        for (int j = 0; j < l; j++)
        {
            printf("Digite o indice %d da coluna %d: ", j, i + 1);
            scanf("%d", &vetor[i][j]);

            soma[i] = soma[i] + vetor[i][j];
        }
    }

    printf("\n==== SOMA DE CADA LINHA DO VETOR ====\n");

    for(int i = 0; i < c; i++)
    {
        printf("| Linha %d: %d |\n", i + 1, soma[i]);
    }

    return 0;
}