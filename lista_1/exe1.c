#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Escreva um programa que, infinitamente, leia um número inteiro n, que representa o tamanho,seguida de uma sequência de n números  inteiros, 
e determine o comprimento máximo de umsegmento crescente destes n números. Exemplos: Na sequência 5, 10, 3, 2, 4, 7, 9, 8, 5 o comprimento do segmento crescente máximo é 4
.Na sequência 10, 8, 7, 5, 2 o comprimento de um segmento crescente máximo é 1.Seu programa para quando n for menor ou igual a zero. */

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