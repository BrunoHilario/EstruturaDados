#include <math.h>
#include <stdio.h>
#include <stdlib.h>


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