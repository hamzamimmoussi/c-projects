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