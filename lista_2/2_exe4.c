#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
	char numero[10];
	int i,j, tNum, palindro;
	
	printf("digite um numero \n");
	scanf("%s",numero);
	tNum = strlen(numero);
	printf("%s \n",numero);
	printf("%d \n",(tNum / 2));	
	palindro = 1 ;
	j = tNum-1;
	for ( i = 0; i < (tNum/2);i++){
		
		if ((int) numero[i] != (int) numero[j]  ) palindro = 0;	
		j = j-1;
	}
	
	if (palindro == 1) printf("sim \n"); else printf("nao \n");
return 0;
	

}