#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int exp,N,i,RespExp;
	cin>>N;
	exp = 2;
	for(i=1;i<=N;i++) {
		if(i%2==0){
			RespExp = pow(i,exp);
			cout<<i<<"^"<<exp<<" = "<<RespExp<<endl;
		}	
	}
	return 0;
}