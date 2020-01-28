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
int *f;
char nome[1000];
char tempo[1000];
int i,tamanho;

    f=criafila();
    printf("insira a quantidade de pessoas que deseja cadastra\n");
    scanf("%i",&tamanho);
    fflush(stdin);
for (i=0;i<tamanho;i++){
    printf("inseri o nome do paciente:");
    gets(nome);
    fflush(stdin);
    printf("\n");
    printf("o tempo:");
    gets(tempo);
    fflush(stdin);
    printf("\n");
    inserifila(f,tempo,nome);
}
   imprimefila(f);
    retirafila(f);
   imprimefila(f);


    return 0;
}
