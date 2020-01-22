#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <locale.h>
#include"paciente.h"
typedef struct node Node;
typedef struct lista Lista;
struct node{

int tempo;
char nome[1000];
Node*prox;

};
struct lista{

Node *primeiro;
};

Lista* cria(void){
Lista* lst=(Lista*)malloc(sizeof(Lista));
lst->primeiro = NULL;
return lst;


}
void lstInsere (Lista *lst,int t , char n[]){

Node* novo = (Node*)malloc(sizeof(Node));
if(novo == NULL){
    printf("erro de alocação\n");
    exit(1);
}
strcpy(novo ->nome , n);
novo->tempo = t;
novo->prox = lst->primeiro;
lst->primeiro = novo;



}
void lstPrint (Lista* lst){
    if(lst!=NULL){
        Node* aux;
    for(aux= lst->primeiro;aux!=NULL;aux=aux->prox){
        printf("Nome: %s \n Tempo: %i\n",aux->nome,aux->tempo);

    }
    printf("NULL\n");
    }

}

