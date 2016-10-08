#include <stdio.h>
int main()
{
	int botas,V[10000],i,j;
	char L[10000];
	while(scanf("%d",&botas)!=EOF)
	{
	int pares=0;	
	
	for(i=0;i<botas;i++)
	{
		scanf("%d",&V[i]);
		scanf("%s",&L[i]);
	}
	for(i=0;i<botas;i++)
	{
		for(j=0;j<botas;j++)
		{
			if((V[i]!=0&&V[j]!=0)&&(V[i]==V[j])&&(L[i]!=L[j]))
			{
					pares++;
					V[i]=0;
					V[j]=0;		
			}
		}
	}
	printf("%d\n",pares);
	
	}
	
	return 0;
}