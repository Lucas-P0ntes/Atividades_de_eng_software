#include<stdio.h>
int main(){
	int ano_atual, nacimento, dias;
  printf("Qual e o ano do seu nacimento ? ");
  scanf("%i",&nacimento);
  printf("Que anos nos estamos ?");
  scanf("%i",&ano_atual);
  dias = (ano_atual - nacimento) * 365;
   printf("%i", dias);
	
	
	
	
	
	
return 0;	
}
