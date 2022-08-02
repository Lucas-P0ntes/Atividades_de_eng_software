#include<stdio.h>
int main(){
	float a,b,c;
	char A[50],B[50],C[50];
	printf("Qual o nome primeiro  ?\n");
	scanf("%s",&A);
	printf("Qual e a ltura dele  ?\n");
	scanf("%f",&a);
	printf("Qual o nome do segundo  ?\n");
	scanf("%s",&B);
	printf("Qual e a ltura dele  ?\n");
	scanf("%f",&b);
	printf("Qual o nome do terceiro ?\n");
	scanf("%s",&C);
	printf("Qual e a ltura dele  ? \n");
	scanf("%f",&c);
	if(a>b && a>c ){
		printf("O %s e o maior e mede %0.2f",A,a);
	}
	else if(b>a && b>c){
		printf("O %s e o maior e mede %0.2f",B,b);
	}
	else if (c>a && c>b){
		printf("O %s e o maior e mede %0.2f",C,c);
	}	
	return 0;
}
