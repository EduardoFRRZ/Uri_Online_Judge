#include <stdio.h>
 
int main() {
 
    double A,B,C,P1=2,P2=3,P3=5,MEDIA;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    MEDIA = ((A*P1)+(B*P2)+(C*P3))/10;
    printf("MEDIA = %.1lf\n",MEDIA);
    
    return 0;
}