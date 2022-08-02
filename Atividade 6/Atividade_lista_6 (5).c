main(){
	float lucro, lucroMaximo, preco, precoIng;
	int ingressos, qtdeIngressos = 120;	
	for(preco=15; preco>=3; preco=preco-3){
		lucro = (preco*qtdeIngressos)-600;
		if(preco==15){
			lucroMaximo = lucro;
			precoIng = preco;
			ingressos = qtdeIngressos;
		}else
			if(lucroMaximo<lucro){
				lucroMaximo = lucro;
			}
			printf("%c\t\t\t\t\t\t%c\n",186, 186);	
				printf("%c\t\t\t\t\t\t%c\n",186, 186);	
		printf("Lucro: R$%6.2f \t- \tPreco: R$%6.2f\n", lucro, preco);
		qtdeIngressos+=26;
	}
	printf("\n\n\nO lucro maximo esperado e de R$%.2f - preco do ingresso R$%.2f e a quantidade de ingressos vendidos %i\n\n\n\n\n\n\n\n\n\n\n", lucroMaximo, precoIng, ingressos);
}
