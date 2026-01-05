#include <stdio.h>
#include <stdlib.h>

int main ()
{

    char texto[] = "123.4";
    
    int valor = atof(texto);

    printf("Convertido %d\n", valor);

    return 0;
}