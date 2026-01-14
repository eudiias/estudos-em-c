#include <stdio.h>

int main()
{
    int soma = 0, matrizDiagonal[4][4] = {
        {4, 5, 9, 0},
        {7, 8, 3, 2},
        {6, 0, 9, 10},
        {8, 5, 3, 2}
    };

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                soma += matrizDiagonal[i][j];
            }
        }
    }

    printf("%d", soma);

    return 0;
}