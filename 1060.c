#include <stdio.h>
int main()
{
	int a=0,b=0,i,v[6];
	for(i=0;i<6;i++)
	{
		scanf("%f",&v[i]);
		if(v[i]>0)
		{
			a=a+1;
			b=b+v[i];
			
		}
	}
	printf("%d valores positivos\n",a);
	
	
	
	
	
	return 0;
}