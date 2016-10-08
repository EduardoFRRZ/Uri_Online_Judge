#include <iostream>
using namespace std;

int main() {
	
	int x;
	while(1){
		int somaPares = 0;
		cin >> x;
		if(x == 0){
			break;
		}
		
		else{
			
			if(x%2 == 0){
				for(int i = 0; i < 5; i++){
					somaPares = somaPares + x;
					x = x + 2;
				}
			}
			
			if(x%2 != 0){
				x = x+1;
				for(int i = 0; i < 5; i++){
					somaPares = somaPares + x;
					x = x + 2;
				}
			}	
			cout << somaPares << endl;
		}
	}		
	return 0;
}