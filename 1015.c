#include <stdio.h>
int main(){
	
	float x1,y1,x2,y2,Distancia;
	scanf("%f",&x1);
	scanf("%f",&y1);
	scanf("%f",&x2);
	scanf("%f",&y2);
	Distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("%.4f\n",Distancia);
	
	return 0;
}