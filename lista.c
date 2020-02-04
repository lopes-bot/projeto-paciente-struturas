#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <locale.h>
#include"paciente.h"
typedef struct node Node;
typedef struct lista Lista;
struct node{
    char paciente[1000];
Node*prox;

};
struct lista{

Node *primeiro;
};

Lista* cria_lista(void){
Lista* lst=(Lista*)malloc(sizeof(Lista));
lst->primeiro = NULL;
return lst;


}
void lstInsere_inicio(Lista *lst, char nome[]){

Node* novo = (Node*)malloc(sizeof(Node));
if(novo == NULL){
    printf("erro de alocação\n");
    exit(1);
}

strcpy(novo->paciente,nome);
novo->prox = lst->primeiro;
lst->primeiro = novo;



}
void lstInsere_final(Lista *lst, char nome[]){

Node* novo = (Node*)malloc(sizeof(Node));

        if(novo == NULL){
            printf("erro de alocação\n");
            exit(1);
        }
        strcpy(novo->paciente,nome);
        novo->prox = NULL;
    if(lst->primeiro!= NULL){
        Node *aux,*anterior;
        for(aux=lst->primeiro;aux!=NULL;aux=aux->prox){
            anterior = aux;
        }
        anterior->prox = novo;
}else{

lst->primeiro= novo;

}



}
void lstPrint (Lista* lst){
    if(lst!=NULL){
        Node* aux;
        printf("\n Imprimindo a lista \n");
    for(aux= lst->primeiro;aux!=NULL;aux=aux->prox){
        printf("Nome: %s \n",aux->paciente);

    }
    printf("NULL\n");
    }

}
void cria_relatorio (Lista* lst){
    if(lst!=NULL){
        Node* aux;
        FILE *pont_arq;
        pont_arq= fopen("relatorio.txt","w");

    for(aux= lst->primeiro;aux!=NULL;aux=aux->prox){

        fprintf(pont_arq,"paciente atendido: %s\n",aux->paciente);
    }
        fclose(pont_arq);
        printf("\n dados gravados com sucesso\n");
    }

}
void imprime_relatorio(void){

char *aux;

aux= (char*)malloc(1000*sizeof(char));

FILE *arq;

arq= fopen("relatorio.txt","r");

while(fgets(aux,1000,arq)!=NULL){

    printf("%s",aux);


}
fclose(arq);





}

