#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

typedef struct pilha Pilha;

Pilha* criapilha(int tamanho);
void push (Pilha* p,char vet[]);
void imprimepilha(Pilha *p);

#endif // PILHA_H_INCLUDED
