#include <stdio.h>
int main()
{
	double a,b,c,raiz,R1,R2,r1,r2,r3;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	r1=(pow(b,2)-4*a*c);
	raiz=sqrt(r1);
	r2=2*a;
	R1=(-b+raiz)/r2;
	R2=(-b-raiz)/r2;
	if(r2==0||r1<0)
	{
		printf("Impossivel calcular\n");
	}
	else
	{
		printf("R1 = %.5lf\n",R1);
		printf("R2 = %.5lf\n",R2);
	}
	
	
	return 0;
}