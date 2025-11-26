#include <stdio.h>
int main() {

int A[10][10];
    int i,j,n;
    int somme_total=0;
    int somme_ligne[10],somme_colonne[10];


   printf("Donnez la taille de la matrice (max10):\n") ;
   scanf("%d",&n);
   if (n<1||n>10) {
       printf("Erreur:taille non valide");
       return 1;
   }
printf("Saisie des elements de la matrice %d%d :\n",n,n);
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("Matrice A:\n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            printf("%5d ",A[i][j]);
        }
        printf("\n");
    }
printf("Diagonale principale:\n");
    for (i=0;i<n;i++) {
        printf("%d",A[i][i]);
    }
    printf("\n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            somme_total+=A[i][j];
        }
    }
    printf("La somme de tous les elements:%d\n",somme_total);

printf("Somme par ligne: \n");
    for (i=0;i<n;i++) {
      int somme_ligne=0;
        for (j=0;j<n;j++) {
            somme_ligne+=A[i][j];
            printf("Ligne %d: %d\n",i,somme_ligne);
        }
    }

printf("Somme par colonne: \n");
    for (j=0;j<n;j++) {
        int somme_colonne=0;
        for (i=0;i<n;i++) {
            somme_colonne+=A[i][j];
            printf("Colonne %d: %d\n",j,somme_colonne);
        }
    }

printf("Transposee de A (A^T)");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            printf("%5d ",A[i][j]);
        }
        printf("\n");
    }
int symetrique=1;
    for (i=0;i<n && symetrique;++i) {
        for (j=i+1;j<n;++j) {
            if (A[i][j]!=A[j][i]) {
                symetrique=0;
                break;
            }
        }
    }
if (symetrique)
    printf("\n La matrice est symetrique.\n");
    else
        printf("\n La matrice est non symetrique.\n");



    return 0;
}

/*
_Quelle est la différence entre une déclaration statique et dynamique d’un tableau ?

Statique : taille fixée à la compilation (ex. int A[10][10];), mémoire allouée sur la pile ou dans le bss, simple à utiliser mais taille rigide.

Dynamique : taille choisie à l’exécution (malloc, calloc ou new en C++), nécessite gestion (allocation/libération), permet des tailles adaptatives.

_Que se passerait-il si l’utilisateur saisissait une taille supérieure à 10 ?

Sans vérification, on écrirait hors des limites du tableau → comportement indéfini (plantage, corruption mémoire). Il faut valider n <= 10 et refuser une taille plus grande (comme fait dans le programme).

_Pourquoi utilise-t-on deux boucles imbriquées pour parcourir une matrice ?

Une matrice 2D a deux indices (ligne et colonne). La boucle externe parcourt les lignes, la boucle interne parcourt les colonnes de chaque ligne : cela permet de visiter chaque élément A[i][j].

_Quelle structure de boucle est la plus adaptée à ces calculs (sommes, diag, transposée) ?

Des boucles for imbriquées (i de 0 à n-1, j de 0 à n-1) sont adaptées pour parcourir toute la matrice. Parfois on peut optimiser (ex. pour vérifier la symétrie on peut parcourir seulement j > i).

_La diagonale de la matrice correspond à quels indices dans le tableau ?

La diagonale principale correspond aux éléments où i == j (A[0][0], A[1][1], ..., A[n-1][n-1]).
*/