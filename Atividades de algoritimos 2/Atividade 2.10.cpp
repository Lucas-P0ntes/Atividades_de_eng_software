#include<stdio.h>//Biblioteca
int main (){ // fun�ao para inicior o codigo
	int a,b,c;// aloca�ao  de memoria em inteiro
	printf("Qual o primeiro nomero ?");// fun�ao para escrever na tela do usuario
	scanf("%i",&a);//receber a variavel 
	printf("Qual o segundo nomero ?");// fun�ao para escrever na tela do usuario
	scanf("%i",&b);//receber a variavel 
	printf("Qual o terceiro nomero ?");// fun�ao para escrever na tela do usuario
	scanf("%i",&c);//receber a variavel 
	if ((a<b) && (a<c)){ // condi�ao para execu�ao do codigo
		printf("o menor e %i ",a);// fun�ao para escrever na tela do usuario
	}
	else if (b<c){//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
		printf("o menor e %i",b);// fun�ao para escrever na tela do usuario
	}
	else if(c){ //condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
		printf("o menor e %i",c);// fun�ao para escrever na tela do usuario
	}	
	return 0;// encerrada imediatamente
	
}
