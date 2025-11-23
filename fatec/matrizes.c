#include <stdio.h>

int main()
{
    int l, c;
    float dv[3][10];

    for (l = 0; l < 3; l++)
    {
        for(c = 0; c < 9; c++)
        {
            if (l == 0)
            {
                dv[l][c] = (c+1) / (float)3;
            }
            if (l == 1)
            {
                dv[l][c] = (c+1) / (float)5;
            }
            if (l == 2)
            {
                dv[l][c] = (c+1) / (float)7;
            }
        }
    }

    for (l = 0; l < 3; l++)
    {
        for (c = 0; c < 9; c++)
        {
            
            printf("%.2f  ", dv[l][c]);
        }
    }
}