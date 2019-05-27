typedef struct arvno ArvNo;
typedef struct arv Arv;


ArvNo* arv_criano(char c, ArvNo* e, ArvNo* d);
Arv* arv_cria(ArvNo* r);
void arv_libera(Arv* a);
void arv_imprime(Arv* a);
int arv_pertence(Arv* a, char c);
ArvNo* arv_busca(Arv* a, char c);