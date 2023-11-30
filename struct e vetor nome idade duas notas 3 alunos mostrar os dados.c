#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_aluno
{
    char nome[50];
    int idade;
    float notas[2];
};

int main()
{

    int i, j;
    setlocale(LC_ALL, "portugueses");

    struct dados_aluno aluno[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite seu nome:");
        gets(aluno[i].nome);
        printf("Digite sua idade:");
        scanf("%d", &aluno[i].idade);

        for (j = 0; j < 2; j++)
        {
            printf("Digite sua nota:");
            scanf("%f", &aluno[i].notas[j]);
        }
        fflush(stdin);
    }

    for (i = 0; i < 3; i++)
    {

        printf("\nNOME:%s\n", aluno[i].nome);
        printf("\nIDADE:%d\n", aluno[i].idade);
        printf("\nNOTAS:%.1f\n", aluno[i].notas[j]);
    }

    return 0;
}