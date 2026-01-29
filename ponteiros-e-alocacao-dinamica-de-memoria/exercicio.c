#include <stdio.h>
#include <stdlib.h>

void invercao(int *vetor, int tamanho)
{
    tamanho = tamanho - 1;

    for (int i = tamanho; i > 0 / 2; i--)
    {
        printf("%d", vetor[i]);
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

    printf("[ ");

    invercao(intVetor, tamanho);

    printf("]");



    return 0;
}