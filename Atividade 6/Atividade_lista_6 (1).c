main(){
	int numero,controle;
	printf("Digite um numero que ate 2000: \t");
	scanf("%i",&numero);
			system("cls");		
	while(numero>2000){
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t Limite de calculo foi excedido.\n\n\n\n\n\n\n\n\n\n\n\n");
		break;
	}
		for(controle=numero;controle<=2000;controle++){
			if(controle%2==0){
				printf("Valor: %i\n", controle);	
			} 
		}
}	

