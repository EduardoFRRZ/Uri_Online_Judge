#include <iostream>
using namespace std;
int main()
{
	int i=1,j=7;
	while(j>4)
	{
	 	cout<<"I="<<i<<" J="<<j<<endl;
		j=j-1; 
	 	if(j==4) {
			 i=i+2;
			 j=7;
		 }
		 
		 if(i==11){
			 break;
		 }	 
	}
	return 0;
}