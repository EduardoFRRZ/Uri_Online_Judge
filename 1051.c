#include <stdio.h>
int main()
{
	float x;
	scanf("%f",&x);
	if(x<=2000.00)
	{
		printf("Isento\n");
	}
	else if(x>=2000.01&&x<=3000.00)
	{
		printf("R$ %.2f\n",(x-2000.00)*0.08);
	}
	else if(x>=3000.01&&x<=4500.00)
	{
		printf("R$ %.2f\n",1000.00*0.08+(x-3000.00)*0.18);		
	}
	else if(x>4500.00)
	{
		printf("R$ %.2f\n",1000.00*0.08+1500.00*0.18+(x-4500.00)*0.28 );
		
	}
	
	return 0;
}