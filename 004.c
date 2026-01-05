#include <stdio.h>
#include <string.h>

int main ()
{
    char nome[] = "Joao";
    char sobrenome[] = " Silva";

    strcat(nome, sobrenome);
    printf("Nome completo: %s\n", nome);

    printf("Tamanho: %d\n", strlen(nome));

    if(strcmp(nome, "Joaao Silva") == 0)
    {
        printf("Correto!");
    }else
    {
        printf("Nome incorreto");
    }

    return 0;
}