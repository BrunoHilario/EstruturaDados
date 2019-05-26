#include "arvore.h"
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
