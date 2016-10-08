#include <stdio.h>
int main(){
	
double p,np,vup,p2,np2,vup2,vp;
scanf ("%lf",&p);
scanf("%lf",&np);
scanf("%lf",&vup);	
scanf ("%lf",&p2);
scanf("%lf",&np2);
scanf("%lf",&vup2);
vp = np * vup + np2 * vup2;
printf("VALOR A PAGAR: R$ %.2lf\n",vp);	
	
	
	return 0;
}