#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
int n = 1;
int i,resto,quociente;

	
	while ( n > 0 ){
		printf("digite um numero \n");
		scanf("%d",&n);
		quociente = n;
		do {
			printf("%d", quociente % 2);
			quociente = quociente / 2;
		//	printf("quociente %d \n",quociente);
		//	printf("%d", n % 2);			
		} while ( quociente > 0 );
		printf("\n");
	}
return 0;
}