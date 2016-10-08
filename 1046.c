#include <stdio.h>
int main()
{
	int a,b,t;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>=b)
	{
		t=b-a+24;
	}
	else
	{
		t=b-a;
	}
	
	
	printf("O JOGO DUROU %d HORA(S)\n",t);
	
	
	return 0;
}