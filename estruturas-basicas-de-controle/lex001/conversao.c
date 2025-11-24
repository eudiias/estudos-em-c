#include <stdio.h>

int main()
{
    float tempoJogado, conversao;

    printf("Ate o momento voce viu quantos minutos de partiada?:\n");
    scanf("%f", &tempoJogado);

    conversao = tempoJogado / 60;

    printf("Voce assistiu %.2f horas de partida\n", conversao);
}