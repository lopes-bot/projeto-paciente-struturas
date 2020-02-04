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
char **vet;

};

Pilha* criapilha(int tamanho){
    Pilha* p= (Pilha*)malloc(sizeof(Pilha));
    int i;
    if (p==NULL){
        printf("erro pilha");
        exit(1);
    }
    p->dim = tamanho;
    p->vet = (char**)malloc(p->dim*sizeof(char*));
     if (p->vet==NULL){
        printf("erro pilha vet");
        exit(1);
    }
    for (i=0;i<tamanho;i++){
       p->vet[i] = (char*)malloc(1000*sizeof(char));
    }
    p->n=0;

    return p;

}

void push (Pilha* p, char paciente[]){

if(!isFull(p)){
   // p->vet[p->n][]= paciente;
    strcpy(p->vet[p->n],paciente);
    printf("%s adicionado a p->vet [%i]\n",p->vet[p->n],p->n);
    p->n++;
}else{
    printf("erro ao empilhar \n");
}


}

char pop (Pilha* p){

char v;
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
char top(Pilha* p){

char v=p->vet[p->n-1];
return v;

}
void libera (Pilha *p){
    int i;
for (i=p->n-1;i>=0;i--){

free(p->vet[i]);
}
free(p->vet);
free(p);
p=NULL;


}
void imprimepilha(Pilha *p){
int i;
printf("\n Imprimindo Pilha \n");
for (i=p->n-1;i>=0;i--){
    printf("vet[%i]=%s\n",i,p->vet[i]);

}
printf("NULL \n");

}
 Lista* pilha_lista(Pilha *p){// função que tranfere da pilha para lista

int i;
Lista* lst;
lst = cria_lista();
printf("inserindo elemento da pilha para lista \n");
for (i=p->n-1;i>=0;i--){
        printf("lstInsere_final recebe p->vet[%i]= %s \n",i,p->vet[i]);
       lstInsere_final(lst,p->vet[i]);
       // lstInsere_inicio(lst,p->vet[i]);
        //pop(p);

}

return lst;
}
