#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dano[4], maior = 0;

    srand(time(NULL));

    for (int i = 0; i < 4; i++)
    {
        dano[i] = rand() % 100;
        printf("Ataque %d: %d\n", i + 1, dano[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        if (dano[i] > maior)
        {
            maior = dano[i];
        }
    }

    printf("Maior dano: %d", maior);

    return 0;
}