#include <stdio.h>

int main(){
	
	float A, B, C, Perimetro, AreaTrapezio;
	
	scanf("%f %f %f", &A, &B, &C);
	
	if((B - C) < A && (B + C) > A){
		Perimetro = A + B + C;	
		printf("Perimetro = %.1f\n", Perimetro);
	}
	
	else{
		AreaTrapezio = ((A + B) * C) / 2;
		printf("Area = %.1f\n", AreaTrapezio);	
	}
	return 0;
}