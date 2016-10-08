#include <iostream>
using namespace std;

int main()
{
	string P1,P2,P3;
	cin>>P1>>P2>>P3;
	if(P1=="vertebrado") {
		if(P2=="ave"){
			if(P3=="carnivoro") {
				cout<<"aguia"<<endl;
			}
			if(P3=="onivoro") {
				cout<<"pomba"<<endl;
			}
		}
		
		if(P2=="mamifero") {
			if(P3=="onivoro") {
				cout<<"homem"<<endl;
			}
			if(P3=="herbivoro") {
				cout<<"vaca"<<endl;
			}
		}
	}
	
	if(P1=="invertebrado") {
		if(P2=="inseto") {
			if(P3=="hematofago") {
				cout<<"pulga"<<endl;
			}
			if(P3=="herbivoro") {
				cout<<"lagarta"<<endl;
			}
		}
		
		if(P2=="anelideo") {
			if(P3=="hematofago") {
				cout<<"sanguessuga"<<endl;
			}
			if(P3=="onivoro") {
				cout<<"minhoca"<<endl;
			}
		}
	}
	return 0;
}