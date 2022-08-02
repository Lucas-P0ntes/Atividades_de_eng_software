#include<stdio.h>//Biblioteca
int main (){ // funçao para inicior o codigo
	int a,b,c;// alocaçao  de memoria em inteiro
	printf("Qual o primeiro nomero ?");// funçao para escrever na tela do usuario
	scanf("%i",&a);//receber a variavel 
	printf("Qual o segundo nomero ?");// funçao para escrever na tela do usuario
	scanf("%i",&b);//receber a variavel 
	printf("Qual o terceiro nomero ?");// funçao para escrever na tela do usuario
	scanf("%i",&c);//receber a variavel 
	if ((a<b) && (a<c)){ // condiçao para execuçao do codigo
		printf("o menor e %i ",a);// funçao para escrever na tela do usuario
	}
	else if (b<c){//condiçao para execuçao caso nao nao atenda a condiçao anterior
		printf("o menor e %i",b);// funçao para escrever na tela do usuario
	}
	else if(c){ //condiçao para execuçao caso nao nao atenda a condiçao anterior
		printf("o menor e %i",c);// funçao para escrever na tela do usuario
	}	
	return 0;// encerrada imediatamente
	
}
