#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main()
{

    setlocale(LC_ALL, "portugueses");

struct dados_pessoa
{
 char nome[50];
 int idade;
 float peso;
 float altura;
};

struct dados_pessoa pessoa;

printf("Digite seu nome:");
gets(pessoa.nome);

printf("Digite sua idade:");
scanf("%d", &pessoa.idade);

printf("Digite seu peso:");
scanf("%f", &pessoa.peso);

printf("Digite sua altura:");
scanf("%f", &pessoa.altura);

 printf("\n...........EXIBINDO DADOS..............");

printf("Nome:%s\n",pessoa.nome);
printf("Idade:%d\n",pessoa.idade);
printf("Peso:%.1f\n",pessoa.peso);
printf("Altura:%.2f\n",pessoa.altura);








    return 0;
}