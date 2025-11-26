#include <stdio.h>
#include <stdlib.h>
int main() {
  char *c=NULL;
printf("Le contenue de c est %p et l'addresse de c est %p \n",c,&c);
c=(char*)malloc(sizeof(char));
    printf("Saisir un caractere");
    scanf("%c",c);
    printf("La valeur est : %c \n",*c);
    printf("Le code ASCII est : %d\n",*c);
    free(c);
    c=NULL;

    return 0;
}

/*
_Différence entre c et &c ?
c : adresse (sur le heap) de l’octet alloué.
&c : adresse sur la pile où la variable pointeur c est stockée.

_Pourquoi ne peut-on pas faire scanf("%c", c) avant malloc() ?
Avant malloc, c vaut NULL : scanf écrirait dans l’adresse NULL -> comportement indéfini. Il faut allouer d’abord.

_Que se passe-t-il si on oublie c = NULL après free(c) ?
Le pointeur contient toujours l’ancienne adresse (dangling). Une future utilisation (déréférencement) provoquera UB. Mettre c = NULL évite déréférencer par erreur.
*/