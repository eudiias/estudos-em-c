#include <stdio.h>

int main()
{
    float agencia[2][3], arrecadacao = 0;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Agencia %d, dia %d: ", i + 1, j + 1);
            scanf("%f", &agencia[i][j]);

            arrecadacao = arrecadacao + agencia[i][j];
            printf("\n");
        }
    }

    printf("Total arrecadado: %.2f", arrecadacao);

    return 0;
}