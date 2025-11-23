#include <stdio.h>

int main()
{
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}