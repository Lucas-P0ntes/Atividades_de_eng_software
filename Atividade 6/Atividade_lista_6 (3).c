main(){
char sexo;
int altura, nHomem,controle,nMulher,pessoas;
float mediaA;
nHomem=0;
nMulher=0; 
printf("Digite o numero de pessoas. \n");
scanf("%i",&pessoas);
	if(pessoas<=10){	
		for(controle=1;controle<=pessoas;controle++){
			printf("\n Digite o sexo da pessoa: \t \n");
			sexo=getchar();
			printf("\n Digite a altura da pessoa: \t");
			scanf("%i",&altura);
				switch(sexo){
				case 'm':
				nHomem=nHomem+1;
				mediaA=altura+altura;
				case 'M':
					break;
				nHomem=nHomem+1;	
				mediaA=altura+altura;
					break;
				case 'F':
				nMulher=nMulher+1;
				break;
				case 'f':
			nMulher=nMulher+1;
					break;
			}

		}
	}
	mediaA=mediaA/nHomem;
if(nMulher>nHomem){
printf("Mulher e maior que homem. \n");
}
else{
printf("Homem e maior que mulher. \n");
}
}
