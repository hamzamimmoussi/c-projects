#include <stdio.h>

int main(void) {
    int x = 10;
    int *p = &x;

    printf("Valeur de x = %d\n", x);
    printf("Adresse de x = %p\n", &x);
    printf("Contenu de p (adresse pointée) = %p\n", p);
    printf("Valeur pointée par p = %d\n", *p);
    *p = 20;
    printf("Nouvelle valeur de x = %d\n", x);

    return 0;
}

/*
1) Différence entre p et *p ?
p contient une adresse (l’adresse de x). *p contient la valeur stockée à cette adresse (la valeur de x).
2) Que se passe-t-il si on fait *p = 20; ?
Cela modifie directement la valeur de x, puisque p pointe vers x.
3) Que contient la variable p ?
Elle contient l’adresse mémoire de x.
4) Et si p n’est pas initialisé ?
Il pointe vers n’importe où → accès mémoire interdit → segmentation fault.
*/