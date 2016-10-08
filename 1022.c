#include <stdio.h>

struct numeradorDenominador {	
	int N, D; 
};
// ADICAO
struct numeradorDenominador soma(int n1, int d1, int n2, int d2) { 
	struct numeradorDenominador S;
	int Soma, Soma2, Somatorio, i;
	Soma =  (n1*d2 + n2*d1);
	Soma2 =(d1*d2);
	S.N = Soma;
	S.D = Soma2;
	return S;	
};
// SUBTRACAO
struct numeradorDenominador subtrai(int n1, int d1, int n2, int d2){
	struct numeradorDenominador S;
	int Sub, Sub2;
	Sub = (n1*d2 - n2*d1);
	Sub2 = (d1*d2);	
	S.N = Sub;
	S.D = Sub2;
	return S;	
};
// MULTIPLICACAO
struct  numeradorDenominador multiplica(int n1, int d1, int n2, int d2){
	struct numeradorDenominador M;
	int Mult, Mult2;
	Mult = (n1*n2);
	Mult2 = (d1*d2);
	M.N = Mult;
	M.D = Mult2;
	return M;
};
// DIVISAO
struct numeradorDenominador divisao(int n1, int d1, int n2, int d2){
		struct numeradorDenominador D;
		int Div, Div2;
		 Div = (n1*d2);
		 Div2 = (n2*d1);
		 D.N = Div;
		 D.D = Div2;
		 return D;
};
// SIMPLIFICA RESULTADO
struct numeradorDenominador simplifica(int n, int d){
	struct numeradorDenominador Simp;
	int i;
	if(n == 0){
		n = n / d;
		d = d / d;
	}else{
		if(n <= d){
			i = n;
		}else{
			
			i = d;
		}
		
	   	if(i < 0){
		   	i = i * (-1);
		}   
		while(1){
			if((n%i == 0)&&(d%i == 0)){
				n = n / i;
				d = d / i;
				break;
			}else{
			   	i--;
			}
		}		
	}
	
	Simp.N = n;
	Simp.D = d;
	return Simp; 
};

int main() {
	
	int N1, D1, N2, D2, ct, i = 0;
	char op;
	scanf("%d", &ct);
	struct numeradorDenominador resultado, simplificacao;
	
	while(i < ct){
		scanf("%d / %d %c %d / %d", &N1, &D1, &op, &N2, &D2);
		
		if(op == '+'){
			resultado = soma(N1, D1, N2, D2);
		}
		
		if(op == '-'){
			resultado = subtrai(N1, D1, N2, D2);
		}
		
		if(op == '*'){
			resultado = multiplica(N1, D1, N2, D2);
		}
		
		if(op == '/'){
			resultado = divisao(N1, D1, N2, D2);
		}	
		simplificacao = simplifica(resultado.N, resultado.D);
		printf("%d/%d = %d/%d\n", resultado.N, resultado.D, simplificacao.N, simplificacao.D);	
		i++;
	}
	
	i = 0;
	
	return 0;
}