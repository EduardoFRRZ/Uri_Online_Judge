#include <stdio.h>
int main()
{
	int N,i;
	scanf("%d",&N);
	float Vet[N], Vet2[N];
	float VetResp[N];
	for(i = 0;i<N;i++) {
		scanf("%f",&Vet[i]);
		scanf("%f",&Vet2[i]);
			VetResp[i] = Vet[i] / Vet2[i];	
	}
	for(i = 0;i<N;i++) {
		if(Vet2[i]!=0) {
			printf("%.1f\n",VetResp[i]);
		}
		else {
			printf("divisao impossivel\n");
		}
	}
	return 0;
}