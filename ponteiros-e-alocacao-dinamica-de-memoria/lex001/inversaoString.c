#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void inverteString(char *string)
{
    int tamanho = strlen(string), temp;

    for (int i = 0; i < tamanho / 2; i++)
    {
        temp = string[i];
        string[i] = string[ tamanho - 1 - i];
        string[tamanho - 1 - i] = temp;
    }
}

int main()
{
    char *string = (char *) malloc(100 * sizeof(char));

    printf("Escreva algo: ");
    scanf("%s", string);

    printf("\n==== NORMAL ====\n");

    printf("Palavra normal: %s\n", string);

    inverteString(string);

    printf("\n==== Invertida ====\n");

    printf("Palavra invertida: %s\n", string);

    return 0;
}