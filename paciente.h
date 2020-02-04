#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
typedef struct node Node;
typedef struct lista Lista;
Lista* cria_lista(void);
void lstInsere_inicio(Lista *lst, char nome[]);
void lstPrint (Lista* lst);
void cria_relatorio (Lista* lst);
void imprime_relatorio(void);
void lstInsere_final(Lista *lst, char nome[]);



#endif // PACIENTE_H_INCLUDED
