void leValidaNota(float *nota,int indice);
void apresentaFrequencia(float *nota,int indice);
main(){
	float nota[80];
		int indice;
	char continuar;
	indice=0;
	do{
	indice++;
		do{
	printf("Digite a %i%c nota:\t",indice,248);
	scanf("%f",&nota[indice]);
	leValidaNota(nota,indice);
}while(nota[indice]<0 || nota[indice]>10);
	printf("Deseja continuar?\n");
	printf("Digite (S) para sim.\n");
	continuar=getche();
	continuar=toupper(continuar);
}while(continuar=='S');
apresentaFrequencia(nota,indice);
}
void leValidaNota(float *nota,int indice){
	if(nota[indice]<0 || nota[indice]>10){
		printf("Nota invalida:\n");
	}
}
void apresentaFrequencia(float *nota,int indice){
	int controle,notas[11];
	notas[1]=0;
	for(controle=1;controle<=indice;controle++){
		if (notas>=0 && notas<=1){
			notas[1]=notas[1]+1;
		}
				if (notas[controle]>=0 && notas[controle]<=1){
			notas[1]=notas[1]+1;
	}
			if (notas[controle]>=1 && notas[controle]<=2){
			notas[2]=notas[1]+1;
		}
					if (notas[controle]>=2 && notas[controle]<=3){
			notas[3]=notas[1]+1;
		}
							if (notas[controle]>=3 && notas[controle]<=4){
			notas[4]=notas[1]+1;
		}
							if (notas[controle]>=4 && notas[controle]<=5){
			notas[5]=notas[1]+1;
		}
							if (notas[controle]>=5 && notas[controle]<=6){
			notas[6]=notas[1]+1;
		}
							if (notas[controle]>=6 && notas[controle]<=7){
			notas[7]=notas[1]+1;
		}
							if (notas[controle]>=7 && notas[controle]<=8){
			notas[8]=notas[1]+1;
		}
							if (notas[controle]>=8 && notas[controle]<=9){
			notas[9]=notas[1]+1;
		}
							if (notas[controle]>=9 && notas[controle]<=10){
			notas[10]=notas[1]+1;
		}
}
printf("\nO numero de notas que esta entre 0 e 1 e de \t%.2f\n",notas[1]);

printf("O numero de notas que esta entre 1 e 2 e de \t%.2f\n",notas[2]);

printf("O numero de notas que esta entre 2 e 3 e de \t%.2f\n",notas[3]);

printf("O numero de notas que esta entre 3 e 4 e de \t%.2f\n",notas[4]);

printf("O numero de notas que esta entre 4 e 5 e de \t%.2f\n",notas[5]);

printf("O numero de notas que esta entre 5 e 6 e de \t%.2f\n",notas[6]);

printf("O numero de notas que esta entre 6 e 7 e de \t%.2f\n",notas[7]);

printf("O numero de notas que esta entre 7 e 8 e de \t%.2f\n",notas[8]);

printf("O numero de notas que esta entre 8 e 9 e de \t%.2f\n",notas[9]);

printf("O numero de notas que esta entre 9 e 10 e de \t%.2f\n",notas[10]);
}
