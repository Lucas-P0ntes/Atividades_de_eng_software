#include<stdio.h>
void leValidaChar(char *caracter);
void alteraOrdem(char *caracter,int indice);
void PesquisaCaracter(char*caracter,int indice);
main(){
	char caracter[30],continuar;	
	int indice;
	indice=1;
		do{
printf("Digite o %i%c caracter:\t",indice,248);
caracter[indice]=getche();
leValidaChar(caracter);
printf("\nDeseja continuar?\t");
continuar=getche();
printf("\n");
continuar=toupper(continuar);
indice++;
}while(continuar=='S' || indice==30 );
PesquisaCaracter(caracter,indice);
alteraOrdem(caracter,indice);
}
void leValidaChar(char *caracter){
	int indice;
		if((caracter>='A' && caracter<='Z' && caracter>='a' && caracter<='z')){
			printf("caracter valido");
		}
	}
void alteraOrdem(char *caracter,int indice){
int controle,controle2;
char aux;
for (controle=1;controle<=indice;controle++){
	for(controle2=2;controle2<=indice;controle2++){
		if(caracter[controle2]<caracter[controle]){
			aux=caracter[controle];
			caracter[controle]=caracter[controle2];
			caracter[controle2]=aux;
		}
		
	}
}
	do{
		printf("As letras em ordem descrescente e de:");
	for(controle=1;controle<=indice;controle++){
		printf("%c\n",caracter[controle]);
	}
	}while(controle==indice);
}
void PesquisaCaracter(char*caracter,int indice){
	char carac;
	int controle3;
printf("Digite o caracter que deseja achar:\t");
carac=getche();
for (controle3=1;controle3<=indice;controle3++){
	if(carac==caracter[controle3]){
		printf("\nO caracter %c esta localizado na posicao: %i%c\n",carac,controle3,248);
	}
	}
}


