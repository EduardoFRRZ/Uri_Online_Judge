#include <stdio.h>
 
int main() {
 
    double A,B,P1=3.5,P2=7.5,MEDIA;
    scanf("%lf",&A);
    scanf("%lf",&B);
    MEDIA = ((A*P1)+(B*P2))/11;
    printf("MEDIA = %.5lf\n",MEDIA);
    
    return 0;
}