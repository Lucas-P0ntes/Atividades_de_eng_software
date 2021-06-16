char leValidaLetra(int indice);
main(){
	char letras[31];
	int indice;
	for(indice=1;indice<31;indice++){
		letras[indice] = leValidaLetra(indice);
	}
	printf("\nLetras em ordem decrescente:\n");
	for(indice=29;indice>=0;indice--){
		printf("%c ", letras[indice]);
	}
}
char leValidaLetra(int indice){
	char letra;
		printf("\nDigite a %i letra:\n",indice);
		letra = getche();
		letra=tolower(letra);
		if(letra<'a'||letra>'z'){
			printf("\nCaracter invalido.\n");
		}
		indice++;
	return letra;
}


