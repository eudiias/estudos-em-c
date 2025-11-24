#include <stdio.h>

int soma(int numero1, int numero2)
{
    return numero1 + numero2;
}

int main()
{
    printf("Resultado: %d\n", soma(3, 2));
    printf("Resultado: %d\n", soma(5, 5));
    printf("Resultado: %d\n", soma(10, 1));
    

    return 0;
}