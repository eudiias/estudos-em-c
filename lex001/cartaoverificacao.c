#include <stdio.h>

int main()
{
    int qCartaoAmarelo;

    printf("Quantos cartoes amarelos o seu jogador recebeu no jogo de hoje?:\n");
    scanf("%d", &qCartaoAmarelo);

    if (qCartaoAmarelo >= 2)
    {
        printf("Seu Jogador foi expulso de campo hoje!\n");
    } 
    else
    {
        printf("Seu Jogador nao foi expulso de campo hoje!\n");
    }
}