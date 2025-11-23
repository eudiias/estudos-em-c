#include <stdio.h>

int main()
{
    float mediaGols, numGols, numPartidas;

    printf("Quantas partidas ja jogou profissionalmente?:\n");
    scanf("%d", &numPartidas);

    printf("Quantos gols ja fez profissionalmente?\n");
    scanf("%d", &numGols);

    mediaGols = numGols / numPartidas;

    printf("A sua media de gols e: %.1f\n", mediaGols);
}