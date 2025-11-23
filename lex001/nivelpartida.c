#include <stdio.h>

int main()
{
    float capEstadio, numTorcedores, porcentagem;

    printf("Qual a capacidade do estadio?\n");
    scanf("%f", &capEstadio);
    printf("Quantos torcedores apareceram no estadio?\n");
    scanf("%f", &numTorcedores);

    porcentagem = numTorcedores / capEstadio;

    if (porcentagem > 0.9)
    {
        printf("LOTADO!\n");
    }
    else if (porcentagem >= 0.7)
    {
        printf("Otima presenca de publico!\n");
    }
    else if (porcentagem >= 0.5)
    {
        printf("Publico razoavel!\n");
    }
    else
    {
        printf("Morumbis!\n");
    }
}