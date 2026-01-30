#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;
    float *vetor, soma, media;

    printf("Qual sera o tamanho do vetor?: ");
    scanf("%d", &tamanho);

    vetor = (float *) malloc(tamanho * sizeof(int));

    if (vetor == NULL)
    {
        printf("ERRO ERRO ERRO ERRO ERRO ");
        
        return 1;
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("Qual o indice %d: ", i);
        scanf("%f", &vetor[i]);

        soma += vetor[i];
    }

    media = soma / tamanho;

    printf("\n==== MEDIA ====\n");
    printf("[ %.2f ]", media);
}