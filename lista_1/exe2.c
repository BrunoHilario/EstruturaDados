#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n = 1;
	int i,j,num;
	int count = 1;
	int nprimos = 0;
	while ( n > 0 ) {
		printf("Digite um numero \n");
		scanf("%d",&n);
		
		if ( n > 0 ){
			nprimos = n;
			
			for ( i = 2 ; i <= nprimos+1; i++){
				
				
				for ( j = 2; j <= i; j++){
					
					if ( i % j == 0){
						count = count+1;
					}
				}
			    if (count <= 2) {
					printf(" %d - ",i);
					
				} else nprimos = nprimos+1;		
				count = 1;
			}
		
			
			
		}	
	}	

return 0;

}