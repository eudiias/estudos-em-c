#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int fps[6], soma = 0, media = 0;

    srand(time(NULL));

    for (int i = 0; i < 6; i++)
    {
        fps[i] = rand() % 60;

        printf("Momento 1: %d\n", fps[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        soma += fps[i];
    }

    media = soma / 6;

    printf("\nMedia FPS: %d\n", media);

    return 0;
}