#include <stdio.h>
int main()
{
	double a,b,ns;
	scanf("%lf",&a);
	if(a>=0&&a<=400)
	{
		b=a*15/100;
		ns=a+b;
		printf("Novo salario: %.2lf\n",ns);
		printf("Reajuste ganho: %.2lf\n",b);
		printf("Em percentual: 15 %%\n");
	}
	if(a>400&&a<=800)
	{
		b=a*12/100;
		ns=a+b;
		printf("Novo salario: %.2lf\n",ns);
		printf("Reajuste ganho: %.2lf\n",b);
		printf("Em percentual: 12 %%\n");
	}
	if(a>800&&a<=1200)
	{
		b=a*10/100;
		ns=a+b;
		printf("Novo salario: %.2lf\n",ns);
		printf("Reajuste ganho: %.2lf\n",b);
		printf("Em percentual: 10 %%\n");
	}
	if(a>1200&&a<=2000)
	{
		b=a*7/100;
		ns=a+b;
		printf("Novo salario: %.2lf\n",ns);
		printf("Reajuste ganho: %.2lf\n",b);
		printf("Em percentual: 7 %%\n");
	}if(a>2000)
	{
		b=a*4/100;
		ns=a+b;
		printf("Novo salario: %.2lf\n",ns);
		printf("Reajuste ganho: %.2lf\n",b);
		printf("Em percentual: 4 %%\n");
	}
	
	
	return 0;
}