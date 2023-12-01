#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados_usuario
{
    char nome[100];
    char datanasci[200];
    int rg;
    int cpf;
};

int main()
{
    int i;
    struct dados_usuario usuario[5];

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite seu nome:");
        gets(usuario[i].nome);
       
        printf("\nDigite sua data de nascimento:");
        gets(usuario[i].datanasci);
       
        printf("\nDigite seu CPF:");
        scanf("%d", &usuario[i].cpf);
       
        printf("\nDigite seu RG:");
        scanf("%d", &usuario[i].rg);
       
        fflush(stdin);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nNOME:%s", usuario[i].nome);
        
        printf("\nDATA DE NASCIMENTO:%s", usuario[i].datanasci);
      
        printf("\nRG:%d", usuario[i].rg);
       
        printf("\nCPF:%d", usuario[i].cpf);
    }
 
    return 0;
}