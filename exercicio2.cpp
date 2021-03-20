#include <stdio.h>
int main(){
	float raio, area;
	printf("####BEM VINDO####\n");
	printf("Qual o raio do circulo ?");
	scanf("%f", &raio);
	
	area = 3.14 *(raio*raio);
	printf("%f coresponde a %f area\n",raio ,area);
	printf("Muito obrigado por utilizar o progama");
	
	return 0;	
}
