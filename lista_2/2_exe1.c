#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct nummeros {
	int num;
	int primo;
} numeros;

int main(){
	numeros *vet;
	int n;
	int i,j;
	printf("digite um numero \n");
	scanf("%d",&n);
	vet = (numeros *) malloc((n-1)*sizeof(numeros));
	for (i = 2; i <= n ; i++){
		vet[i - 2].num = i;
		vet[i - 2].primo = 0;
	}
	vet[0].primo = 1;
	for ( i = 0 ; i <= (n-2); i++){
		if (vet[i].primo == 1){
			for ( j = i+1 ; j <= (n-2); j++){
				if (vet[j].primo != 2) {
					if ( vet[j].num % vet[i].num == 0) {
						vet[j].primo = 2;
					} else vet[j].primo = 1;	
				}	
			}
		}	
	}
	for ( i = 0 ; i <= (n-2) ; i++){
		if (vet[i].primo == 1)
			printf("%d \n",vet[i].num);
	}	
			   
return 0;
}