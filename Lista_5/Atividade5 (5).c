main(){
	char sexo;
	printf("Digite o sexo:\t");
	scanf("%c", &sexo);
	sexo = toupper(sexo);
	sexo=='M'? printf("Voce escolheu o sexo masculino.\n"):sexo=='F'?printf("Voce escolheu o sexo feminino.\n"):printf("Sexo invalido.\n");
}
