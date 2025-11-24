#include <stdio.h>

int main()
{
    int coluna;

    printf("N - ");
    scanf("%d", &coluna);

    for (int i = 1; i <= coluna; i++)
    {
        for  (int j = 1; j <= coluna - i; j++)
        {
            printf(" ");  
        }
        
        for  (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");  
        }
        printf("\n");
    }
}