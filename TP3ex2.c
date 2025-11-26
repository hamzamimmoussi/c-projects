#include <stdio.h>

int main() {
    int tab[5] = {10, 20, 30, 40, 50};
    int *p = tab;

    printf("Affichage via arithmétique des pointeurs\n");
    for (int i = 0; i < 5; i++) {
        printf("tab[%d] = %d, Adresse = %p\n", i, *(p + i), (p + i));
    }

    printf("\nAffichage avec p++\n");
    p = tab;
    for (int i = 0; i < 5; i++) {
        printf("*p = %d, Adresse = %p\n", *p, p);
        p++;
    }

    return 0;
}

/*

_Différence entre tab[i] et *(tab + i) :
 Aucune : ces deux expressions sont équivalentes en C.
_Pourquoi (p + 1) n’ajoute pas 1 octet ?
Le pointeur avance de sizeof(int) octets, soit 4 octets sur la plupart des systèmes.
_Que se passe-t-il si on fait p++ ?
Le pointeur se déplace vers l’élément suivant du tableau.
_Différence entre p = tab et p = &tab[0] :
Aucune différence fonctionnelle : les deux pointent sur le premier élément.

*/