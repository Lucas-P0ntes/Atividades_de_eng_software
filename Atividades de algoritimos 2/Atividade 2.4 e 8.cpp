#include<stdio.h>
int main(){
char nome[50], sexo ;
float altura, peso;
printf("Qual o seu nome ?");
scanf("%s",&nome);
printf("Qual e seu sexo ?(M) ou (F) ");
scanf("%s",&sexo);
printf("Qual e o seu altura em metros ?");
scanf("%f",&altura);
if('f' == sexo || 'F' == sexo ){
		peso = (62.1 * altura) - 44.7;
		printf("Bem vinda, Ilma Sra. %s, seu peso ideal e %0.2f",nome,peso);	
}
else{
	peso = (72.5 * altura) - 58;
	printf("Bem vindo,Ilmo Sro. %s seu peso ideal e %0.2f",nome ,peso);
	}
return 0;
}

