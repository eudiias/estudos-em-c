#include <stdio.h>

int main()
{
    int num, i, numPar = 2;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            
            printf("%d ", numPar);
            
            numPar = numPar + 2;
        }
        printf("\n");
    }

    return 0;
}