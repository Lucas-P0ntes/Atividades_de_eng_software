float levalidaNota(float *notas,int ind);
int leValidaAluno(int alunos);
main(){
	int indice,alunos;
	float notas[30];
	leValidaAluno(alunos);
	for (indice=1;indice<=alunos; indice++){
	leValidaNota(&notas[indice],indice);
}
}
int leValidaAluno(int alunos){
printf("Digite a quantidade de alunos:\t");
scanf("%i",&alunos);
do{
if(alunos<1 || alunos>50){
	printf("Quantidade invalida.\n");
	printf("Digite novamente:\t");
	scanf("%i",&alunos);
}
}while(alunos<1 || alunos>50);
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
