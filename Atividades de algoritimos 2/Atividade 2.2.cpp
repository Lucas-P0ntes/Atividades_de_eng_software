#include<stdio.h>
int main(){
	int numero;
printf("Qual o numero ?");
scanf("%i",&numero);
if(numero< 0){
	numero  = -1 * numero;
	
}		
	printf("O modulo e :%i", numero);
	
	
	return 0;
}
