#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char*str=malloc(200*sizeof(char));
	int i=0,j=0,pal=1;
	printf("Entrez une chaine :");
	fgets(str,200,stdin);
	while(str[i]!='\0'){ if( str[i]=='\n'){str[i]='\0';break;} i++; }
	while(str[j]!='\0') j++;
	j--;
	i=0;
	while(i<j){
		if( str[i]!= str[j]){ pal=0; break;	} 
		i++; j++;
	}
	if(pal) printf(">>> la chaine est palindrome\n");
	else printf(">>> la chaine n'est pa palindrome\n");
	free(str);
		return 0;
	}


