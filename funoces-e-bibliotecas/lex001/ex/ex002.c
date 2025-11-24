#include <stdio.h>

void exibirMenu()
{
    printf("==== MENU DE OPÇOES ====\n");
    printf("1 - Ver saldo\n");
    printf("1 - Fazer deposito\n");
    printf("1 - Fazer saque\n");
    printf("1 - Sair\n");
    printf("========================\n");
}

int main()
{
    exibirMenu();

    int opcao;

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    printf("Voce escolheu a opcao %d\n", opcao);
    return 0;
}