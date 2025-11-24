#include <stdio.h>

int main()
{
    int cardapio;

    printf("===CARDAPIO===\n1 - Hamburguer\n2 - Cachorro-quente\n3 - Pizza\n4 - Sair\nEscolha: ");
    scanf("%d", &cardapio);

    switch (cardapio)
    {
        case 1:
            printf("Seu Hamburguer esta sendo preparado!\n");
            break;
        case 2:
            printf("Seu Cachorro-quente esta sendo preparado!\n");
            break;
        case 3:
            printf("Sua Pizza esta sendo preparado!\n");
            break;
        case 4:
            printf("Execucao encerrada!\n");
            break;
        
        default:
            printf("Opcao invalida!\n");
            break;
    }
}