#include <iostream>
using namespace std;
int main()
{
	int senha=2002,s;
	while(1) {
	cin>>s;
		if(s==senha){
			cout<<"Acesso Permitido"<<endl;
			break;
		}
		else {
			cout<<"Senha Invalida"<<endl;	
		}
	}
	return 0;
}