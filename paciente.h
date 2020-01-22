#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED
typedef struct node Node;
typedef struct lista Lista;
Lista* cria(void);
void lstInsere (Lista *lst,int t , char n[]);
void lstPrint (Lista* lst);



#endif // PACIENTE_H_INCLUDED
