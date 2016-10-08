#include <iostream>
using namespace std;

int main(){
	
	int x, z;
	cin >> x >> z;
	while(1){
		
		if(x >= z){
			cin >> z;
		}else{
			break;
		}
	}
	int cont = 1, soma = x, total = x;
	while(1){
		if(total <= z){
			total = total + (soma + 1);
			soma++;
			cont++;	   	
		}else{
			break;
		}
		
	}
	cout << cont << endl;
}