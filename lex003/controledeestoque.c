#include <stdio.h>

int main()
{
    int prodCas, i, qntdEstoque , qntdRec;
    char nomeProd[30];

    printf("Quantos produtos deseja cadastrar?: ");
    scanf("%d", &prodCas);

    printf("==== Cadastro de produtos ====\n");

    for (i = 0; i < prodCas; i++)
    {
        printf("---Produto %d---\nNome do produto: ", i + 1);
        scanf("%s", &nomeProd);

        printf("Quantidade em estoque: ");
        scanf("%d", &qntdEstoque);

        printf("estoque Minimo: ");
        scanf("%d", &qntdRec);

        if (qntdEstoque < qntdRec)
        {
            printf("-> O produto %c Precisa ser reposto! (Estoque: %d, Minimo: %d)\n", nomeProd, qntdEstoque, qntdRec);
        }

        if (qntdEstoque > qntdRec)
        {
            printf("-> O produto %c Tem estoque o suficiente! (Estoque: %d, Minimo: %d)\n", nomeProd, qntdEstoque, qntdRec);
        }
    }
    return 0;
}