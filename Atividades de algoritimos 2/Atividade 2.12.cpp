#include<stdio.h>//Biblioteca
int main(){// fun�ao para inicior o codigo
	int ddd;// aloca�ao  de memoria 
	printf("##### Bem vindo #####\n\n");// fun�ao para escrever na tela do usuario
	printf("Qual o ddd voce quer saber ?");// fun�ao para escrever na tela do usuario
	scanf("%i",&ddd);//receber a variavel
	if(ddd == 61){//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
		printf("brasilia");// fun�ao para escrever na tela do usuario
	}
	else if(ddd == 71){//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
		printf("salvador");// fun�ao para escrever na tela do usuario
	}
	else if (ddd ==11 ){//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
		printf("sao paulo");// fun�ao para escrever na tela do usuario
	}
	else if (ddd ==21){//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
		printf("Rio de janeiro");// fun�ao para escrever na tela do usuario
	}
	else if (ddd ==32){//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
		printf("juiz de fora");// fun�ao para escrever na tela do usuario
	}
	else if (ddd ==19){//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
		printf("campinas");// fun�ao para escrever na tela do usuario
	}
	else if (ddd ==27){//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
		printf("vitoria");// fun�ao para escrever na tela do usuario
	}
	else if (ddd ==31){//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
		printf("belo horizonte");// fun�ao para escrever na tela do usuario
	}
	else {//condi�ao para execu�ao caso nao nao atenda a condi�ao anterior
		printf("uma cidade sem indentificacao");// fun�ao para escrever na tela do usuario
	}

	return 0;// encerrada imediatamente
}
