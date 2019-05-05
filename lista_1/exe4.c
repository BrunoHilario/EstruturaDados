#include <math.h>
#include <stdlib.h>
#include <stdio.h>

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