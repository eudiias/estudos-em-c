#include <stdio.h>

int main()
{
    int numT, i;
    printf("Voce quer ver a tabuada de qual numero?: ");
    scanf("%d", &numT);

    printf("\n==== Tabuada do %d ====\n", numT);

    for(i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", numT, (i + 1), (numT * i));
    }

    return 0;
}