#include<stdio.h>
int main(){
	int a,b,c;
	printf("Qual o primeiro numero ?");
	scanf("%i",&a);
	printf("Qual o segundo numero ?");
	scanf("%i",&b);
	printf("Qual o terceiro numero ?");
	scanf("%i",&c);
	if(a>b && a>c ){
		printf("O %i e o maior",a);
	}
	else if(b>a && b>c){
		printf("O %i e o maior",b);
	}
	else if (c>a && c>b){
		printf("O %i e o maior",c);
	}	
	return 0;
}
