#include <stdio.h>
#include <math.h>
int main()
{
    double V[3];
    int i,j,aux;
    scanf("%lf %lf %lf",&V[0],&V[1],&V[2]); 
    for(i=0;i<3;i++)
    {
    for(j=i+1;j<3;j++)
    {
        if(V[i]<V[j])
        {
            aux=V[i];
            V[i]=V[j];
            V[j]=aux;
        }
          
    }
          
    }
      
        if(V[0]>=V[1]+V[2])
        {
            printf("NAO FORMA TRIANGULO\n");
              
        }
        else if(pow(V[0],2)==pow(V[1],2)+pow(V[2],2))
        {
            printf("TRIANGULO RETANGULO\n");
        }      
        else if(pow(V[0],2)>pow(V[1],2)+pow(V[2],2))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
         if(pow(V[0],2)<pow(V[1],2)+pow(V[2],2))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
         if(V[0]==V[1]&&V[1]==V[2])
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if((V[0]==V[1]&&V[2]!=V[0])||(V[1]==V[2]&&V[0]!=V[1])||(V[2]==V[0]&&V[1]!=V[2]))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    return 0;
     
}