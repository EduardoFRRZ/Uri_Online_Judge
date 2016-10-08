#include <iostream>
using namespace std;

int main() {
	int c;
	cin >> c;
	string vetNome[c];
	int vetForca[c];
	
	for(int i = 0; i < c; i++){
		cin >> vetNome[i] >> vetForca[i];
	}
	for(int i = 0; i < c; i++){
		if(vetNome[i] == "Thor"){
			cout << "Y" << endl;
		}else{
			cout << "N" << endl;
		}
	}
	
	return 0;
}