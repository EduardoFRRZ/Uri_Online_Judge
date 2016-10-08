#include <stdio.h>
int main()
{
	int i,n,m,aux,soma=0;
	
	while(1)
	{
		scanf("%d",&n);
		scanf("%d",&m);
		if(m>n)
		{
			aux=m;
			m=n;
			n=aux;
		}
		for(i=m;i<=n;i++)
		{
		 if(n>0&&m>0)
		 {
		 	soma=soma+i;
		    printf("%d ",i);
		    if(i==n)
		    {
		  	  printf("Sum=%d\n",soma);
		    }
		 }
		  
		  	
		}
		
		if(n<=0||m<=0)
		{
			break;
		}
			
		soma=0;	

	}
	
	
	
	return 0;
}