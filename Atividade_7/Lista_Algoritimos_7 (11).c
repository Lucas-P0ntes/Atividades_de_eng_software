float levalidaNota(float *notas,int ind);
main(){
	int indice,alunos;
	float notas[30];
	printf("Digite quantos alunos ha na turma: \t");
	scanf("%i",&alunos);
	for (indice=1;indice<=alunos; indice++){
	leValidaNota(&notas[indice],indice);
}
}
void leValidaNota(float *nota, int ind){
	do{
		printf("Digite a %i nota:\n", ind);
		scanf("%f", nota);
		if(*nota<0 || *nota>10){
			printf("Nota invalida.\n");
		}
	}while(*nota<0 || *nota>10);
	
}
