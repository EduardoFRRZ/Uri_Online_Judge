#include <stdio.h>
int main()
{
	int N,i;
	
	while(1)
	{
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(i<N)
		{
			printf("%d ",i);
		}
		if(i==N)
		{
			printf("%d\n",i);
		}
		
	}
	if(N==0)
		{
			break;
		}
	}
	
	
	return 0;
}