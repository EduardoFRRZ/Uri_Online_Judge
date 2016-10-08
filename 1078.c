#include <stdio.h>
int main()
{
	int i,N,R;
	scanf("%d",&N);
	for(i=1;i<=10;i++)
	{
		R=i*N;
		printf("%d x %d = %d\n",i,N,R);
	}
	return 0;
}