#include <stdio.h>

void jogadorResultado(int media)
{
    if (media >= 9)
    {
        printf("Excelente");
    } else if (media >= 7 && media < 9)
    {
        printf("Boa");
    } else if (media >= 5 && media < 7)
    {
        printf("Regular");
    } else 
    {
        printf("Ruim");
    }
}

int main()
{
    float media, av1, av2, av3;

    for(int i = 0; i < 5; i++)
    {
        printf("===== Jogador %d =====\n", i + 1);
        printf("Digite as 3 notas: \n");
        scanf("%f %f %f", &av1, &av2, &av3);

        media = (av1 + av2 + av3) / 3;

        printf("A media do jogador esta: ");

        jogadorResultado(media);
        printf("\n");
    }
    
}