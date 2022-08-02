#include <stdio.h>
int main(){
	

	int horas , minutos , segundos ;
	
	printf("####BEM VINDO####\n");
	printf("Qual a horas deve ser trasformanda ?");
	scanf("%d", &horas);

	minutos = horas*60 ;
	segundos = minutos*60 ;
	
	printf( "%d horas corresponde a %d em minutos e %d em segundos.\n" ,horas , minutos ,segundos);
	printf("Muito obrigado por utilizar o progama");
	
	return 0;	
}
