#include <stdio.h>

int main()
{
    int soma = 0, contador;
    printf("Digite um numero:");
    scanf("%d", &contador);

    for (int i = 1; i <= contador; i++)
    {
        soma = soma + i;
    }

    printf("A soma de 1 ate %d e: %d\n", contador, soma);

    return 0;
}