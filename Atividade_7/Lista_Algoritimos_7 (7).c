void maiorS(float *salarios,int indice);
void menorS(float *salarios,int indice);
void calculaMedia(float*salarios, int indice);
main(){
	float salarios[100];
	int indice;
	char continuar;
	indice=0;
	do{
	indice++;
	printf("Digite o %i%c salarios:\t",indice,248);
	scanf("%f",&salarios[indice]);
	printf("Deseja continuar?\n");
	printf("Digite (S) para sim.\n");
	continuar=getche();
	continuar=toupper(continuar);
}while(continuar=='S');
system("cls"),
maiorS(salarios,indice);
menorS(salarios,indice);
calculaMedia(salarios,indice);
}
void maiorS(float *salarios,int indice){
int controle;
float maior;
maior=0;
for(controle=1;controle<=indice;controle++){
if(salarios[controle]>maior){
	maior=salarios[controle];
}
}
printf("\nO maior salario e de %.3f reais\n",maior);
}
void menorS(float *salarios,int indice){
int controle;
float menor;
menor=1000000000000000000000000000;
for(controle=1;controle<=indice;controle++){
if(salarios[controle]<menor){
	menor=salarios[controle];
}
}
printf("O menor salario e de %.3f reais",menor);
}
void calculaMedia(float*salarios, int indice){
	float media,salarioT;
	int controle;
	salarioT=0;
	for (controle=1;controle<=indice;controle++){
		salarioT+=salarios[controle];
	}
	media=salarioT/indice;
	printf("\nA media salarial de todos os empregados e de: %.3f reais.",media);
}
