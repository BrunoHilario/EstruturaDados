#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/*Q5) Implemente um programa que, infinitamente, receba, como parâmetro de entrada, um númeron e retorne a representação binária de n. 
Por exemplo, se n é igual a 12, a resposta desteprograma deve ser “1100”. Seu programa para quando n for menor que zero.*/

int binRec(int n){
	if ( n == 0) 
		return 0;
	else ( binRec(n/2));
	printf("%d", n % 2);
	
	
}	

int main(){
int n = 1;
int i,resto,quociente;

	
	while ( n > 0 ){
		printf("digite um numero \n");
		scanf("%d",&n);
		quociente = n;
		binRec(n);
		printf("\n");
		//do {
		//	printf("%d", quociente % 2);
		//	quociente = quociente / 2;
		//	printf("quociente %d \n",quociente);
		//	printf("%d", n % 2);			
		//} while ( quociente > 0 );
		//printf("\n");
	}
return 0;
}