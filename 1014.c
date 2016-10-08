#include <stdio.h>
int main(){
	
	double csm,dt,cg;
	scanf("%lf",&dt);
	scanf("%lf",&cg);
	csm = dt/cg;
	printf("%.3lf km/l\n",csm);
	
	return 0;
}