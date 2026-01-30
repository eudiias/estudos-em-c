#include <stdio.h>

int soma(int *valorUm, int *valorDois)
{
    int soma = *valorUm + *valorDois;

    return soma;
}

int main()
{
    int vUm, vDois;

    printf("Qual o primeiro numero?: ");
    scanf("%d", &vUm);
    printf("Qual o segundo numero?: ");
    scanf("%d", &vDois);

    printf("\n=== Resultado ===\n");

    printf("[ %d ]", soma(&vUm, &vDois));

    return 0;
}