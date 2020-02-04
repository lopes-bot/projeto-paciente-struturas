#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#include "pilha.h"



typedef struct fila Fila;
typedef struct no No;
struct no{
    char nome[1000];
    char tempo[1000];
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


void inserifila(Fila* f,char t[],char vet[]){

No* n= (No*)malloc(sizeof(No));

    if(n==NULL){
            printf("erro\n");
            exit(1);
    }

     strcpy(n ->nome , vet);
     strcpy(n->tempo,t);
     strcat(n->nome," TEMPO de Triagem:");
     strcat(n->nome,n->tempo);
     strcat(n->nome,"min");
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
        printf("\n Imprimindo fila \n");
    for(aux= f->inicio;aux!= NULL;aux=aux->prox){
        printf("Nome:%s\n",aux->nome);

    }
    printf("NULL\n");
    }

}
 char retirafila(Fila*f){
     No* t;
     char *nome;
    nome=(char*)malloc(1000*sizeof(char));

     if(isEmptyfila(f)){
            printf("erro");
        exit(1);
     }else{
        t=f->inicio;
       strcpy(nome , t->nome);
       // aux= t->nome;

        f->inicio=t->prox;
        if(f->inicio==NULL){
            free(t);

        }
    printf("retorno :%s",nome);
    return nome;


     }
 }
Pilha* fila_pilha (Fila* f,int n){//função que transferi da fila para pilha
     Pilha *p;
    p= criapilha(n);
    if(f!=NULL){
        No* aux;

            printf("\ninserindo elemento da fila para pilha \n");
            for(aux= f->inicio;aux!= NULL;aux=aux->prox){
                    printf("\nelemento passado para push -> %s  \n",aux->nome);
                    push(p,aux->nome);

            }
     return p;
    }

}





