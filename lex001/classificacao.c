#include <stdio.h>

int main()
{
    int qGols, idade;

    printf("Quantos anos voce tem?:\n");
    scanf("%d", &idade);

    printf("Quantos gols seu jogador fez na temporada?:\n");
    scanf("%d", &qGols);

    if (idade <= 20 && qGols > 10)
    {
        printf("Jovem talento promissor!\n");
    } 
    else if (idade <= 20 && qGols <= 10)
    {
        printf("Jovem em desenvolvimento!\n");
    } 
    else if (idade > 20 && qGols > 15)
    {
        printf("Jogador experiente!\n");
    } else 
    {
        printf("Estevão\n");
    }
}