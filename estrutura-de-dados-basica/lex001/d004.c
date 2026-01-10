#include <stdio.h>
#include <string.h>

int main()
{
    char letra, nomes[5][20] = {"Carlos", "Maria", "Julie", "Eduarda", "Paulo"};

    printf("Qual letra?: ");
    scanf(" %c", &letra);

    printf("=== NOMES ===\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < strlen(nomes[i]); j++)
        {
            if (nomes[i][j] == letra)
            {
                printf("%s ", nomes[i]);
                break;
            }
        }
    }

    return 0;
}