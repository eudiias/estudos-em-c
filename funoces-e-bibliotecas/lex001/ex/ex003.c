#include <stdio.h>

int imparPar(int num)
{
    if (num % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (imparPar(num))
    {
        printf("Numero par!\n");
    }
    else 
    {
        printf("Numero impar!\n");
    }

    return 0;
}