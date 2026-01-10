#include <stdio.h>

int main()
{
    int posicao[10], soma = 0, i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o numero da posicao %d: ", i + 1);
        scanf("%d", &posicao[i]);

        soma += posicao[i];
    }

    printf("Soma: %d", soma);

    return 0;
}