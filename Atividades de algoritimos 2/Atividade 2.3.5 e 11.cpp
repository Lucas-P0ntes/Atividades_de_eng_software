#include<stdio.h>//Biblioteca
int main(){// fun�ao para inicior o codigo
int lado1, lado2, lado3;// aloca�ao  de memoria 
printf("Qual o primeiro lado do triangulo ?");	// fun�ao para escrever na tela do usuario
scanf("%i",&lado1);//receber a variavel 
printf("Qual o segundo lado do triangulo ?");// fun�ao para escrever na tela do usuario
scanf("%i",&lado2);//receber a variavel 
printf("Qual o terceiro lado do triangulo ?");// fun�ao para escrever na tela do usuario
scanf("%i",&lado3);//receber a variavel
if(lado1 + lado2>lado3 && lado1 +lado3>lado2 && lado2 + lado3 > lado1){// condi�ao para execu�ao do codigo
	printf("Os tres lados formam um triangulo\n");// fun�ao para escrever na tela do usuario
	
	if (lado1 == lado2 && lado1 == lado3){//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior

		printf("Equilatero\n");// fun�ao para escrever na tela do usuario
	}
	else{//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
	
		if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3 ){//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
			printf("isosceles\n");// fun�ao para escrever na tela do usuario
		}
	
		else {//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
			printf("escaleno");// fun�ao para escrever na tela do usuario
		}	
}

}


else{//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
	printf("Nao e possivel formar um triangulo");// fun�ao para escrever na tela do usuario
}
	return 0;// encerrada imediatamente
}
