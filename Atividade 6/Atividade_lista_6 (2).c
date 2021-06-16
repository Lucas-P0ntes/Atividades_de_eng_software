main(){
	int numero,fatorial,i;
	fatorial=1;
	numero=5;
	while(i<=numero){
		fatorial=fatorial*i;
		i++;
	}
	printf("%i! = %i\n", numero, fatorial);
}
