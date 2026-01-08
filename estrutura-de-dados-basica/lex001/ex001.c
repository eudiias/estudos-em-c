#include <stdio.h>

int main()
{
    int notas[5] = {10, 5, 8, 9, 4};

    printf("%d\n", notas[0]);
    printf("%d\n", notas[1]);
    printf("%d\n", notas[2]);
    printf("%d\n", notas[3]);
    printf("%d\n", notas[4]);

    for (int i = 0; i < 5; i++)
    {
        printf("indice %d: %d\n", i + 1, notas[i]);
    }

    return 0;
}