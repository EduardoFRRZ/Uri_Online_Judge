#include <stdio.h>
int main(){
	
	float a, b, c,MaiorAB;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if (a>b&&a>c)
	printf("%.0f eh o maior\n",a);
    if (b>a&&b>c)
	printf("%.0f eh o maior\n",b);
	if (c>b&&c>a)
	printf("%.0f eh o maior\n",c);
	
	
	return 0;
}