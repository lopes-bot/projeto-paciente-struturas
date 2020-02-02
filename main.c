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
char nome[1000];
char tempo[1000];
int i,tamanho;
    f=criafila();
    lst = cria_lista();


    printf("Insira a quantidade de pessoas que deseja cadastra\n");
    scanf("%i",&tamanho);
    fflush(stdin);

for (i=0;i<tamanho;i++){
    printf("Inseri o nome do paciente:");
    gets(nome);
    fflush(stdin);
    printf("TEMPO de Triagem:");
    gets(tempo);
    fflush(stdin);


    inserifila(f,tempo,nome);
}
    p = fila_pilha(f,tamanho);

    lst = pilha_lista(p);
    imprimefila(f);
    imprimepilha(p);
    lstPrint(lst);
    cria_relatorio(lst);
    imprime_relatorio();




    return 0;
}
