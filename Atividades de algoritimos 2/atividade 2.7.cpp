#include<stdio.h>
int main (){
	int a,b, c;
	printf("Qual o primerio numero ?");
	scanf("%i",&a);
	printf("Qual segundo numero ?");
	scanf("%i",&b);
	if( a > b){
		
		c = a - b ;
		printf("%i",c);
		
	}
	else {
		c = b - a ;
		printf("%i",c);
	}
	
	
	
	
	
	
	
	
	return 0;
}
