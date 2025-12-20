#include<stdio.h>
#include<stdlib.h>
void remplirTableau(int*tab,int taille)
{
    printf("Remplir votre tableau");
    for(int i=0;i<taille;i++){
        printf("tab[%d]=", i+1);
        scanf("%d",&tab[i]);

    }
}
int somme(int*tab,int taille){
    int somme = 0;
    for(int i=0;i<taille;i++){
        somme+= tab[i];
    }
    return somme ;
}
int main(){
    int taille;
    int *T;
    printf("La taille de tableau:");
    scanf("%d",&taille);
    T=(int*)malloc(taille*sizeof(int));
    remplirTableau(T,taille);
    int Somme =somme(T,taille);
    printf("somme des element est : %d\n", Somme);
    free(T);

    return 0;
}