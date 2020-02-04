#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct pilha Pilha;

Pilha* criapilha(int tamanho);
void push (Pilha* p,char paciente[]);
void imprimepilha(Pilha *p);
Lista* pilha_lista(Pilha *p);
char pop (Pilha* p);
int isEmpty(Pilha* p);
int isFull(Pilha *p);
char top(Pilha* p);
void libera (Pilha *p);

#endif // PILHA_H_INCLUDED
