#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number[10];

    printf("==== ESCOLHA DE NUMEROS ====\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &number[i]);
    }
    
    printf("==== Numeros Pares ====\n");
    
    for(int i = 0; i < 10; i++)
    {
        if(number[i] % 2 == 0){
        printf(" %d", number[i]);
        }
    }

    return 0;
}