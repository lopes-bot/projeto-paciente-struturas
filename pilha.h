#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct pilha Pilha;

Pilha* criapilha(int tamanho);
void push (Pilha* p,int v);
void imprimepilha(Pilha *p);
pilha_lista(Pilha *p);

#endif // PILHA_H_INCLUDED
