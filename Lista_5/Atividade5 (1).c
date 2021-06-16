main(){
	int valor[4],indice;
	indice=1;
	for(indice=1;indice<=3;indice++){
	printf("Digite o %i%c valor:\t ",indice,248);
	scanf("%i",&valor[indice]);
}
if(valor[1]>valor[2] && valor[1]>valor[3]){ 	
printf("O valor %i e o maior de todos.",valor[1]);
}else{
if(valor[2]>valor[3] && valor[2]>valor[1]){ 	
printf("O valor %i e o maior de todos.",valor[2]);
}
else{
	printf("O valor %i e o maior de todos.",valor[3]);
}
}
}


