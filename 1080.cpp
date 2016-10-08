#include <iostream>
using namespace std;
int main()
{
	int Vet[100],i=1,Maior=0,casa;
	while(i<=100){
		cin>>Vet[i];
		if(Vet[i]>Maior) {
			Maior = Vet[i];
			casa = i;
		}
		i++;
	}
	cout<<Maior<<endl;
	cout<<casa<<endl;
	
	return 0;
}