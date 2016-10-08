#include <stdio.h>
int main()
{
	int A,B,C,A1,B1,C1,aux;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	aux=0;
	A1=A;
	B1=B;
	C1=C;
	if(A>B)
	{
		aux=A;
		A=B;
		B=aux;
	}
	
		if(B>C)
		{
		aux=B;
		B=C;
		C=aux;	
		}
	
		if(C<A)
		{
			aux=A;
		    A=C;
		    C=aux;
		}
		if(A>B)
	{
		aux=A;
		A=B;
		B=aux;
	}
	
	printf("%d\n%d\n%d\n",A,B,C);
	printf("\n%d\n%d\n%d\n",A1,B1,C1);
	
	
	
	
	
	
	
	
	return 0;
}