#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char *str = malloc(300 * sizeof(char));
    char c;
    int i = 0;
    int caractere = 0;
    int occ = 0;
    int mot = 1;
   

    printf("Entrez une chaine : ");
    fgets(str, 300, stdin);

    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("Caractere dont on cherche les occurences : ");
    scanf(" %c", &c); 

    i = 0;

    while (str[i] != '\0') {
        caractere++; 
        if (str[i] == c) {
            occ++;
        }

    
        if (str[i] != ' ' && str[i+1] != ' ' && str[i+1]!='\0') 
            mot++;       
           

        i++;
}

    printf("\nNombre de caracteres = %d\n", caractere);
    printf("Occurrences de '%c' = %d\n", c, occ);
    printf("Nombre de mots = %d\n", mot);

    free(str);
	return 0;
}
