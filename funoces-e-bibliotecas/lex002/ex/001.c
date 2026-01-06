#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL));

    int mNumero1 = rand() % 60;
    int mNumero2 = rand() % 60;
    int mNumero3 = rand() % 60;
    int mNumero4 = rand() % 60;
    int mNumero5 = rand() % 60;
    int mNumero6 = rand() % 60;
    
    printf("====== MEGA DA VIDARA ======\n");
    printf("%d | %d | %d | %d | %d | %d\n", mNumero1, mNumero2, mNumero3, mNumero4, mNumero5, mNumero6);
    printf("============================");

    return 0;
}