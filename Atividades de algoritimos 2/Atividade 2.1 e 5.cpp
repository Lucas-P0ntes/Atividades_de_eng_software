#include<stdio.h>
int main(){
	int velocidade;
	char placa[7];
 printf("Qual era sua velocidade na via ? ");
 scanf("%i",&velocidade);
 printf("Qual a sua placa do veiculo ?");
 scanf("%s",&placa);
 if(velocidade > 80 ){
 	printf("O carro de placa %s foi multado por estar acima da velocidade permitida");
 	
 	
 }
 else {
 	printf("Não consta nenhuma multa em sua placa");
 	
 	
 }


	return 0;
}
