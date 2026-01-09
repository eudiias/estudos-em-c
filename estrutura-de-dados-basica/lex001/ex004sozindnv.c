#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int femega[6] = {5, 10, 29, 54, 32, 11}, megasena[6], acertos = 0;
    srand(time(NULL));

    printf("==== NUMEROS MEGA-SENA ====\n");

    for (int i = 0; i < 6; i++)
    {
        megasena[i] = rand() % 60 + 1;
        printf(" %d", megasena[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (megasena[i] == megasena[j])
            {
                megasena[i] = rand() % 60 + 1;
            }
        }
    }

    printf("\n==== NUMEROS DA SUA FE ====\n");

    for (int i = 0; i < 6; i++)
    {
        printf(" %d", femega[i]);
    }

    printf("\n==== RESULTADOS!! ====\n");

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (femega[i] == megasena[j])
            {
                printf("Voce acertou o numero: %d\n", femega[i]);
                acertos++;
            }
        }
    }

    printf("TOTAL DE ACERTOS: %d\n", acertos);

    if (acertos == 6)
    {
        printf("PARABENS, VOCE GANHOU O PREMIO TOTAL");
    } else if (acertos > 3 && acertos < 6)
    {
        printf("VOCE GANHOU METADE DO PREMIO");
    } else 
    {
        printf("VOCE NAO GANHOU O PREMIO");
    }



    return 0;
}