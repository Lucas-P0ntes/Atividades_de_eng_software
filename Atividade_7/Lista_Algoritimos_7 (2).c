#include<stdio.h>
float leValidaDados(char *Matricula, int *funcionario,float *salario);
float levalidaSalario(float *salario);
float levalidaSalarioMaior(float *salario);
main(){
	char Matricula[10];
	int funcionario[100],indice,contagem;
	float salario[100],salarioMaior,salarioMenor;
leValidaDados(Matricula,funcionario,&salario);
levalidaSalario(salario);
levalidaSalarioMaior(salario);
}

float leValidaDados(char *Matricula,int *funcionario,float *salario){
int indice,indiceS;
char continuar;
indice=1;
		do{
			do{
			printf("\nDigite a Matricula do %i%c funcionario:\t",indice,248);
			fflush(stdin);
			gets(Matricula);
				if(strcmp(Matricula,"")==0){
					system("cls");
					puts("Matricula obrigatorio.");
					}
					}while(strcmp(Matricula,"")==0);
			printf("Digite o salario do %i%c funcionario:\t",indice,248);
			scanf("%f",&salario[indice]);
				if(salario<=0){
				printf("Salario invalido.");
				}
				if (continuar=='N'){
					break;
				}
				printf("Deseja adicionar mais um funcionario?\n");
				continuar=getche();
				continuar=toupper(continuar);
				indice++;
				}while(salario<=0 || continuar=='S');

}
float levalidaSalario(float *salario){
	float salarioMenor;
	int indice;
	salarioMenor=salario[1];
	for (indice=1;indice<=100;indice++){
		if(salario[indice]<salarioMenor){
			salarioMenor=salario[indice];
		}		
}
printf("O menor salario e de :%.3f",salarioMenor);
}
float levalidaSalarioMaior(float *salario){
	float salarioMaior;
	int indice;
	salarioMaior=salario[1];
	for (indice=1;indice<=100;indice++){
		if(salario[indice]>salarioMaior){
			salarioMaior=salario[indice];
		}		
}
printf("\nO menor salario e de :%.3f",salarioMaior);
}

