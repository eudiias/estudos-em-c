#include <stdio.h>

int main()
{
    char nome[15];
    int gols, idade;

    printf("Qual o seu primeiro nome?:\n");
    scanf("%s", &nome);

    printf("Quantos anos voce tem?:\n");
    scanf("%d", &idade);

    printf("Quantos gols ja fez na sua carreira?:\n");
    scanf("%d", &gols);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Gols: %d\n", gols);
}