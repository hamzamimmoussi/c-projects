#include<stdio.h>
#include<stdlib.h>
int main() {
    float *note=NULL;
    printf("Avant allocation,note=%p\n",note);
    note=(float*)malloc(sizeof(float));
    printf("Apres allocation,note=%p\n",note);
    printf("Saisir une note:");
    scanf("%f",note);
    printf("La valeur est : %2f \n",*note);
    printf("Son addresse : %p\n",note);
    free(note);
    note = NULL;

    return 0;
}

/*
_Différence entre note, &note et *note ?
note : valeur du pointeur .
&note : adresse du pointeur lui-même .
*note : la valeur float contenue à l’adresse pointée.

_Où se situe la mémoire allouée (pile ou tas) ?
La mémoire allouée par malloc est sur le tas (heap). La variable note (le pointeur) est sur la pile.

_Que se passerait-il si tu oubliais free(note) ?
Ce serait une fuite mémoire (memory leak) : la mémoire resterait allouée jusqu’à la fin du programme ; sur de longs programmes ou boucles répétées cela peut saturer la mémoire.
*/