#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <locale.h>
#include <stdbool.h>
#include"pilha.h"
#include "fila.h"

typedef struct pilha Pilha;

struct pilha{

int n;
int dim;
int*vet;

};

Pilha* criapilha(int tamanho){
    Pilha* p= (Pilha*)malloc(sizeof(Pilha));
    p->dim = tamanho;
    p->vet = (int*)malloc(p->dim*sizeof(char));
    p->n=0;
    return p;

}

void push (Pilha* p,int v){

if(!isFull(p)){
    p->vet[p->n]= v;
    p->n++;
}


}

float pop (Pilha* p){

float v;
if(isFull(p)){


    v = p->vet[p->n-1];
    p->n--;
    return v;
}


}
int isEmpty(Pilha* p){

if(p->n == 0){

return true;
}else{
return false;


}



}
int isFull(Pilha *p){


if(p->n == p->dim){
    return true;
}else{

return false;

}


}
float top(Pilha* p){

float v=p->vet[p->n-1];
return v;

}
void libera (Pilha *p){

free(p->vet);
free(p);
p=NULL;


}
void imprimepilha(Pilha *p){

int i;
printf("imprimindo pilha \n");
for (i=p->n-1;i>=0;i--){


    printf("%i \n",p->vet[i]);
    printf("%s \n",p->vet[i]);
}


}
 pilha_lista(Pilha *p){// função que tranfere da pilha para lista

int i,j;

int *lst;
lst= cria_lista();

for (i=0;i<p->dim;i++){

    lstInsere(lst,p->vet[i]);
     pop(p);

}

return lst;
}
