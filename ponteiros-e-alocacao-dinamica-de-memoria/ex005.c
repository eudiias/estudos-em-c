#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    int *vetor;

    printf("Qual sera o tamanho do seu vetor?");
    scanf("%d", &tamanho);

    vetor = (int *) calloc(tamanho, sizeof(int));

    if (vetor == NULL)
    {
        printf("Deu errado");

        return 1;
    } 
        for (int i = 0; i < tamanho; i++)
        {
            vetor[i] = i * 10;
        }

        printf("Vetor dinamico populado\n");

        for (int i = 0; i < tamanho; i++)
        {
            printf("%d\n", vetor[i]);
        }

        free(vetor);

    return 0;
}