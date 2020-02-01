#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <locale.h>
#include"paciente.h"
#include "lista.c"
#include "fila.h"
#include "fila.c"
#include "pilha.h"
#include "pilha.c"


int main()
{
int *f,*lst;
char nome[1000],aux[1000];
char tempo[1000];
int i,tamanho;
    f=criafila();
    lst = cria_lista();

   printf("insira a quantidade de pessoas que deseja cadastra\n");
    scanf("%i",&tamanho);
    fflush(stdin);
for (i=0;i<tamanho;i++){
    printf("inseri o nome do paciente:");
    gets(nome);
    fflush(stdin);
    printf("\n");
    printf("tempo:");
    gets(tempo);
    fflush(stdin);

    printf("\n");
    strcpy(aux," tempo:");
    strcat(aux,tempo);
    strcat(nome,aux);
    lstInsere(lst,nome);
   // inserifila(f,tempo,nome);
}
  cria_relatorio(lst);
  imprime_relatorio();

   //p=criapilha(tamanho);



   //printf("%s",aux);
   /*
for (i=0;i<tamanho;i++){

    strcpy(aux,retirafila(f));
    push(p,aux);

}*/
//strcpy(aux,retirafila(f));
//printf("%s",aux);
//imprimepilha(p);



    return 0;
}
