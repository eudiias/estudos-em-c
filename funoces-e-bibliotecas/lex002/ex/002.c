#include <stdio.h>
#include <stdlib.h>

int main()
{
    char idade[3];
    
    printf("Qual a sua idade?");
    scanf("%s", idade);

    int idadeValor = atoi(idade);

    printf("Idade: %d", idadeValor);

    return 0;
}