main(){
	float dados[101],resultado=0;
int indice=0;
char continuar;
do{
indice++;
	printf("\nDigite o %i valor que deseja somar:\t",indice);
	scanf("%f", &dados[indice]);
	resultado+=dados[indice];
	printf("Deseja continuar?\n");
	continuar=getche();
	continuar=toupper(continuar);
}while(continuar=='S'|| continuar==100);
printf("\n\n O resultado das somas de %i numeros e de: %.2f",indice,resultado);
}
