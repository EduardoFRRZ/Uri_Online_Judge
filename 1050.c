#include <stdio.h>
int main(){
	int DDD;
	scanf("%d",&DDD);
	if(DDD==61)
		printf("Brasilia\n");
	else if(DDD==71)
		printf("Salvador\n");
	else if(DDD==11)
		printf("Sao Paulo\n");
	else if(DDD==21)
		printf("Rio de Janeiro\n");
	else if(DDD==32)
		printf("Juiz de Fora\n");
	else if(DDD==19)
		printf("Campinas\n");
	else if(DDD==27)
		printf("Vitoria\n");
	else if(DDD==31)
		printf("Belo Horizonte\n");
	else if(DDD!=61&&DDD!=71&&DDD!=11&&DDD!=21&&DDD!=21&&DDD!=32&&DDD!=19&&DDD!=27&&DDD!=31)
		printf("DDD nao cadastrado\n");
	
	return 0;
}