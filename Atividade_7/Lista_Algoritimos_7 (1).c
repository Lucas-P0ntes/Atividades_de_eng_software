int armazenaValores(float *valores);
int calculaQuantidade(float *valores,float valor, int indice2);
int posicoesVrepetidas(float *valores,float valor, int indice3);
main(){
float valores[81],valor,posicoes[81];
int indice,indice2,indice3,resultado;
armazenaValores(valores);
printf("\nDigite o valor que deseja comparar: \t",valor);
scanf("%f",&valor);
resultado=calculaQuantidade(valores,valor,indice2);
system("cls");
printf("O vetor se repete %i vezes. \n",resultado);
posicoesVrepetidas(valores,valor,indice3);
}
int armazenaValores(float *valores){
	int indice;
	char continuar;
	indice=0;
	do{
		indice++;
		printf("Digite o %i%c valor: \t",indice,248);
		scanf("%f",&valores[indice]);
		printf("Deseja continuar?\n");
		continuar=getche();
		continuar=toupper(continuar);
	}while(continuar=='S');
return *valores;
}
int calculaQuantidade(float *valores,float valor,int indice2){
	int resultado=0;
	for (indice2=1;indice2<=3;indice2++){
		if(valor==valores[indice2]){
			resultado+=1;
		}
	}
return resultado;
}
int posicoesVrepetidas(float *valores,float valor, int indice3){
	printf("O vetor se repete nas posicoes: \n");
for (indice3=1;indice3<=3;indice3++){
		if(valor==valores[indice3]){
		printf("%i%c\n",indice3,248);
		}
}
}
	
