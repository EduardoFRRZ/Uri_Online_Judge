#include <iostream>
using namespace std;

int main() {
	
	int gasolina = 0, alcool = 0, disel = 0, combustivel;
	
	while(true){
		
		cin >> combustivel;
		
		if(combustivel == 1)
			alcool++;
		if(combustivel == 2)
			gasolina++;
		if(combustivel == 3)
			disel++;
		if(combustivel == 4)
			break;
			
	}
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << alcool << endl;
	cout << "Gasolina: " << gasolina << endl;
	cout << "Diesel: " << disel <<endl;
	
	return 0;
}