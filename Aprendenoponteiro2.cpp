#include <stdio.h>
#include <stdlib.h>


int calcular(int produto, int reajuste, int *p_novopreco){
	*p_novopreco=produto+reajuste;
	return *p_novopreco=produto+reajuste;
		printf("%i",*p_novopreco);
}


int mostra (int produto, int reajuste, int *p_novopreco){

	calcular( produto,reajuste, p_novopreco);
	printf("_____________________________________\n");
	printf("|------      PRODUTOS    -----------|\n");
	printf("|                                   |\n");
	printf("|      BANANA valor antigo:$%i      |\n\n",produto);
	printf("|------    Reajuste:$%i        -----|\n",reajuste);
	printf("|       BANANA valor novo:$%i       |\n",*p_novopreco);		
	printf("|___________________________________|\n");
	return printf("")  ;
	
}
	
int main(){
	int produto=0;
	int reajuste=0;
	int *p_novopreco=&produto;
	printf("     Qual o valor do produto ?      \n");
	scanf("%i",&produto);
	printf("____________________________________\n");
	printf("|------      PRODUTOS    -----------|\n");
	printf("|------                  -----------|\n");
	printf("|------    BANANA:$%i    ------------|\n",produto);
	printf("|___________________________________|\n\n");
	printf("     Qual o valor do reajuste ?      \n");
	scanf("%i",&reajuste);
	 mostra(produto,  reajuste,p_novopreco);
	
		

	return 0;	
}