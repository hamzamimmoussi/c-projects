#include <stdio.h>
#include <stdlib.h>


int main(){
	char *ch1=malloc(200*sizeof(char));
	char *ch2= malloc(200*sizeof(char));
	int i=0,j=0,k=0;
	printf("Entrez la premiere chaine :");
	fgets(ch1,200,stdin);
	printf("Entrez la deuxieme chaine:");
	fgets(ch2,200,stdin);
	while(ch1[i]!='\0'){ if(ch1[i]=='\n'){ch1[i]='\0'; break;}i++;} 
	while(ch2[j]!='\0'){if(ch2[j]=='\n'){ch2[j]='\0'; break;} j++;}
	i=0; while(ch1[i]!='\0') i++;
	j=0; while(ch2[j]!='\0') j++;
	char *result= malloc((i+j+1)*sizeof(char));
	int a;
	for(a=0; a<i; a++) result[k++]= ch1[a];
	for(a=0;a<j;a++) result[k++]= ch2[a];
	result[k]='\0';
	printf("\n=== result de la concatenation ===\n % s\n",result);
	free(ch1);
	free(ch2);
	free(result);
	return 0;
}
