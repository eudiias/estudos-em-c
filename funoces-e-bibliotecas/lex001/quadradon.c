#include <stdio.h>

void quadrado(int n, char caracterQuadrado)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%c ", caracterQuadrado);
        }
        printf("\n");
    }
}

int main()
{
    int tamanho;
    char caracter;

    printf("Qual sera o tamanho do quadrado?: ");
    scanf("%d", &tamanho);
    printf("Qual caractere sera utilizado: ");
    scanf(" %c", &caracter);

    quadrado(tamanho, caracter);
}