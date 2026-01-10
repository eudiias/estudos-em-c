#include <stdio.h>

int main()
{
    int score[5] = {1000, 5001, 5001, 7000, 5099}, record = 5000;

    for (int i = 0; i < 5; i++)
    {
        printf("Score %d: %d\n", i + 1, score[i]);

        if (score[i] > record)
        {
            record = score[i];

            printf("Parabens! Score %d superou o record!\n", score[i]);
        }
    }

    return 0;
}