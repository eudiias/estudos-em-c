#include <stdio.h>
#include <stdlib.h>

void invercao(int *vetor, int tamanho)
{
    int temp;

    for (int i = 0; i < tamanho / 2; i++)
    {
        temp = vetor[i];
        vetor[i] = vetor[tamanho - 1 - i];
        vetor[tamanho - 1 - i] = temp;
    }
}

int main()
{
    int tamanho;
    int *intVetor;

    printf("Qual o tamanho do vetor?: ");
    scanf("%d", &tamanho);

    intVetor = (int*) malloc(tamanho * sizeof(int));

    if (intVetor == NULL)
    {
        printf("ERRO");
        return 1;
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("Qual vai ser o indice %d: ", i);
        scanf("%d", &intVetor[i]);
    }

    printf("\n==== Valores dos indices do vetor ====\n");

    printf("[ ");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", intVetor[i]);
    }
    printf("]");

    printf("\n==== Valores do vetor Invertidos ====\n");

    invercao(intVetor, tamanho);

    printf("[ ");

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", intVetor[i]);
    }

    printf("]");

    free(intVetor);

    return 0;
}