#include <stdio.h>
int main()
{
	int V[4],i;
	V[2]=1;
	scanf("%d",&V[0]);
	for(i=1;i<=V[0];i++)
	{
		for(V[1]=1;V[1]<=4;V[1]++)
		{
			if(V[1]<4)
			{
				printf("%d ",V[2]);
				V[2]=V[2]+1;
			}
			else
			{
				printf("PUM\n");
				V[2]=V[2]+1;
			}
		}
	}
		
	return 0;
}