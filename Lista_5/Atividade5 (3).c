main(){
	int movel;
	printf("Qual movel deseja escolher? \n");
	printf("1-Cadeira. \n");
	printf("2-Mesa de computador. \n");
	printf("3-Estante de livros.\n");
	printf("4-Mesa de impressora .\n");
	printf("5-Estante de CD.\n");
	scanf("%i",&movel);
	system("cls");
	if(movel>=1 && movel<=5){
		switch(movel){
			case(1):
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVoce escolheu a Cadeira!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
			case(2):
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tVoce escolheu a Mesa de computador!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
			case(3):
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVoce escolheu a Estante de livros!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
			case(4):
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVoce escolheu a Mesa de impressora!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
			case(5):
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tVoce escolheu a Estante de CD!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			break;
		}
	}
	else{
		printf("Movel inexistente");
	}
}

