#include<stdio.h>
int main(){
	int numero;
printf("Qual e o numero que vc quer saber ?");
scanf("%i",&numero);
	if(numero%2==1) {
		printf("O numero %i e impar", numero);	
	}
	else {
		printf("O numero %i e par",numero);
	}
return 0;
}
