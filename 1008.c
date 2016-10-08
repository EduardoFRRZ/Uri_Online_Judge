#include <stdio.h>
 
int main() {
 
    float SALARY,NUMBER,NUMBER1,Ht,Vh;
    scanf("%f",&NUMBER1);
    scanf("%f",&Ht);
    scanf("%f",&Vh);
    NUMBER = NUMBER1;
    printf("NUMBER = %.0f\n",NUMBER);
    SALARY = Ht * Vh;
    printf("SALARY = U$ %.2f\n",SALARY);
    
    return 0;
}