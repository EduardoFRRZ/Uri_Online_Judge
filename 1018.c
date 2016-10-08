int main(){

    int N,L,cem,cinquenta,vinte,dez,cinco,dois,um;
    

    scanf("%d",&N);
    L=N;
if(0<N&&N<1000000)
{
	cem = N / 100;
    N = N - (cem *100);

    cinquenta = N / 50;
    N = N - (cinquenta * 50);

    vinte = N / 20;
    N = N - (vinte * 20);

    dez = N /10;
    N = N -(dez * 10);

    cinco = N / 5;
    N = N - (cinco * 5);

    dois = N / 2;
    N = N - (dois * 2);
}
    
    printf("%d\n",L);
    printf("%d nota(s) de R$ 100,00\n",cem);
    printf("%d nota(s) de R$ 50,00\n",cinquenta);
    printf("%d nota(s) de R$ 20,00\n",vinte);
    printf("%d nota(s) de R$ 10,00\n",dez);
    printf("%d nota(s) de R$ 5,00\n",cinco);
    printf("%d nota(s) de R$ 2,00\n",dois);
    printf("%d nota(s) de R$ 1,00\n",N);


   return(0);
}