#include<stdio.h>
int main(){
	float A ,b ,c, media ;
	printf("####BEM VINDO####\n");
	printf("qual e o primeiro numero ?");
	scanf("%f", &A);
	printf("qual e o segundo numero ?");
	scanf("%f", &b);
	printf("qual e o terceiro numero ?");
	scanf("%f", &c);
	
	media = (A+b+c)/3 ;
	printf("A media de %f ,%f ,%f e %f\n",A  ,b , c ,media);
	printf("Muito obrigado por utilizar o progama");
	
	
	
	
	return 0;
}
