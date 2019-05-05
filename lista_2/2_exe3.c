#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void ordena(char *vet, int n){
	int i,j; char temp[1];
	for ( i = 0; i < n ; i++){
	
		for ( j = i+1;j < n ; j++){
			if ((int) vet[j] <= (int) vet[i]) 
			{
				temp[0] = vet[i];
				vet[i] = vet[j];
				vet[j] = temp[0];
			}	
		}	
	}	
}	

int permuta(char *vet1,char *vet2,int n1, int n2){
	int i;
	if ( n1 != n2) return 0;
	for (i = 0; i < n1; i++){
		if ((int) vet1[i] != (int) vet2[i]) return 0;
			
	}
	return 1;
}	

int main(){
	char numero[10];
	char numero2[10];
	char *numOrdenado;
	char *numOrdenado2;
	char temp[1];
	
	int tNum, tNum2, i;
	
	printf("digite um numero \n");
	scanf("%s",numero);
	tNum = strlen(numero);
	printf("%s \n",numero);

	ordena(numero,tNum);
	printf("%s \n",numero);
	
	printf("digite outro numero \n");
	scanf("%s",numero2);
	tNum2 = strlen(numero2);
	printf("%s \n",numero2);

	ordena(numero2,tNum2);
	printf("%s \n",numero2);
	
	if ( permuta(numero,numero2,tNum,tNum2)) printf("permuta \n"); else printf("nao e permuta \n");

return 0;
}
