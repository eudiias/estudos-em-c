#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int fezinha[6] = {3, 5, 10, 55, 32, 68}, megasena[6], contador = 0;
    srand(time(NULL));

    printf("=== NUMEROS DA MEGA-SENA ===\n");

    for (int i = 0; i < 6; i++)
    {
        megasena[i] = rand() % 60 + 1;
        printf("Numero %d da mega sena: %d\n", i + 1, megasena[i]);
    }

    printf("=== RESULTADO DA MEGA-SENA ===\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (fezinha[i] == megasena[j])
            {
                printf("Numero acertado: %d\n", fezinha[i]);
                contador++;
            }
        }
    }

    printf("Total de acertos: %d", contador);   

    return 0;
}