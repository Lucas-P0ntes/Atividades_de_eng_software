#include <stdio.h>
#include <stdlib.h>
	
int main(){
	int produto =10;
	int reajuste=0;
	int *p_novopreco=&produto;
	printf("-------------------------------------\n");
	printf("-------      PRODUTOS    ------------\n");
	printf("-------                  ------------\n");
	printf("-------    BANANA:$%i    ------------\n",produto);
	printf("-------------------------------------\n");
	printf("     Qual o valor do reajuste ?      \n");
	scanf("%i",&reajuste);
	*p_novopreco=produto+reajuste;
	
	printf("-------------------------------------\n");
	printf("-------      PRODUTOS    ------------\n");
	printf("-------                  ------------\n");
	printf("-------    BANANA:$%i    ------------\n",produto);
	printf("-------------------------------------\n");

	return 0;	
}