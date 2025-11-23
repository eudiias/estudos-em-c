#include <stdio.h>

int main()
{
    int pontos, adicao, contador = 0;

    printf("Digite 0 para comecar o jogo: ");
    scanf("%d", &pontos);

    while (pontos <= 100)
    {
        printf("Quantos pontos fez nessa rodada? (1 - 10): ");
        scanf("%d", &adicao);

        pontos = pontos + adicao;
        contador++;
    }

    printf("Foram necessarias %d rodadas para chegar a meta!\n", contador);
    


}