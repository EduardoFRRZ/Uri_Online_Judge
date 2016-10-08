#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int opcao, grenais = 0, Vinter = 0, Vgremio = 0, Empate = 0, Igols, Ggols, x = 0;
	while(1){
		if(x == 0){
			cin >> Igols >> Ggols;
			if(Igols > Ggols){
				Vinter++;
			}
			if(Ggols > Igols){
				Vgremio++;
			}
			if(Ggols == Igols){
				Empate++;
			}
			x++;
			grenais++;
		}
		
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> opcao;
		if(opcao == 1){
			cin >> Igols >> Ggols;
			if(Igols > Ggols){
				Vinter++;
			}
			if(Ggols > Igols){
				Vgremio++;
			}
			if(Ggols == Igols){
				Empate++;
			}
			grenais++;
		}
		if(opcao == 2){
			
			printf("%d grenais\n", grenais);
			printf("Inter:%d\n", Vinter);
			printf("Gremio:%d\n", Vgremio);
			printf("Empates:%d\n", Empate);
			if(Vinter == Vgremio){
				printf("Nao houve vencedor\n");
			}
			if (Vinter > Vgremio){
				printf("Inter venceu mais\n");
			}
			if(Vinter < Vgremio){
				printf("Gremio venceu mais\n");
			}
			break;
		}
	}
}