#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

typedef struct fila Fila;
typedef struct no No;
Fila* criafila(void);
void inseri(Fila* f,int t);
int retira(Fila* f);
int isFull(Fila* f);
int isEmpty(Fila* f);
void libera(Fila* f);

#endif // FILA_H_INCLUDED
