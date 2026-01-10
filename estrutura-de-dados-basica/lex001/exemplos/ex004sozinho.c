#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int fezinha[6], resultado[6], i;
    srand(time(NULL));

    for (i = 0; i < 6; i++)
    {
        resultado[i] = rand() % 100;
    }

    for (i = 0; i < 6; i++)
    {
        printf("Qual seu %d palpite?: ", i + 1);
        scanf("%d", &fezinha[i]);
    }

    for (i = 0; i < 6; i++)
    {
        if (fezinha[i] == resultado[i])
        {
            printf("ACERTOU!!\n");
            printf("Fezinha: %d\n", fezinha[i]);
            printf("Resultado: %d\n", resultado[i]);

        } else {
            printf("Errou!!\n");
            printf("Fezinha: %d\n", fezinha[i]);
            printf("Resultado: %d\n", resultado[i]);
        }
    }
}