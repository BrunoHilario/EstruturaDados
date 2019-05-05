#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define MAX_TITULO 50
#define MAX_ASSUNTO 200
#define MAX_AUTOR 50

typedef struct st_livros {
char titulo[MAX_TITULO];
char assunto[MAX_ASSUNTO];
char autor[MAX_AUTOR];
int ano;

}livro;

typedef struct celulaLista{
   livro Livro;
   struct celulaLista *proximo;
}celula;

int main(){
   // Declarações
      celula *pLista;
      int opcao = 0;
   // Funções
      void initLista(celula **pRecebido);
      void insertLista(celula **pRecebido);
      void buscaListaSimples(celula **pRecebido);
      void removeElementoListaSimples(celula **pRecebido);
      int leValor(int *valorRecebido);
   // Instruções
      pLista = (celula *)malloc(sizeof(struct celulaLista));
      initLista(&pLista);
      for(;;){
         printf("\n1 - Inserir : ");
         printf("\n2 - Consultar: ");
         printf("\n3 - Remover");
         printf("\n4 - Sair\n");
         scanf("%d", &opcao);
         opcao = leValor(&opcao);
         switch(opcao)
         {
            case 1:
          insertLista(&pLista);
          break;
       case 2:
          buscaListaSimples(&pLista);
          break;
       case 3:
         removeElementoListaSimples(&pLista);
         break;
       case 4:
         exit(0);
        }
     }
     return 0;
}
/*
   Inicialização da Lista Encadeada
*/
void initLista(celula **pRecebido){
   (*pRecebido)->proximo = NULL;
}

/*
   Função para Inserção no Início
*/
void insertLista(celula **pRecebido){
   // Declarações
      celula *temporario;
	  celula *busca;
	  busca = (celula *)malloc(sizeof(celula));
      temporario = (celula *)malloc(sizeof(celula));
	  printf("\n Informe o titulo : ");
      scanf("%s", temporario->Livro.titulo);
	  printf("\n Informe o assunto : ");
      scanf("%s", temporario->Livro.assunto);
	  printf("\n Informe o autor : ");
      scanf("%s", temporario->Livro.autor);
	  printf("\n Informe o ano : ");
      scanf("%d", &temporario->Livro.ano);
	  
	  		
      while(*pRecebido != NULL){
			if (strcmp(temporario->Livro.titulo,busca->Livro.titulo) < 0)
 			  temporario->proximo = (*pRecebido)->proximo;
    			  (*pRecebido)->proximo = temporario;  
			busca = busca->proximo;		  
	  }
    //  temporario->proximo = (*pRecebido)->proximo;
    //  (*pRecebido)->proximo = temporario;   
}
/*
   Função para Percorrer Elementos
*/
void buscaListaSimples(celula **pRecebido){
   // Declarações
      celula *temporario;
   // Instruções
      if((*pRecebido)->proximo == NULL){
         printf("Lista Vazia!\n");
      }
      else{
         temporario = (celula *)malloc(sizeof(celula));
         temporario = (*pRecebido)->proximo;
         while(temporario != NULL){
            printf("Titulo: %s\n", temporario->Livro.titulo);
			 printf("Assunto: %s\n", temporario->Livro.assunto);
			 printf("Autor: %s\n", temporario->Livro.autor);
			 printf("Ano: %d\n", temporario->Livro.ano);
            temporario = temporario->proximo;
         }
      }   
}
/*
   Remove Elemento da Cabeça
*/
void removeElementoListaSimples(celula **pRecebido){
   // Declarações
      celula *temporario;
   // Instruções
      if((*pRecebido)->proximo == NULL){
         printf("\nLista Vazia!");
      }
      else{
         temporario = (*pRecebido)->proximo;
         (*pRecebido)->proximo = temporario->proximo;
         free(temporario);
      }
}
/*
   Opção para Validação da Entrada
*/
int leValor(int *valorRecebido){
   // Declarações
   // Instruções
      while((*valorRecebido > 4) || (*valorRecebido < 1)){
         printf("Opcao Invalida. Informe novamente : \n");
         scanf("%d", &(*valorRecebido));
      }
      return(*valorRecebido);
}