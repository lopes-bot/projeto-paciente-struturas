#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <locale.h>
#include <stdbool.h>
#include"pilha.h"
typedef struct pilha Pilha;
struct pilha{

int n;
int dim;
float* vet;

};

Pilha* criapilha(int tamanho){
    Pilha* p= (Pilha*)malloc(sizeof(Pilha));
    p->dim = tamanho;
    p->vet = (float*)malloc(p->dim*sizeof(float));
    p->n=0;
    return p;

}

void push (Pilha* p,float v){


if(!isFull(p)){
    p->vet[p->n]= v;
    p->n++;
}else{
    printf("erro ao empilhar\n");
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
void imprime(Pilha *p){

int i;
for (i=p->n-1;i>=0;i--){


    printf("%f \n",p->vet[i]);
}


}
