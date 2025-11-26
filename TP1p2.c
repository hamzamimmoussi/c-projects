
#include<stdio.h>
#define TAILLE_MAX 20
int main() {
    int tableau[TAILLE_MAX];
    int tableauTrie[TAILLE_MAX];
    int n=0, i, j,temp,val,trouve=0;
    int choix;

    do {
        printf("Combien d'elements vous souhaitez saisir (1-%d) ? ", TAILLE_MAX);
        scanf("%d", &n);
        if (n < 1 || n > TAILLE_MAX) {
            printf("Erreur : saisissez un nombre entre 1 et %d.\n", TAILLE_MAX);
        }
    } while (n < 1 || n > TAILLE_MAX);
    printf("\nMenu\n");
    do {
        printf("1.Saisir d'elements du tab\n");
        printf("2.Affichager le tab et ses adresses memoire\n");
        printf("3.Rechercher une valeur ds le tab\n");
        printf("4.Calculer les statistiques\n");
        printf("5.Copier,trier et inverser le tab\n");
        printf("6.quitter\n");
        printf("Votre choix\n");
        scanf("%d",&choix);


        switch(choix) {

            case 1:  printf("\nSaisissez %d entiers :\n", n);
                for (i = 0; i < n; i++) {
                    printf("Element %d : ", i + 1);
                    scanf("%d", &tableau[i]);
                }
                break;

            case 2:  printf("\nContenu du tableau :\n");
                for (i = 0; i < n; i++) {
                    printf("%d ", tableau[i]);
                }
                printf("\n");

                printf("\nAdresses mémoire des éléments :\n");
                for (i = 0; i < n; i++) {
                    printf("tab[%d] = %d\t &tab[i] = %p\t tab+i = %p\n",
                           i, tableau[i], (void*)&tableau[i], (void*)(tableau + i));
                }
                break;
            case 3: printf("\nSaisir la valeur qui vous cherchez : ");
                scanf("%d", &val);
                trouve = 0;
                for (i = 0; i < n; i++) {
                    if (tableau[i] == val) {
                        printf("La valeur %d trouvée à la position %d\n", val, i);
                        trouve = 1;
                    }
                }
                if (!trouve) {
                    printf("Valeur %d non trouvée dans le tableau.\n", val);
                }
                break;
            case 4:  {
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
                printf("Moyenne = %.2f\n",moy);
                printf("Somme des carrés = %ld\n",somecar);
                break;
            }
            case 5: for (i = 0; i < n; i++) {
                tableauTrie[i] = tableau[i];
            }

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

            printf("\nTab initial inverse:\n");
            for (i = 0; i < n; i++) {printf("%d ", tableau[i]);}
            printf("\n");
            break;
        }
    } while (choix != 6);
    return 0;
}
