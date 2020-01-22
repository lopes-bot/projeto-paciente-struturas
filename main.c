#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <locale.h>
#include"paciente.h"
#include "lista.c"

int main()
{
    int tempo , *lst;
    char nome[1000];
    setlocale(LC_ALL, "Portuguese");

    printf("inseri nome \n");
    scanf("%s",&nome);
    printf("inseri o tempo de triagem \n");
    scanf("%i",&tempo);
    lst = cria();
    lstInsere(lst,tempo,nome);
    lstPrint(lst);


    return 0;
}
