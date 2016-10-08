#include <stdio.h>
int Vet[20], Aux, i;

int Leitura(){
	for(i = 0; i < 20; i++){
		scanf("%d", &Vet[i]);
	}
}

int Modifica(){
	for(i = 0; i < 10; i++){
		Aux = Vet[i];
		Vet[i] = Vet[20 - (i + 1)];
		 Vet[20 - (i + 1)] = Aux;
	}
}

void Escreve(){
	for(i = 0; i < 20; i++){
		printf("N[%d] = %d\n", i, Vet[i]);
	}
}

int main() {
	
	Leitura();
	Modifica();
	Escreve();
	
	return 0;
	
}