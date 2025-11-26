#include<stdio.h>
#define TAILLE_MAX 20
int main() {
    int tableau[TAILLE_MAX];
    int tableauTrie[TAILLE_MAX];
    int n=0, i, j,temp,val,trouve=0;

    do {
        printf("Combien d'elements vous souhaitez saisir (1-%d) ? ", TAILLE_MAX);
        scanf("%d", &n);
        if (n < 1 || n > TAILLE_MAX) {
            printf("Erreur : saisissez un nombre entre 1 et %d.\n", TAILLE_MAX);
        }
    } while (n < 1 || n > TAILLE_MAX);

    printf("\nSaisissez %d entiers :\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("\nContenu du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    printf("\nAdresses mémoire des éléments :\n");
    for (i = 0; i < n; i++) {
        printf("tab[%d] = %d\t &tab[i] = %p\t tab+i = %p\n",
               i, tableau[i], (void*)&tableau[i], (void*)(tableau + i));
    }

    printf("\nSaisir la valeur qui vous cherchez : ");
    scanf("%d", &val);
    for (i = 0; i < n; i++) {
        if (tableau[i] == val) {
            printf("La valeur %d trouvée à la position %d\n", val, i);
            trouve = 1;
        }
    }
    if (!trouve) {
        printf("Valeur %d non trouvée dans le tableau.\n", val);
    }
    int min = tableau[0];
    int max = tableau[0];
    int somme = 0;
    long somecar = 0;
    float moy;

    for (i = 0; i < n; i++) {
        if (tableau[i] < min)
            min = tableau[i];
        if (tableau[i] > max)
            max = tableau[i];
        somme += tableau[i];
        somecar += tableau[i] * tableau[i];
    }
    moy = (float)somme / n;
    printf("\nMin = %d\n",min);
    printf(" Max = %d\n",max);
    printf("Somme des carrés = %ld\n",somecar);
    min, max,moy,somecar;


    for (i = 0; i < n; i++) {
        tableauTrie[i] = tableau[i];
    }

    for (i = 0; i < n ; i++) {tableauTrie[i] = tableau[i];}
        for (i = 0; i < n - 1; i++) {
            for (j=0; j < n-i-1; j++) {
                if (tableauTrie[j] > tableauTrie[j + 1]) {

                    temp = tableauTrie[j];
                    tableauTrie[j] = tableauTrie[j + 1];
                    tableauTrie[j + 1] = temp;
                }
            }
            }


    printf("\nTableau trié :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tableauTrie[i]);
    }
    printf("\n");

    for (i = 0; i < n / 2; i++) {
        temp = tableau[i];
        tableau[i] = tableau[n - 1 - i];
        tableau[n - 1 - i] = temp;
    }
    printf("\nTableau inversé en ordre croisant :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tableauTrie[i]);
    }
    printf("\n");
    for (i = 0; i < n/2; i++) {
        temp = tableau[i];
        tableau[i] = tableau[n - 1 - i];
        tableau[n - 1 - i] = temp;
       printf("%d ", tableauTrie[i]);
    }
    printf("Tab initial inverse:\n");
    for (i = 0; i < n; i++) {printf("%d ", tableau[i]);}
    printf("\n");

    return 0;
}

/*
Réponses aux questions de compréhension :
- Limite de 20 : le tableau est déclaré statiquement avec une taille maximale 20.
- Si on dépasse 20, on risque d'écrire en dehors de la mémoire allouée (comportement indéfini).
- La boucle do...while garantit que le programme continue seulement si n <= 20.

- tab est le nom du tableau : adresse du premier élément
- &tab[i] et tab + i donnent la même adresse mémoire de l'élément i
- tab est un pointeur vers le premier élément du tableau

_Pour gérer plusieurs occurrences, on parcourt tout le tableau et on affiche
_toutes les positions où la valeur est trouvée.

- La moyenne doit être float ou double pour conserver la valeur décimale.
- Si le tableau était vide, il faudrait vérifier pour éviter une division par zéro.
*/