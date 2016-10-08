#include <stdio.h>
int main()
{
	float a,b,c,d,e,f,g=0,h=0;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&e);
	scanf("%f",&f);
	if(a>0)
	{
	g=g+1;
	h=h+a;	
	}
	if(b>0)
	{
	g=g+1;
	h=h+b;	
	}
	if(c>0)
	{
	g=g+1;
	h=h+c;	
	}
	if(d>0)
	{
	g=g+1;
	h=h+d;	
	}
	if(e>0)
	{
	g=g+1;
	h=h+e;	
	}
	if(f>0)
	{
	g=g+1;
	h=h+f;	
	}
	printf("%.0f valores positivos\n",g);
	printf("%.1f\n",h/g);
	
	
	return 0;
}