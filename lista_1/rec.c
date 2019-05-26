#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Isto é um comentário */

void func( int n){

	printf("n %d \n",n);
	if (n > 0) {
		func(n-1);
		printf(" -n %d \n", n);
	}
}
int main()

{
	int n = 1 ;
 	int i, n1, n2, count, countTemp;

			printf("Entre com um numero \n");
			scanf("%d",&n);
			func(n);
	return 0;

}