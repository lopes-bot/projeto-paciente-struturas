#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct fila Fila;
typedef struct no No;
Fila* criafila(void);
void inserifila(Fila* f,int t,char vet[]);
char retirafila(Fila*f);
int isFullfila(Fila* f);
int isEmptyfila(Fila* f);
void liberafila(Fila* f);
void imprimefila(Fila* f);

#endif // FILA_H_INCLUDED
