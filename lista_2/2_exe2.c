#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int g = 1;
	int i;
	float *vet, *vetInt, *vetDev;
	
	while (g > 0) {
		printf("Entre com o grau do polinomio \n");
		scanf("%d",&g);
		if ( g > 0){
			vet = (float*) malloc((g+1)*sizeof(float));
			for (i=2;i>=0;i--){
				printf("entre com o coeficiente \n");
				scanf("%f",&vet[i]);
				
			}
			for (i=0;i<=g;i++){
				printf("%.2f ",vet[i]);
			}
			printf("\n");
			vetInt = (float*) malloc((g+2)*sizeof(float));
			vetInt[0] = 0;
			for (i=0;i<=g;i++){
				vetInt[i+1]= vet[i]/(i+1);
				
			}
			for (i=0;i<=(g+1);i++){
				printf("%.2f ",vetInt[i]);
			}			
			printf("\n");
			
			vetDev = (float*) malloc(g*sizeof(float));
			
			for (i=0; i < g; i++){
				vetDev[i] = vet[i+1]*(i+1);
			}
			
			for (i=0 ; i < g ; i++){
				printf("%.2f ",vetDev[i]);
			}
			printf("\n");
		}
	} 
	
	return 0;
}