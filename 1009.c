#include <stdio.h>
 
int main() {
 
    float Sf,Td,C,CC,P = 15;
    char NOME[30];
    gets(NOME);
	scanf("%f",&Sf);
    scanf("%f",&Td);
    C = P/100;
    CC =(Td * C)+Sf;
    printf(" %s TOTAL = R$ %.2f\n",NOME,CC);
    
    return 0;
}