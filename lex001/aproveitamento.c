#include <stdio.h>

int main()
{
    int pVitoria = 3, pEmpate = 1, pDerrota = 0, numVitoria, numDerrota, numEmpate, soma;

    printf("Voce teve quantas vitorias?:\n");
    scanf("%d", &numVitoria);

    printf("Voce teve quantos empates?:\n");
    scanf("%d", &numEmpate);

    printf("Voce teve quantas derrotas?:\n");
    scanf("%d", &numDerrota);

    soma = (pVitoria * numVitoria) + (pEmpate * numEmpate) + (pDerrota * numDerrota);

    printf("Voce obteve um total de %d pontos\n", soma);
}