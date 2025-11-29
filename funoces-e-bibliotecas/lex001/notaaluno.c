#include <stdio.h>

// Feito com ajuda, voltarei amanha ou depois de amanhã para refazer.

void notaAluno(int notaDoAluno)
{
    if (notaDoAluno >= 6)
    {
        printf("Aprovado");
    }
    else if (notaDoAluno >= 4 && notaDoAluno < 6)
    {
        printf("em Recuperacao");
    } else
    {
        printf("Reprovado");
    }
}

int main()
{
    float nota;

    printf("Digite o primeiro numero: ");
    scanf("%f", &nota);

    notaAluno(nota);
    printf("\n");

    return 0;
}