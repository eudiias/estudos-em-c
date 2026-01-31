#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, l, **matriz, soma;

    printf("Digite as dimensoes (EX: m n): ");
    scanf("%d %d", &c, &l);

    matriz = (int **) malloc (c * sizeof(int *));

    for(int i = 0; i < c; i++)
    {
        matriz[i] = (int *) malloc (l * sizeof(int));
        soma = 0;
        for (int j = 0; j < l; j++)
        {
            printf("Digite o indice %d da linha %d: ", j, i + 1);
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i, soma);
    }

    return 0;
}