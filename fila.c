#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"



typedef struct fila Fila;
typedef struct no No;
struct no{
    char nome[1000];
    char tempo[100];
    No* prox;

};
struct fila{
   No* inicio;
   No* fim;
};

Fila* criafila(void){
Fila* f = (Fila*)malloc(sizeof(Fila));
if(f==NULL){
    printf("erro\n");
    exit(1);
}
f->inicio = f->fim =NULL;
return f;


}

void inserifila(Fila* f,int t,char vet[]){

No* n= (No*)malloc(sizeof(No));
char* aux = (char*)malloc(10*sizeof(char));
    itoa(t,aux,10);
    if(n==NULL){
            printf("erro\n");
            exit(1);
    }

     strcpy(n ->nome , vet);
     strcpy(n->tempo,aux);
     strcat(n->nome," tempo:");
     strcat(n->nome,n->tempo);

     n->prox =NULL;
        if(!isEmptyfila(f)){

                f->fim->prox = n;

        }else{

                f->inicio=n;

        }
f->fim=n;

}
int isEmptyfila(Fila* f){

return (f->fim ==NULL);



}
void liberafila(Fila* f){

No* q=(No*)malloc(sizeof(No));
while(q!=NULL){
    No* t=q->prox;
    free(q);
}
free(f);

}
void imprimefila (Fila* f){
    if(f!=NULL){
        No* aux;
    for(aux= f->inicio;aux!= NULL;aux=aux->prox){
        printf("Nome:%s\n",aux->nome);

    }
    printf("NULL\n");
    }

}
 char retirafila(Fila*f){
     No* t;
     char aux=(char*)malloc(1000*sizeof(char));

     if(isEmptyfila(f)){
            printf("erro");
        exit(1);
     }else{
        t=f->inicio;
       // strcpy(aux , t->nome);
        aux= t->nome;
        f->inicio=t->prox;
        if(f->inicio==NULL){
            free(t);
    }
        return aux;


     }
 }





