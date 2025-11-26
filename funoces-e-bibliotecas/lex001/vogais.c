#include <stdio.h>

int contagemVogais(char palavraFunc[])
{
    int contador = 0;
    for (int i = 0; palavraFunc[i] != '\0'; i++)
    {
        if (palavraFunc[i] == 'a' || palavraFunc[i] == 'e' || palavraFunc[i] == 'i' || palavraFunc[i] == 'o' || palavraFunc[i] == 'u') 
        {
            contador++;
        }
    }
    return contador;
}

int main()
{
    char palavra[20];

    printf("Digite uma plavra: ");
    scanf("%s", palavra);

    printf("A palavra tem %d vogais\n", contagemVogais(palavra));

    return 0;
}