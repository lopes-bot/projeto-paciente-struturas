#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <locale.h>
#include"paciente.h"
typedef struct node Node;
typedef struct lista Lista;
struct node{
    int prt;
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
void lstInsere (Lista *lst, int n){

Node* novo = (Node*)malloc(sizeof(Node));
if(novo == NULL){
    printf("erro de alocação\n");
    exit(1);
}
printf("\n inserido na lista %s \n",n);
novo->prt = n;
novo->prox = lst->primeiro;
lst->primeiro = novo;



}
void lstPrint (Lista* lst){
    if(lst!=NULL){
        Node* aux;
        printf("\n imprimindo a lista \n");
    for(aux= lst->primeiro;aux!=NULL;aux=aux->prox){
        printf("Nome: %s \n",aux->prt);

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

        fprintf(pont_arq,"paciente atendido: %s\n",aux->prt);
    }
        fclose(pont_arq);
        printf("dados gravados com sucesso\n");
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

