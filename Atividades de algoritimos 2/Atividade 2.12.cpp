#include<stdio.h>//Biblioteca
int main(){// funçao para inicior o codigo
	int ddd;// alocaçao  de memoria 
	printf("##### Bem vindo #####\n\n");// funçao para escrever na tela do usuario
	printf("Qual o ddd voce quer saber ?");// funçao para escrever na tela do usuario
	scanf("%i",&ddd);//receber a variavel
	if(ddd == 61){//condiçao para execuçao caso nao nao atenda a condiçao anterior
		printf("brasilia");// funçao para escrever na tela do usuario
	}
	else if(ddd == 71){//condiçao para execuçao caso nao nao atenda a condiçao anterior
		printf("salvador");// funçao para escrever na tela do usuario
	}
	else if (ddd ==11 ){//condiçao para execuçao caso nao nao atenda a condiçao anterior
		printf("sao paulo");// funçao para escrever na tela do usuario
	}
	else if (ddd ==21){//condiçao para execuçao caso nao nao atenda a condiçao anterior
		printf("Rio de janeiro");// funçao para escrever na tela do usuario
	}
	else if (ddd ==32){//condiçao para execuçao caso nao nao atenda a condiçao anterior
		printf("juiz de fora");// funçao para escrever na tela do usuario
	}
	else if (ddd ==19){//condiçao para execuçao caso nao nao atenda a condiçao anterior
		printf("campinas");// funçao para escrever na tela do usuario
	}
	else if (ddd ==27){//condiçao para execuçao caso nao nao atenda a condiçao anterior
		printf("vitoria");// funçao para escrever na tela do usuario
	}
	else if (ddd ==31){//condiçao para execuçao caso nao nao atenda a condiçao anterior
		printf("belo horizonte");// funçao para escrever na tela do usuario
	}
	else {//condiçao para execuçao caso nao nao atenda a condiçao anterior
		printf("uma cidade sem indentificacao");// funçao para escrever na tela do usuario
	}

	return 0;// encerrada imediatamente
}
