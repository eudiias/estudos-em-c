#include <stdio.h>

int main()
{
    int verificaIdade;

    printf("Qual a idade do seu jogador?:\n");
    scanf("%d", &verificaIdade);

    if (verificaIdade > 20)
    {
        printf("Seu jogador nao pode jogar na categoria Sub-20.\nEle pode jogar apenas na profissional\n");
    } 
    else
    {
        printf("Seu Jogador foi liberado para jogar na categoria Sub-20!\n");
    }
}