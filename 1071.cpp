#include<iostream>

using namespace std;

int achaMenorValor(int X, int Y);
int achaSomatorio(int menor, int maior);

int main (){
	
	int X, Y, menorValor, Soma, menor, maior;
	
	cin >> X;
	cin >> Y;
	
	if(X < Y){
		menor = X;
		maior = Y;
	}
	else{
		menor = Y;
		maior = X;
	}
	
	Soma = achaSomatorio(menor, maior);
	cout << Soma << endl;
	
	return 0;
}

int achaSomatorio(int menor, int maior){	
	int soma = 0;
	if(menor == maior){
		return soma;
	}
	else{
		for (int i = menor; i!=maior; i++){
			menor++;
			if(menor%2!=0){
				soma = soma+menor;
			}
			if(menor == (maior-1)){
				break;
			}	
		}
		return soma;
	}
}