#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/*Implemente um programa que, infinitamente, receba, como parâmetro de entrada, um númeron e retorne os nprimeiros números primos existentes depois de n. 
Por exemplo, se n = 2, aresposta será osprimos 3 e 5. É necessário salientar que n não precisa ser primo. Seu programapara quando n for menor ou igual a zero*/

int main(){
	int n = 1;
	
	int i,nprimos,numTemp, count;
	
	while ( n > 0 ){
		printf("digite um numero \n");
		scanf("%d",&n);
		nprimos = 0;
		numTemp = n;
		if ( n > 0 ) {
			do {
				numTemp = numTemp +1;
				count = 1;
				for ( i = 2; i <= numTemp; i++){
					 if ( numTemp % i == 0 ) count = count+1;
				}
				if ( count == 2 ) {
					printf("%d \n",numTemp);
					nprimos=nprimos+1;
				}	
				
			} while ( nprimos < n);	
		}
	}
return 0;
}