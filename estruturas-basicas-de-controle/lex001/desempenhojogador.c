#include <stdio.h>

int main()
{
    int qGols;

    printf("Quantos gols seu jogador fez na temporada?:\n");
    scanf("%d", &qGols);

    if (qGols > 10)
    {
        printf("Temporada excelente!\n");
    } 
    else if (qGols <= 10 && qGols >= 5)
    {
        printf("Boa temporada!\n");
    } 
    else
    {
        printf("Temporada abaixo do esperado!\n");
    }
}