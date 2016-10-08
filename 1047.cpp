#include <iostream>
using namespace std;
int main()
{
	int Hi,Hf,Mi,Mf,Minutos,Horas=0;
	cin>>Hi>>Mi>>Hf>>Mf;
	
	if((Hi<Hf&&Mi<Mf)||(Hi==Hf&&Mi<Mf)||(Hi<Hf&&Mi>Mf)) {
		Minutos = ((Hf-Hi)*60)+(Mf-Mi);
		while(Minutos>=60) {
			Horas++;
			Minutos=Minutos-60;
		}
	}
	
	if((Hi>Hf&&Mi>Mf)||(Hi==Hf&&Mi>Mf)||(Hi>Hf&&Mi<Mf)) {
		Minutos = ((Hi-Hf)*60)+(Mi-Mf);
		Minutos = 1440 - Minutos;
		while(Minutos>=60) {
			Horas++;
			Minutos=Minutos-60;
		}
	}
	
	if(Hi==Hf&&Mi==Mf) {
		Horas = 24;
		Minutos = 0;
	}
	
	
	cout<<"O JOGO DUROU "<<Horas<<" HORA(S) E "<<Minutos<<" MINUTO(S)"<<endl;
	
	return 0;
}