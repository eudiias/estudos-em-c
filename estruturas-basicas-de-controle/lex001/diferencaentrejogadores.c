#include <stdio.h>

int main()
{
    float salarioJ1, salarioJ2, diferenca;

    printf("Qual o salario do jogador 1?:\n");
    scanf("%f", &salarioJ1);

    printf("Qual o salario do jogador 2?:\n");
    scanf("%f", &salarioJ2);

    if (salarioJ1 > salarioJ2)
    {
        diferenca = salarioJ1 - salarioJ2;
    } else
    {
        diferenca = salarioJ2 - salarioJ1;
    }

    printf("A diferenca entre os salarios e de %.2f R$\n", diferenca);
}