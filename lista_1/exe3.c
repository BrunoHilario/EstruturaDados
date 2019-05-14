#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*Implemente um programa que, infinitamente, receba, como parâmetro de entrada, um númeron e um número m, e retorne todas as potências de m, menores que n. 
Por exemplo, se n = 1000 e m = 2, seu programa deve imprimir os seguintes números: 1, 2, 4, 8, 16, 32, 64, 128, 256 e 512.Seu programa para quando n for menor que 1 ou quando m for 0, ou 1 ou -1
*/
int main(){
	int n = 1;
	int m = 2;
	int pot,i;

	while ( n > 0 || ( m > 1 && m < -1)){
		printf("digite um numero \n");
		scanf("%d",&n);
		printf("digite a potencia de n \n");
		scanf("%d",&m);
		
		for ( i = 0; i < (n / 2); i++){
			pot = pow(m,i);
			if (pot < n) printf("%d \n",pot);
			else break;
		}	
	}
return 0;
}