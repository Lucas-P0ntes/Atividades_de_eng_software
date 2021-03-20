#include<stdio.h>
int main(){


	int a, b ,resto , quociente;
    printf("Informe o valor de A :");
    scanf("%d", &a);
    printf("Informe o valor de B :");
    scanf("%d", &b);
    resto = a % b;
    quociente = a / b;
    printf("Resto:%d ", resto);

    printf("Quociente:%d ", quociente);
    
    return 0;
}

