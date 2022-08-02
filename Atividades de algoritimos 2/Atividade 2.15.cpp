#include<stdio.h>
int main(){
	int time , valor, juros , calculo;
	printf("Quantas horas de internet voce utilizou ?");
	scanf("%i",&time);
	if(time <= 20){
		printf("Voce para 20 reias ");
	}
	else{
		calculo = time - 20 ;
		juros = calculo * 3; 
		valor = 30 + juros;
		printf("Voce voi pagar %i reais",valor);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
