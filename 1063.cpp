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

char pop (Pilha* p){
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

int pilhaTopoZero(Pilha* p){
	return	p->TOPO = 0;
}

int main() {
	
	Pilha *pilha;
	pilha = cria();
	
	int n, i, A, B, contResult;
	
	while(1){
		
		A = 0;
		B = 0;
		contResult = 0;
		
		scanf("%d", &n);
		
		if(n ==0){
			break;
		}
		
		char entrada[n], saida[n], result[1000], rP;
		
		for(i = 0; i < n; i++){
			scanf(" %c", &entrada[i]);
		}
		
		for(i = 0; i < n; i++){
			scanf(" %c", &saida[i]);
		}		
		
		pilhaTopoZero(pilha);
		
		while(1){
			
			if(vazia(pilha)){
				push(pilha, entrada[A]);
				A++;
				result[contResult] = 'I';
				contResult++;
			}
			
			if(!vazia(pilha)){
				
				rP = pop(pilha);
				if(rP == saida[B]){
					B++;
					result[contResult] = 'R';
					contResult++;
				}else{
					push(pilha, rP);
					push(pilha, entrada[A]);
					A++;
					result[contResult] = 'I';
				   	contResult++;
				}	
			}
			
			if(B == n){
				for(i = 0; i != contResult; i++){
					printf("%c", result[i]);
				}
				printf("\n");
				break;
			}
			
			if(A == n){
				rP = pop(pilha);
				if(rP == saida[B]){
					push(pilha, rP);
				}else{	
					for(i = 0; i != contResult; i++){
						printf("%c", result[i]);
					}
					printf(" Impossible\n");
					break;
				}
			}					
		}	
	}
	
	return 0;
}