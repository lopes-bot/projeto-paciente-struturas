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
#include <conio.h>



int main()
{
Pilha *p;
Fila* f;
Lista* l;
f = criafila();
char *nome;
char *tempo;
nome = (char*)malloc(1000*sizeof(char));
tempo = (char*)malloc(1000*sizeof(char));
int i, tamanho,controle,menu,cont;
controle = 0;
do{
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
          l = pilha_lista(p);
          cria_relatorio(l);
do{
  printf("1-imprime fila \n2 -imprime pilha \n3-imprime lista \n4-imprime relatorio \n5- limpar tela");
scanf("%i",&menu);
switch (menu){

        case 1:

            imprimefila(f);
            break;
        case 2:

            imprimepilha(p);
            break;
        case 3:

            lstPrint(l);
            break;
        case 4:
           printf("Relatorio \n");
            imprime_relatorio();
            break;
        case 5:
            system("cls");
            break;

}
printf("deseja continuar digite 0  ou  digite qualquer valor para encerra\n");
scanf("%i",&cont);
}  while(cont==0);


printf("deseja encerra digite 0\n");
scanf("%i",&controle);
}while(controle != 0);


    return 0;
}
