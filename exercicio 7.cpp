#include<stdio.h>
int main(){
		char nome[30],sexo;
		int matricula, salario_h, horas, salario,i;
		printf("Qual o nome do funcionario?\n");
		gets(nome);
		printf("Qual o sexo do funcionario? (F ou M)\n");
		sexo=getchar();
		printf("Qual a matricula do funcionario?(apenas numeros)\n");
		scanf("%i", &matricula);
		printf("Qual a numero de horas de trabalho do funcionario?\n");
		scanf("%i", &horas);	
		printf("Qual o salario por hora  do funcionario?\n");
		scanf("%i", &salario_h);
		salario = horas * salario_h;
		printf("O funcionario se chama %s ",nome);
		 printf("seu sexo e %c  ",sexo);
		printf(" sua matricula e %d ele trabalha por mes %d horas e recebe %d por mes", matricula, horas ,salario);		
	return 0;
}
