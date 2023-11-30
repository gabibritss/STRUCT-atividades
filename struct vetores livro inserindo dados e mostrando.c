#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct dados_livro
{
    char nome[100];
    char autor[100];
    char catego[100];
    float preco;
};

int main()
{
    int i;

    setlocale(LC_ALL, "portuguese");

    struct dados_livro livro[3];

    for (i = 0; i < 3; i++)
    {
        printf("\nDigite o nome:");
        gets(livro[i].nome);

        printf("\nDigite o nome do autor:");
        gets(livro[i].autor);

        printf("\nDigite a categoria do livro:");
        gets(livro[i].catego);

        printf("\nDigite o preço:");
        scanf("%f", &livro[i].preco);

        fflush(stdin);
    }
 for(i=0;i<3;i++){
    printf("\n--------EXIBINDO OS DADOS--------\n");
    printf("\nNOME:%s\n", livro[i].nome);
    printf("\nAUTOR:%s\n", livro[i].autor);
    printf("\nCATEGORIA:%s\n", livro[i].catego);
    printf("\nPREÇO:%.2f\n", livro[i].preco);
 }
    return 0;
}