#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct dados_aluno
{
    char nome[50];
    float notas[3];
    float media;
};

float calcularmedia(struct dados_aluno aluno)
{
    int i;
    float somanotas = 0;
    for (i < 0; i < 3; i++)
    {
        somanotas += aluno.notas[i];
    }
    aluno.media = somanotas / i;
    return somanotas / i;
}

int main()
{

    struct dados_aluno aluno;
    int i;

    // solicitando dados pro usuario
    printf("Digite seu nome:");
    gets(aluno.nome);

    // solicitando as notas
    for (i < 0; i < 3; i++)
    {
        printf("Digite sua nota:");
        scanf("%f", &aluno.notas[i]);
    }
    // calculando media
    aluno.media = calcularmedia(aluno);

    // exibindo dados
    printf("\n Média: %.2f", aluno.media);

    return 0;
}