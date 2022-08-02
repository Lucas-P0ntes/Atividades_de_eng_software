
float porcentPreco(float *preco,int indice);
float porcentPrecoVendedor(float *preco,int indice);
main(){
	float preco[100],precoPorcentVendedor;
	int indice,indice2;
	char continuar;
	indice=1;
	do{
		printf("\nDigite o valor do %i%c cd:\t",indice,248);
		scanf("%f",&preco[indice]);
		printf("Deseja adicionar mais um cd?\n");
		printf("Digite (S) para Sim.\n");
		printf("Digite outra tecla para encerrar a contagem!\n");
		continuar=getche();
		continuar=toupper(continuar);
		indice++;
		system("cls");
	}while(continuar=='S');
porcentPrecoVendedor(preco,indice);
printf("\n\n\n\n");
	for (indice2=1;indice2<=indice-1;indice2++){
		printf("O preco do  %i%c cd sem aumento e de: %.2f reais.\n",indice2,248,preco[indice2]);
	}	
}

float porcentPrecoVendedor(float *preco,int indice){
	float precoPorcentV,precoPorcent,precoPorcentF;
	int ind,PorcentV;
	printf("\nDigite o valor percentual que deseja adicionar sob cada cd:\t");
	scanf("%i",&PorcentV);	
		system("cls");
	for(ind=1;ind<=indice-1;ind++){
		precoPorcent=(preco[ind]/100)*10;
		precoPorcentV=(preco[ind]/100)*PorcentV;
		precoPorcentF=precoPorcentV+preco[ind];
		printf("O valor do %i%c cd com o aumento de 10%c mais a porcentagem o vendedor e de: %.2f reais.\n",ind,248,37,precoPorcentF);
	}
	return precoPorcentF;
}
