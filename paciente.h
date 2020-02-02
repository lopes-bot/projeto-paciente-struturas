#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
typedef struct node Node;
typedef struct lista Lista;
Lista* cria_lista(void);
void lstInsere (Lista *lst, int n);
void lstPrint (Lista* lst);
void cria_relatorio (Lista* lst);
void imprime_relatorio(void);



#endif // PACIENTE_H_INCLUDED
