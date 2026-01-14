#include <stdio.h>

int main()
{
    int matrizIdentidade[4][4];

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                matrizIdentidade[i][j] = 1;
            } else
            {
                matrizIdentidade[i][j] = 0;
            }

            printf("%d  ", matrizIdentidade[i][j]);
        }
        printf("\n");
    }

    return 0;
}