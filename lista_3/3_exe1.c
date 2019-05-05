#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


void shift_troca_string (char *str){
	int tamanho,codigoASCII;
	printf("%s \n",str);	
	tamanho = strlen(str);
	printf("%d \n", tamanho);
	for (int i=0;i<tamanho;i++){
		if ( (int) str[i]>= 65 && (int) str[i] <= 90){
			//printf("%c \n",str[i]);
			codigoASCII = (int) str[i] + 32;
			if (codigoASCII == 97) codigoASCII = 122; else codigoASCII = codigoASCII-1;
			//printf("%d \n",codigoASCII);
			str[i] = codigoASCII;
		 	printf("%c",str[i]);
		} else
		if ( (int) str[i]>= 97 && (int) str[i] <= 122){
		//	printf("%c \n",str[i]);
			codigoASCII = (int) str[i] - 32;
			if (codigoASCII == 65) codigoASCII = 90; else codigoASCII = codigoASCII-1;
		//	printf("%d \n",codigoASCII);
			str[i] = codigoASCII;
		 	printf("%c",str[i]);
		} else {
			str[i] = 33;
			printf("%c",str[i]);
		}	
		
	}	
	printf("\n");
	
	
}	


char * codifica (char *str){
	int tamanho;
	char *codificado;
	tamanho = strlen(str);
	codificado = (char*) malloc(tamanho*sizeof(char));
	for (int i = 0; i < tamanho; i++){
		if ( (int) str[i] == 97 || (int) str[i] == 101 || (int) str[i] == 105 || (int) str[i] == 111 || (int) str[i] == 117)
		codificado[i] = 63; else	
		codificado[i] = str[i];	
	}	
	printf("%s \n", codificado);
	
}	

void retira_inicio_n (char *str, int n){
	if (strlen(str) < n) 
		printf("erro \n");
	else{
		for (int i = 0; i < strlen(str)-n;i++){
			str[i] = str[i+3];
		}	
		str[strlen(str)-n] = '\0';
	}	
//	printf("%s \n", str);
}	

void  verifica_senha (char *str){
	int erro = 1;
	int tamanho;
	tamanho = strlen(str);
	if (tamanho < 8) {

		printf("a senha precisa no minimo 8 caracteres \n");
	} else {
		for (int i = 0 ; i < tamanho; i++){
			if ((int) str[i]>= 48 && (int) str[i] <= 57) {
				erro =0;
				break;
			}	
		}
		if (erro == 1) {
			printf("precisa ter um numero \n");
		} else {
				erro = 1;		
				for (int i = 0 ; i < tamanho; i++){
					if ((int) str[i]>= 65 && (int) str[i] <= 90) {
					erro =0;
					break;
					}	
				}
				if (erro == 1) {
			      printf("precisa ter um letra maiscula \n");
		        } else {
						erro = 1;
						for (int i = 0 ; i < tamanho; i++){
							if ((int) str[i]>= 97 && (int) str[i] <= 122) {
								erro =0;
								break;
							}	
						}
						if ( erro == 1) {
							printf("precisa ter uma letra minuscula \n");
						}	
						
				}		
		}	
	}
	if (erro == 0) printf("senha valida \n");
}	

int main(){
	char nome[81];
	
	printf("entre com a palavra \n");
	scanf(" %[^\n]",nome);
//	shift_troca_string(nome);
//	codifica(nome);
//	retira_inicio_n(nome,3);
//	printf("%s \n",nome);
	
	
	verifica_senha(nome);

return 0;

}