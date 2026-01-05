#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));
    int numero = rand() % 100; // Vai gerar um numero entre 0 e 99

    printf("Numero aleatorio: %d %d %d\n", numero);

    return 0;
}
