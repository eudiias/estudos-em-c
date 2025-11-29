#include <stdio.h>

int maiorNumero(int numero1, int numero2, int numero3)
{
    if (numero1 > numero2 && numero1 > numero3)
    {
        return numero1;
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {
        return numero2;
    }
    else
    {
        return numero3;
    }
}

int main()
{
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("O maior numero dentre os digitados e: %d\n", maiorNumero(num1, num2, num3));

    return 0;
}