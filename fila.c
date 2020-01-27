#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
typedef struct fila Fila;
typedef struct no No;
struct no{
    char nome[1000];
    int tempo;
    No* prox;

};
struct fila{
   No* inicio;
   No* fim;
};

Fila* cria(void){
Fila* f= (Fila*)malloc(sizeof(Fila));
if(f==NULL){
    printf("erro\n");
    exit(1);
}
f->inicio = f->fim =NULL;
return f;


}
void inseri(Fila* f,int t){
No* n= (No*)malloc(sizeof(No));
if(n==NULL){
    printf("erro\n");
    exit(1);
}
 strcpy(n ->nome , n);
 n->tempo=t;
 n->prox =NULL;
if(!isEmpty(f)){
    f->fim->prox = n;
}else{

f->inicio=n;

}


}


