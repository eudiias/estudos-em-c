#include <stdio.h>

int main()
{
    int opcao;
    float nota, freq;

    printf("===Verificacao de nota e frequencia===\n1 - Verificar se o aluno foi aprovado\n2 - Sair\nEscolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("===Cadastro de aluno===\nQual foi a nota do aluno?:");
            scanf("%f", &nota);
            printf("Qual a frequencia do aluno? (Em porcentagem!): ");
            scanf("%f", &freq);

            if (nota >= 7 && freq >= 75)
            {
                printf("ALUNO APROVADO!\n");
            }
            else 
            {
                printf("ALUNO REPROVADO!\n");
            }
        
        case 2:
            printf("Programa encerrado!");
            break;
        default:
            printf("Opcao invalida!");
    }
}