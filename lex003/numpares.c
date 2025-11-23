#include <stdio.h>

int main()
{
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Numeros pares de 1 ate %d:\n", num);

    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}