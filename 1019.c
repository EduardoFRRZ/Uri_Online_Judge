#include <stdio.h>
int main(){
	
	int segundos,minutos,horas,segundo;
	scanf("%d",&segundos);
	horas = segundos/3600;
	minutos = (segundos-(horas*3600)) / 60;
	segundo = segundos-(horas*3600)-(minutos*60);
	printf("%d:%d:%d\n",horas,minutos,segundo);
	
	return 0;
}