#include <stdio.h>
#include <stdlib.h>

	struct pessoa {
		
		int idade;
		int semestre;
	};
	
int main(){
	
//	Quando usar uma Struct: Para  armazenar os dados de uma mesma entidade	
//	Como usar ?
//	struct "um arry de tipos diferentes"

//	struct identifiador //nome da struct(identificador) //tipo de dado
//	{
//		<listagem dos tipos e membros>;//Os tipos que vão ser amazenados
//	}	;
	struct pessoa pessoa;	
	pessoa.idade= 12;
	printf("A idade da pessoa: %d \n",pessoa.idade);

	return 0;	
}