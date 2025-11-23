#include <stdio.h>

int main()
{
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia)
    {
        case 1:
            printf("SEGUNDA-FEIRA\n");
            break;
        case 2:
            printf("TERÇA-FEIRA\n");
            break;
        case 3:
            printf("QUARTA-FEIRA\n");
            break;
        case 4:
            printf("QUINTA-FEIRA\n");
            break;
        case 5:
            printf("SEXTA-FEIRA\n");
            break;
        case 6:
            printf("SABADO\n");
            break;
        case 7:
            printf("DOMINGO\n");
            break;
        
        default:
            printf("Opcao invalidan\n");
    }
}