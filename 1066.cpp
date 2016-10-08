#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, Par = 0, Impar = 0, Positivo = 0, Negativo = 0;
	
	cin >> a >> b >> c >> d >> e;
	
	if(a%2==0){
		Par++;
	}
	else
	{
		Impar++;
	}
	if(b%2==0){
		Par++;
	}
	else
	{
		Impar++;
	}
	if(c%2==0){
		Par++;
	}
	else
	{
		Impar++;
	}
	if(d%2==0){
		Par++;
	}
	else
	{
		Impar++;
	}
	if(e%2==0){
		Par++;
	}
	else
	{
		Impar++;
	}
		
			
	if(a>0){
		Positivo++;
	}
	if(a<0)
	{
		Negativo++;
	}
	if(b>0){
		Positivo++;
	}
	if(b<0)
	{
		Negativo++;
	}
	if(c>0){
		Positivo++;
	}
	if(c<0)
	{
		Negativo++;
	}
	if(d>0){
		Positivo++;
	}
	if(d<0)
	{
		Negativo++;
	}
	if(e>0){
		Positivo++;
	}
	if(e<0)
	{
		Negativo++;
	}
	
	cout<<Par<<" valor(es) par(es)"<<endl;
	cout<<Impar<<" valor(es) impar(es)"<<endl;
	cout<<Positivo<<" valor(es) positivo(s)"<<endl;
	cout<<Negativo<<" valor(es) negativo(s)"<<endl;
	
	return 0;
}