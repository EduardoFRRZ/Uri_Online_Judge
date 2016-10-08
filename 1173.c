#include <stdio.h>
int main()
{
	int N, i, Vet[10];
	scanf("%d",&N);
	Vet[0] = N;
	for(i=1;i<10;i++) {
		Vet[i] = 2 * Vet[i-1];
	}
	for(i=0;i<10;i++) {
		printf("N[%d] = %d\n",i,Vet[i]);
	}
	
	return 0;
}