#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Isto é um comentário */

int main()

{
	int n = 1 ;
 	int i, n1, n2, count, countTemp;
	while ( n > 0 ) {
			count = 1;
			countTemp = 1;
			printf("Entre com um numero \n");
			scanf("%d",&n);
			if ( n > 0 ) {		
				printf("Digite um numero \n");
				scanf("%d",&n1);
				for ( i = 1 ; i < n ; i++) {
					printf("Digite um numero \n");
					scanf("%d",&n2);
					if (n1 < n2){
						countTemp=countTemp+1;
					} else {
						if (countTemp > count) {
							count = countTemp;
							countTemp = 1;
						}	
					}
					n1 = n2;
				}
				if (countTemp > count) count = countTemp;
				printf("quantidade %d \n",count);
			}
	}	
	return 0;

}