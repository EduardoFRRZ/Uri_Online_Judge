#include <stdio.h>
int main()
{
	int v[5],a=0,i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&v[i]);
		if(v[i]%2==0)
		{
			a=a+1;
		}
			
	}
	printf("%d valores pares\n",a);
	
	return 0;
}