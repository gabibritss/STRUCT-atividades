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
 char endereco[100];
};

struct dados_pessoa pessoa;

printf("Digite seu nome:");
gets(pessoa.nome);

printf("Digite sua idade:");
scanf("%d", &pessoa.idade);

printf("Digite seu endere�o:");
scanf("%s", &pessoa.endereco);




  printf("\n...........EXIBINDO DADOS..............");

printf("\nNome:%s\n",pessoa.nome);
printf("Idade:%d\n",pessoa.idade);
printf("Endere�o:%s\n",pessoa.endereco);


return 0;
}