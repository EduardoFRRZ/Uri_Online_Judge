#include <stdio.h>

void achaMenor(int N){
	int menor = 99999, posicao;
	int vet[N];
	int i;
	for(i = 0; i<N; i++){
		scanf("%d",&vet[i]);
		if(vet[i] < menor){
			menor = vet[i];
			posicao = i;
		}
	}
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
	
}

int main() {
	int N;
	scanf("%d",&N);
	achaMenor(N);
}