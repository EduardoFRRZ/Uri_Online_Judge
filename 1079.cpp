#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	
	int X;
	cin >> X;
	double  vet[X];
	for(int i =0; i < X; i++){
		double n1, n2, n3,soma;
		cin >> n1 >> n2 >> n3;
		soma = ((n1 * 2.0) + (n2 * 3.0) + (n3 * 5.0))/10;
		vet[i] = soma;
	}
		
	for(int i = 0; i < X; i++){
		printf("%.1lf\n", vet[i]);
	}
	return 0;
}