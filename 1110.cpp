#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

typedef	struct FILA{
	int inicio;
	int fim;
	int vet[MAX];
}fila;

fila* cria(void);
int vazia(fila* f);
int queue(fila* f, int valor);
int dequeue(fila* f);
void libera(fila* f);

int main() {
	
	fila *Fila, *FilaDescarte;
	
	while(1){
		
		int Ncartas, i, aux, j = 0;
		
		scanf("%d", &Ncartas);
		
		if(Ncartas == 0){
			break;
		}else{
			
			Fila = cria();
			FilaDescarte = cria();
			
			int vet[Ncartas-1];
			
			for(i = 1; i <= Ncartas; i++){
				queue(Fila, i);
			}
			
			while(Fila->inicio != Fila->fim){
				aux = dequeue(Fila);
				queue(FilaDescarte, aux);
				aux = dequeue(Fila);
				queue(Fila, aux);
			}
			
			while(!vazia(FilaDescarte)){
				vet[j] = dequeue(FilaDescarte);
				j++;
			}
			
			int x;
			printf("Discarded cards:");
			for(x = 0; x < j; x++){
				if(x < j-1){
					printf(" %d,", vet[x]);
				}else{
					printf(" %d\n", vet[x]);
				}
			}		
			x = dequeue(Fila);
			printf("Remaining card: %d\n", x);
		}
	}
	return 0;
}

fila* cria(void){
	fila* f = (fila *) malloc (sizeof(fila));
	f->inicio = -1;
	f->fim = -1;
	return f;
}

int vazia(fila* f){
	return (f->inicio == -1);
}

int queue(fila* f, int valor){
	
	if(f->fim == -1 && f->inicio == -1){
		
		f->inicio = 0;
		f->fim = 0;
		f->vet[0] = valor;
		
	}else{
		
		f->fim++;
		if(f->fim == f->inicio){
		
			printf("FILA CHEIA!!\n");
			f->fim--;
			return NULL;
		}
		
		if(f->fim == MAX){
			
			if(f->inicio != 0){
				f->fim = 0;
			}else{
			
				printf("FILA CHEIA!!\n");
				f->fim--;
				return NULL;
				
			}	
		}
		
		f->vet[f->fim] = valor;
		
	}	
}

int dequeue(fila* f){
	int valor;
	
	if(f->inicio == f->fim){
		
		valor = f->vet[f->inicio];
		f->inicio = -1;
		f->fim = -1;
		return valor;
		
	}else{
		
		if(f->inicio + 1 == MAX){
			
			valor = f->vet[f->inicio];	
			f->inicio = 0;
			return valor;
			
		}else{	
		
			valor = f->vet[f->inicio];
			f->inicio++;
			return valor;
			
		}
	}
}