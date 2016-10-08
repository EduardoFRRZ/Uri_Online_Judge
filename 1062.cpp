#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

struct pilha {
  int TOPO;
  int vet[MAX];
};

typedef struct pilha Pilha;
Pilha* cria (){
	Pilha* p = (Pilha*) malloc(sizeof(Pilha));
	p->TOPO = 0;
	return p;
}

void push (Pilha* p, int v){
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

int pop (Pilha* p){
	int v;
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

int main(){
	
	int n, i, A = 0, B = 0, Cont = 0,rP;
	Pilha *pilha;
	pilha = cria();

	while(1){
		
		scanf("%d", &n);
		
		if(n == 0){
			break;
		}
		
		int vet[n], vetAux[n];
		bool Aux = true;
		while(1){
			
			if(Aux == true){
				for(i = 0; i < n; i++){
					vet[i] = (i + 1);
				}
			}
			Aux = false;
			
			for(i = 0; i < n; i++){
				scanf("%d", &vetAux[i]);
				if(vetAux[0] == 0){
					break;
				}
			}
			
			if(vetAux[0] == 0){
				printf("\n");
				break;
			}
			
			pilhaTopoZero(pilha);
			
			while(1){
				
				if(vazia(pilha)){
					if(vet[A] == vetAux[B]){
						A++;
						B++;
						Cont++;
					}else{
						push(pilha, vet[A]);
						A++;
					}
					
				}else{
					
					rP = pop(pilha);
					if(rP == vetAux[B]){
						B++;
						Cont++;
					}else{
						push(pilha,rP);
						if(vet[A] == vetAux[B]){
							A++;
							B++;
							Cont++;
						}else{
							push(pilha, vet[A]);
							A++;
						}
					}
					if(!vazia(pilha)){
						rP = pop(pilha);
						if((A == n) && (rP != vetAux[B])){
							printf("No\n");
							break;
						}else{
							push(pilha, rP);
						}
					}
				}
				
				if(Cont == n){
					printf("Yes\n");
					break;
				}
							
			}
			
			A = 0;
			B = 0;
			Cont = 0;
		
		}
		
	}
	
	return 0;
}
