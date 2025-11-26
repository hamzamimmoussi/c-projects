#include <stdio.h>
#include <stdlib.h>
int main() {
int *a=(int*)malloc(sizeof(int));
    int *b=(int*)calloc(1,sizeof(int));
printf("La valeur de *a est %d \n La valeur de *b est %d\n",*a,*b);

free(a),free(b);

    return 0;
}
/*
_Pourquoi *a contient une valeur indéterminée ?
malloc alloue de la mémoire non initialisée : le contenu dépend de ce qui était à cet emplacement.

_Pourquoi *b vaut 0 ?
calloc initialise la mémoire allouée à zéro, pour un int, cela donne la valeur 0.

_Conclusion sur calloc() ?
calloc alloue et zero-initialise la mémoire. Utile si on veut des valeurs initialisées à zéro. malloc est plus rapide si on va immédiatement écraser la mémoire.
*/