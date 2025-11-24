#include <stdio.h>

float mediaNumeros(float numero1, float numero2)
{
    float media = (numero1 + numero2) / 2;

    return media;
}

int main()
{
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("A media desses dois numeros e %.2f\n", mediaNumeros(num1, num2));

    return 0;
}