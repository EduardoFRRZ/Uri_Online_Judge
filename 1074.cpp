#include <iostream.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int vet[n];
	for(i=0;i<n;i++) {
		cin>>vet[i];
	}
	for(i=0;i<n;i++) {
		if(vet[i]%2==0&&vet[i]>0) {
			cout<<"EVEN POSITIVE"<<endl;
		}
		if(vet[i]%2!=0&&vet[i]>0) {
			cout<<"ODD POSITIVE"<<endl;
		}
		if(vet[i]%2==0&&vet[i]<0) {
			cout<<"EVEN NEGATIVE"<<endl;
		}
		if(vet[i]%2!=0&&vet[i]<0) {
			cout<<"ODD NEGATIVE"<<endl;
		}
		if(vet[i]==0) {
			cout<<"NULL"<<endl;
		}
	}
	return 0;
}