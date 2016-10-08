#include <iostream>
using namespace std;
int main()
{
	int X,in=0,out=0;
	cin>>X;
	int i,Vet[X];
	for(i=0;i<X;i++) {
		cin>>Vet[i];
		if(Vet[i]<=20&&Vet[i]>=10) {
			in++;
		}
		else {
			out++;
		}
	}
	cout<<in<<" in"<<endl;
	cout<<out<<" out"<<endl;
	return 0;
}