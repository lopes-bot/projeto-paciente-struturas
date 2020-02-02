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
int *f,*lst,*p;
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

    inserifila(f,tempo,nome);
}
    p = fila_pilha(f,tamanho);

    lst = pilha_lista(p);

    lstPrint(lst);
    cria_relatorio(lst);
    imprime_relatorio();




    return 0;
}
