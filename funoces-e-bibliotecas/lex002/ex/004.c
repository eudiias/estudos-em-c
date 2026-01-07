#include <stdio.h>
#include <string.h>

int main()
{
    char nickJogador[50];
    char procura[] = "@#$%!";
    int total = 0;

    printf("Digite seu nick: "); 
    scanf("%s", nickJogador);

    printf("O seu nick tem %d caracteres\n", strlen(nickJogador));

    printf("Caracteres invalidos: ");

    for (int i = 0; i < strlen(nickJogador); i++)
    {
        for (int j = 0; j < strlen(procura); j++)
        {
            if (nickJogador[i] == procura[j])
            {
                printf("%c", procura[j]);

                total++;
            }
        }
    }

    if (total == 0)
    {
        printf("Nenhum encontrado");
    }
    
    printf("\n");

    if (total >= 1)
    {
        printf("Nick invalido! %d caractere(s) invalido(s) encontrado(s).\n", total);
    } else
    {
        printf("Nick valido, aproveite o jogo!");
    }

    
}