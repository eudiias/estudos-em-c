#include <stdio.h>

void nota(float resultado)
{
    if (resultado >= 6)
    {
        printf("Aprovado!");
    } else if (resultado >= 4 && resultado < 6)
    {
        printf("de Recuperacao");
    } else 
    {
        printf("Reprovado");
    }
}

int main()
{
    float notaAluno;

    printf("Qual a nota do aluno?: ");
    scanf("%f", &notaAluno);

    printf("O aluno esta: ");
    nota(notaAluno);
    printf("\n");

    return 0;
}