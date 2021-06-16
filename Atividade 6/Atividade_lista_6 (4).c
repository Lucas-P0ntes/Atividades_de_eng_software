main(){
	int qtdeNascidas, qtdeMeses, masculino=0, contMeses=0, cont=0;
	char sexo,continuar;
	float porcMortas=0, porcMeninosMortos=0, porcMeses=0;
	
	printf("Digite o n%cmero de crian%cas que nasceram no determinado per%codo: \t",163,135,161);
	scanf("%i", &qtdeNascidas);	
	if(qtdeNascidas>0){
		do{
			printf("Digite o sexo:\n");
			printf("(M) para masculino.\n");
    		printf("(F) para feminino.\n");
			sexo = getche();
			sexo=toupper(sexo);
			
			if(sexo!='\r'){
				cont++;
					printf("\n Digite a quantidade de meses da crian%ca que morreu: \t",135);
    				scanf("%i",&qtdeMeses);
				if(sexo=='M'){
					masculino++;
				}
				
				if(qtdeMeses<=24){
					contMeses++;
				}
				
			}
		}while(sexo!='\r' || cont<=qtdeNascidas);
		system("cls");
		porcMortas=(cont*100.0)/qtdeNascidas;
		porcMeninosMortos=(masculino*100.0)/cont;
		porcMeses=(contMeses*100.0)/cont;
		printf("\nPorcentagem de crian%cas mortas no periodo %.2f%%.\n",135, porcMortas);
		printf("Porcentagem de crian%cas masculinas mortas no periodo %.2f%%.\n",135, porcMeninosMortos);
		printf("Porcentagem de crian%cas que viveram 24 meses ou menos no periodo %.2f%%.\n\n",135, porcMeses);
	}else{
		printf("Nao houve registros de nascimento no periodo\n");
}
}
