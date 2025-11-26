#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p=NULL;
    printf("p=%p\n",p);
    p=(int *)malloc(sizeof(int));
    printf("Contenut de p=%p\n",p);
    printf("L'adresse de p=%p\n",&p);
    scanf("%d",p);
    printf("%d \n",*p);
    free(p);
    printf("Le contenue de p est %p",p);
    p=NULL;
    return 0;
}
/*
_Que contient p avant allocation ?
p vaut NULL (on l’a initialisé à NULL), donc il ne pointe vers rien.

_Quelle différence après l’allocation ?
Après malloc, p contient une adresse (une adresse sur le tas/heap) où la mémoire pour un int a été réservée.

_Quelle est la différence entre p et *p ?
p est l’adresse (un pointeur) ; *p est la valeur stockée à l’adresse pointée (l’entier).

_Pourquoi faire p = NULL après free() ?
Après free(p), l’adresse reste dans p mais la mémoire n’appartient plus au programme — p devient un dangling pointer. Mettre p = NULL évite de référencer ensuite une zone libérée (prévient les lectures/écritures indéfinies).

_Que se passe-t-il si on affiche *p avant malloc() ?
C’est de l’Undefined Behavior : soit plantage (segfault), soit valeur garbage — on ne doit pas déréférencer un pointeur NULL ou non initialisé.
*/