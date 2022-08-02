main(){
	char caracter,continuar;
	do{
	printf("Digite um caracter que deseja saber em Decimal, Octal ou Hexadecimal: \n");
	scanf("%c", &caracter);
	printf("Caracter: %c\n", caracter);
	printf("Caracter em decimal: %d\n", caracter);
	printf("Caracter em octal: %o\n", caracter);
	printf("Caracter em hexadecimal: %x\n", caracter);
	}while (continuar=='S');
	printf("Deseja continuar? Pressione -s para sim.\n");
	scanf("%c",&continuar);
	continuar=toupper(continuar);
	
}
