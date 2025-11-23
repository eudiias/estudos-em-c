#include <stdio.h>

int main()
{
    int palpite;

    do
    {
        printf("Escreva seu palpite: ");
        scanf("%d", &palpite);
    } while (palpite != 7);

    printf("Voce venceu!\n");


}