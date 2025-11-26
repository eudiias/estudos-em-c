//Esperei dois dias para refazer a atividade, a ultima vez que tentei precisei de ajuda.

#include <stdio.h>

int contagemVogais(char numVogais[])
{
    int contador = 0;

    for (int i = 0; numVogais[i] != '\0'; i++)
    {
        if (numVogais[i] == 'a' || numVogais[i] == 'e' || numVogais[i] == 'i' || numVogais[i] == 'o' || numVogais[i] == 'u')
        {
            contador++;
        }
    }

    return contador;
}

int main()
{
    char palavra[20];

    printf("Qual palavra deseja digitar?: ");
    scanf("%s", palavra);

    printf("O numero de vogais da sua frase e: %d\n", contagemVogais(palavra));

    return 0;
}