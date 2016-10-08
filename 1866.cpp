#include <iostream>
using namespace std;

int main(){
	
	int C, N;
	
	cin >> C;
	int Vet[C];
	
	for(int i = 0; i < C; i++){
		cin >> N;
		Vet[i] = N;
	}
	int Vet2[C];
	
	for(int i = 0; i < C; i++) {
		Vet2[i] = 0;
		for(int j = 0; j < Vet[i]; j++){
			Vet2[i] = (Vet2[i] - 1) * -1;
		}
	}
	for(int i = 0; i < C; i++){
		cout << Vet2[i] << endl;
	}
	
	return 0;
}