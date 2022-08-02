#include<stdio.h>//Biblioteca
int main(){// funçao para inicior o codigo
int lado1, lado2, lado3;// alocaçao  de memoria 
printf("Qual o primeiro lado do triangulo ?");	// funçao para escrever na tela do usuario
scanf("%i",&lado1);//receber a variavel 
printf("Qual o segundo lado do triangulo ?");// funçao para escrever na tela do usuario
scanf("%i",&lado2);//receber a variavel 
printf("Qual o terceiro lado do triangulo ?");// funçao para escrever na tela do usuario
scanf("%i",&lado3);//receber a variavel
if(lado1 + lado2>lado3 && lado1 +lado3>lado2 && lado2 + lado3 > lado1){// condiçao para execuçao do codigo
	printf("Os tres lados formam um triangulo\n");// funçao para escrever na tela do usuario
	
	if (lado1 == lado2 && lado1 == lado3){//condiçao para execuçao caso nao nao atenda a condiçao anterior

		printf("Equilatero\n");// funçao para escrever na tela do usuario
	}
	else{//condiçao para execuçao caso nao nao atenda a condiçao anterior
	
		if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3 ){//condiçao para execuçao caso nao nao atenda a condiçao anterior
			printf("isosceles\n");// funçao para escrever na tela do usuario
		}
	
		else {//condiçao para execuçao caso nao nao atenda a condiçao anterior
			printf("escaleno");// funçao para escrever na tela do usuario
		}	
}

}


else{//condiçao para execuçao caso nao nao atenda a condiçao anterior
	printf("Nao e possivel formar um triangulo");// funçao para escrever na tela do usuario
}
	return 0;// encerrada imediatamente
}
