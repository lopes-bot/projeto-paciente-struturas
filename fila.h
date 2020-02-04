#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include "pilha.h"
typedef struct fila Fila;
typedef struct no No;
Fila* criafila(void);
void inserifila(Fila* f,char t[],char vet[]);
char retirafila(Fila* f);
int isFullfila(Fila* f);
int isEmptyfila(Fila* f);
void liberafila(Fila* f);
void imprimefila(Fila* f);
Pilha* fila_pilha (Fila* f,int n);

#endif // FILA_H_INCLUDED
