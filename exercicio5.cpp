#include<stdio.h>
int main(){
	int metros ,rolos, metro;
	printf("Qual o total de metros que vai ser utilizado ?");
	scanf("%d", &metros);
	metro = metros % 50;
	rolos =metros /50;
	printf("A quantidade de rolos que ele vai precizar vai ser de %d e mais %d metros",rolos , metro);
	
	
	
	
	
	
	
	return 0;
}
