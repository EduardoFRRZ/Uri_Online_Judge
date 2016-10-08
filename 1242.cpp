#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

struct pilha {
  int TOPO;
  char vet[MAX];
};

typedef struct pilha Pilha;
Pilha* cria (){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->TOPO = 0;
	return p;
}

void push (Pilha* p, char v){
	if(p->TOPO == MAX){
		printf("Pilha Cheia !!!");
	}else{
  	    p->TOPO++;
  	    p->vet[p->TOPO] = v;
	}
}

int vazia (Pilha* p){
	return (p->TOPO == 0);
}

float pop (Pilha* p){
	char v;
	if(vazia(p)){
		printf("Pilha vazia.\n");
		system("pause");
		exit(1);
	}else{
		v = p->vet[p->TOPO];
		p->TOPO--;
		return v;
	}	
}

void libera (Pilha* p)
{
  free(p);
}

int main(){
	int cont;
	char RNA[310], R;
	Pilha *pilha;

	while(gets(RNA)){
		pilha = cria();
		cont = 0;
		for(int i = 0; i < 310; i++){
			if(RNA[i] == '\0'){
				break;
			}
			if(vazia(pilha)){
				push(pilha, RNA[i]);
			}else{
				R = pop(pilha);
				if((R == 'B' && RNA[i] == 'S') || (R == 'S' && RNA[i] == 'B') || (R == 'C' && RNA[i] == 'F') || (R == 'F' && RNA[i] == 'C')){
					cont++;
				}else{
					push(pilha, R);
					push(pilha, RNA[i]);
				}
			}
			
		}
		libera(pilha);
		printf("%d\n", cont);
	}
	return 0;
}