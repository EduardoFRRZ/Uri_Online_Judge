#include <iostream>
using namespace std;

int main(){

	int X, Y, SOMA = 0;
	
	cin >> X >> Y;
	
	if(X < Y){
		
		for(int i = X; i <= Y; i++){
		
			if(i%13 != 0){
				SOMA = SOMA + i;
			}
		}
	}
	
	else{
		
		for(int i = Y; i <= X; i++){
			
			if(i%13 != 0){
				SOMA = SOMA + i;
			}
		}
	}	
	
	cout << SOMA << endl;
	
	return 0;
}