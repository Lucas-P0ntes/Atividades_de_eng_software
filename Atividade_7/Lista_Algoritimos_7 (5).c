void leValidadeIdade(int *idade,int indice);
void idadeMaisVelha(int *idade,int indice);
void calculaMedia(int *idade, int indice);
main(){
	int idade[100],indice,contagemT,contagemD,controle;
	float media;
	char continuar;	
	 	contagemT=0;
 	contagemD=1;
	indice=0;
	controle=1;
		do{
		indice++;
	printf("Digite a %i%c idade que deseja adicionar:\n",indice,248);
	scanf("%i",&idade[indice]);
leValidadeIdade(&idade,indice);
printf("Deseja continuar?\t\n");
continuar=getche();
continuar=toupper(continuar);
printf("\n");
}while(continuar=='S');
idadeMaisVelha(idade,indice);
calculaMedia(idade,indice);
}
void leValidadeIdade(int *idade,int indice){
do{
	if (idade[indice]<=0 && idade>110){
		system("cls");
		printf("Idade invalida.\n");
		printf("Digite a %i%c idade que deseja adicionar:\n",indice,248);
		scanf("%i",&idade[indice]);
		break;
	}
}while(idade[indice]<=0 && idade>110);
}
void idadeMaisVelha(int *idade,int indice){
int controle,maior;
maior=0;
for (controle=1;controle<=indice;controle++){
 if (idade[controle]>maior){
 	maior=idade[controle];	
	}
}
 	printf("A idade mais velha e de %i.\n",maior);
 }	
void calculaMedia(int *idade, int indice){
	int contagemT,controle;
	float media;
	 	for (controle=1;controle<=indice;controle++){
 	contagemT+=idade[controle];
	 }
 media=contagemT/indice;
 printf("A media e de %.2f.",media);
}



