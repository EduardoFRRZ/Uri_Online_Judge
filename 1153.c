#include <stdio.h>
int main()
{
	int i,n,soma=1;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		soma=soma*i;
	}
	printf("%d\n",soma);
	
	return 0;
}