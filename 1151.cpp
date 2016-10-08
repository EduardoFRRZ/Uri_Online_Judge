#include <iostream>
using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	int vet[45];
	vet[0] = 0;
	vet[1] = 1;
	
	for(int i = 2; i < N; i++){
		vet[i] = vet[i - 1] + vet[i - 2];
	}
	
	for(int i = 0; i < N-1; i++){
		cout << vet[i] << " ";
	}
	cout << vet[N-1] << endl;
	
	return 0;
}