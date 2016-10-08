#include <stdio.h>
int main()
{
	float A,B,C;
	scanf("%f",&A);
	scanf("%f",&B);
	if(A==1)
	{
	C=4.00*B;
	printf("Total: R$ %.2f\n",C);	
	}
	if(A==2)
	{
		C=4.50*B;
		printf("Total: R$ %.2f\n",C);	
	}
	if(A==3)
	{
		C=5.00*B;
		printf("Total: R$ %.2f\n",C);	
	}
	if(A==4)
	{
		C=2.00*B;
		printf("Total: R$ %.2f\n",C);	
	}
	if(A==5)
	{
		C=1.50*B;
		printf("Total: R$ %.2f\n",C);	
	}
		
	
	return 0;
}