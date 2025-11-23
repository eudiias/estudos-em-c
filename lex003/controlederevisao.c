#include <stdio.h>

int main()
{
    int registroCarro, i;
    

    printf("Quantos carros pretende registrar?: ");
    scanf("%d", &registroCarro);

    printf("==== REGISTRO DE CARROS ====\n");

    for (i = 0; i < registroCarro; i++)
    {
        int anoFab, funcionamento;
        char modelo[50];

        printf("--- Carro %d ---\n", i + 1);

        printf("Qual o modelo do carro?: ");
        scanf("%s", &modelo);

        printf("Qual o ano de fabricacao do carro?: ");
        scanf("%d", &anoFab);

        printf("O carro esta funcionando normalmente? (1 = sim, 0 = nao): ");
        scanf("%d", &funcionamento);

        if (anoFab < 2005 && funcionamento == 0)
        {
            printf("O carro %s precisa de REPAROS URGENTES!\n", modelo);
        }
        else if (anoFab < 2005 && funcionamento == 1)
        {
            printf("O carro %s e antigo, recomenda-se uma revisao!\n", modelo);
        }
        else if (anoFab >= 2005 && funcionamento == 0)
        {
            printf("O carro %s precisa de manutencao!\n", modelo);
        }
        else
        {
            printf("O carro %s esta em boas condicoes!\n", modelo);
        }
    }

    return 0;
}