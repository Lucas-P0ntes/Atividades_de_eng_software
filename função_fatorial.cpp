#include <stdio.h>
#include <stdlib.h>
int fatorial(int number){
		int result;
	if(number==0){
		result = 1;
	}else{
		result=number * fatorial(number-1);
	}
		return result ;
}
int main(){
	int number=0;
	printf("Qual o valor que deve ser fatorado ?");
	scanf("%i",&number);
	printf("O fatorial e :%i",fatorial(number));
	return 0;
}