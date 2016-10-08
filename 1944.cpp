#include <stdio.h>
#include <stdlib.h>
#define MAX 880

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

void inicializa(Pilha* p){
	push(p,'F');
	push(p,'A');
	push(p,'C');
	push(p,'E');
}

int main(){
	
	int cT, i = 0, cont = 0;
	char A1, A2, A3, A4, P1, P2, P3, P4;
	Pilha *pilha;
	pilha = cria();
	inicializa(pilha);
	
	scanf("%d", &cT);
	
	while(i < cT){
		
		scanf(" %c %c %c %c", &A1, &A2, &A3, &A4);
		
		if(vazia(pilha)){
			inicializa(pilha);
		}
		
		P1 = pop(pilha);
		P2 = pop(pilha);
		P3 = pop(pilha);
		P4 = pop(pilha);
		
		if((A1 == P1) && (A2 == P2) && (A3 == P3) && (A4 == P4)){
			cont++;
		}else{
			push(pilha,P4);
			push(pilha,P3);
			push(pilha,P2);
			push(pilha,P1);
			push(pilha,A1);
			push(pilha,A2);
			push(pilha,A3);
			push(pilha,A4);
		}
		i++;
	}

	printf("%d\n", cont);
	
	return 0;
}