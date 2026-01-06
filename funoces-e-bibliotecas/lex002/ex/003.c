#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temp[6];

    printf("Qual temperatura esta fazendo agora em graus celcios?\n");
    scanf("%s", temp);

    float tempValor = atof(temp);

    printf(" A temperatura esta ");

    if (tempValor < 18)
    {
        printf("Esta frio");
    } else if (tempValor > 18 || tempValor < 26)
    {
        printf("Agradavel");
    } else
    {
        printf("Quente");
    }

    return 0;
}