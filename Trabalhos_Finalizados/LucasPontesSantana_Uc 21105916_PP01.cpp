//Nome:Lucas Pontes Santana //Matricula:Uc 21105916  //Curso: Eng.Software //lucas.pontes@a.ucb.br
#include<stdio.h>//biblioteca para printf e scanf
#include<string.h>//biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<stdlib.h>//biblioteca para a utiliza��o do system
#include<conio.h>//biblioteca para utilzar getch,getchar,getch
#include<ctype.h>//biblioteca para trasnformar caracters em maiusculos
int main(void) {
    int sessoes, pessoas,indice,idade,masculino,feminino,crianca, adolecentes,adultos, idosos,i,idade_masculino,idade_feminino,mulher,homem;
    char filmes[150],sexo;
   	 adolecentes=0;
    adultos=0;
    idosos=0;
    crianca=0;
    masculino=0;
    feminino=0;
    mulher=0;
    homem=0;
    system("color 06");
   
printf("|-------------------------|\n");  
printf("|      BEM VINDO          |\n|         AO              |\n| ");
printf("CiNEMA DE BRASILIA      |\n|-------------------------|\n");
//Codigo para perquntar e validar a sess�es.
//Uso do "if" e "else" para criar a condi��o a ser validada.
//Utiliza��o do "do" e "while" caso a valida��o  n�o seja atingido.
do{    //comando que retorna o while                                                                      
	printf("Qual a quantidade de sessoes ?\n");//mostra na tela do usuario
	scanf("%i",&sessoes);//receber entrada do usuario
	fflush(stdin);//limpa memoria
	if(sessoes == 2){//codi��o if
		printf("Sucesso\n");//mostra na tela do usuario
	}
	else{//codi��o else
		printf("O numero de sessoes nao confere com nosso banco de dados tente novamente\n \n");//mostra na tela do usuario
	}
}while(sessoes != 2);//condi��o while
// Codigo para perquntar e validar o filme.
//Uso do "if" e "else" para criar a condi��o a ser validada.
//Utiliza��o do "do" e "while" caso a valida��o  n�o seja atingido .
do{//comando que retorna o while
        printf("Qual o nome do filme ?\n");//mostra na tela do usuario
        gets(filmes);//receber entrada do usuario
        fflush(stdin);//limpa memoria
        if(strcmp(("%s",filmes),"")==0 ||strcmp(("%s",filmes),"vazio")==0  ){//codi��o if // compara string
            printf("ERRO !!! Coloque um nome valido\n \n");//mostra na tela do usuario
		}
       else{//codi��o else caso a condi��o if n�o seja atingida
           printf("Sucesso\n");//mostra na tela do usuario
        }
}while(strcmp(("%s",filmes),"")==0 ||strcmp(("%s",filmes),"vazio")==0);//condi��o do while
// Codigo para perquntar e validar o numero de pessoas ha assitir o filme.
//Uso do "if" e "else" para criar a condi��o a ser validada.
//Utiliza��o do "do" e "while" caso a valida��o  n�o seja atingido .
    do{                  //comando que retorna o while                            
        printf("Quantas pesssoas irao assitir o filme ?\n");//mostra na tela do usuario
        scanf("%i",&pessoas);//receber entrada do usuario
        fflush(stdin);//limpa memoria
        if(pessoas <10){//codi��o if
            printf("Essa quantidade de pessoas e muito pouca para realizar uma sessao\n");//mostra na tela do usuario
        }
        else{//codi��o else caso a condi��o if n�o seja atingida
            printf("sucesso\n \n");//mostra na tela do usuario
        }
    }while(pessoas <10);//condi��o do while
// Codigo para perquntar e validar os sexos das pessoas
  printf("Qual e o sexo e a idade dessas pessoas ?(M para masculiuno e F para feminino)\n");//mostra na tela do usuario
for(i=1;i<=pessoas;i++){
        //Utiliza��o do "do" e "while" caso a valida��o  n�o seja atingido
	 do{                                  
			printf("Qual o sexo da  %i pessoa ?\n",i);//mostra na tela do usuario
			printf("M- Masculino\n");//mostra na tela do usuario
			printf("F- Feminino \n");//mostra na tela do usuario
			sexo=getche();//Ele l� um �nico caractere do teclado sem o enter
			sexo=toupper(sexo);//trasnforma em maiusculo			
		switch(sexo){//Fun��o para colocar opi��os
			case 'M'://opi��o para o usuario escolher
				fflush(stdin);//limpa memoria
				do{//comando que retorna o while
                	 printf("\nQual o idade da pessoa ?\n ");//mostra na tela do usuario
                 	scanf("%i",&idade_masculino);//receber entrada do usuario
                 	fflush(stdin);//limpa memoria
                 if(idade_masculino >=3 && idade_masculino<= 13){//codi��o else caso a condi��o if n�o seja atingida
                   crianca++;//adiciona mais 1 no contador
                 }
                 else if(idade_masculino >=14 && idade_masculino <= 17){//codi��o else caso a condi��o if n�o seja atingida
                 	adolecentes++;  //adiciona mais 1 no contador
                 }
				else if(idade_masculino >=18 && idade_masculino<= 63){//codi��o else caso a condi��o if n�o seja atingida
                 	adultos++;homem++;//adiciona mais 1 no contador
                 }
                 else if(idade_masculino >=65 && idade_masculino<= 100){//codi��o else caso a condi��o if n�o seja atingida
                 	 idosos++;homem++;//adiciona mais 1 no contador
                 }
                else{//codi��o else caso a condi��o if n�o seja atingida
                  printf("\nidade invalida\n");//mostra na tela do usuario
            	  }
        		}while(!(idade_masculino >=3 && idade_masculino<= 100));//condi��o do while
					masculino++;//adiciona mais 1 no contador
				break;//For�ar a sa�da de um switch
			case 'F'://opi��o para o usuario escolher
					fflush(stdin);//limpa memoria
				do{//comando que retorna o while
                	 printf("\nQual o idade da pessoa ?\n");//mostra na tela do usuario
                	 scanf("%i",&idade_feminino);//receber entrada do usuario
                 	fflush(stdin);//limpa memoria
                 if(idade_feminino >=3 && idade_feminino<= 13){//codi��o if
                 	 crianca++;//adiciona mais 1 no contador
                 }
                 else if(idade_feminino >=14 && idade_feminino<= 17){///codi��o else caso a condi��o if n�o seja atingida
                    adolecentes++;  //adiciona mais 1 no contador
                 }
				else if(idade_feminino >=18 && idade_feminino<= 63){//codi��o else caso a condi��o if n�o seja atingida
                	 adultos++;mulher++;//adiciona mais 1 no contador
                 }
                 else if(idade_feminino >=65 && idade_feminino<= 100){//codi��o else caso a condi��o if n�o seja atingida
                   idosos++;mulher++; //adiciona mais 1 no contador
                  }
                else{//codi��o else caso a condi��o if n�o seja atingida
                   printf("\nidade invalida\n");//mostra na tela do usuario
                 }
          		}while(!(idade_feminino >=3 && idade_feminino<= 100));//condi��o do while
					feminino++;//adiciona mais 1 no contador
				break;//For�ar a sa�da de um switch
				default://saco nao seja marcado as opi��es asssima
					printf("Sexo invalido\n");//mostra na tela do usuario
				break;//For�ar a sa�da de um switch
			}
		}while (sexo!='F' && sexo!='M');//condi��o do while
	}//chave do for
system("cls");//commando para limpar a tela
printf("\no nome do filme e : %s",filmes);//mostra na tela do usuario
printf("\nO numero de mulheres : %i",feminino);//mostra na tela do usuario
printf("\nO numero de homens e : %i",masculino);//mostra na tela do usuario
printf("\ncriancas : %i",crianca);//mostra na tela do usuario
printf("\nadolcentes e : %i",adolecentes);//mostra na tela do usuario
printf("\nadultos e : %i",adultos);//mostra na tela do usuario
printf("\nidosose : %i\n ",idosos);//mostra na tela do usuario
system("pause");
system("cls");//comando para limpar a tela
printf("\nOs maiores de 18 mulheres  sao: %i ",mulher);//mostra na tela do usuario
printf("\nOs maiores de 18 homens sao: %i",homem);//mostra na tela do usuario
return 0;//para retornar 0
}

