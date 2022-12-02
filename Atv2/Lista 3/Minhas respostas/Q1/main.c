#include <stdio.h>

void main(){
	int a,b,soma,i;
	do{ printf("Não é permitido que o A seja menor ou igual a B\n");
	    printf("Escreva o valor de A\n");
	    scanf("%i",&a);
	    printf("Escreva o valor de b\n");
	    scanf("%i",&b);	
	}while(a>=b);

	soma = 0;
        a%2==0?a++:a+0;
	for(i=a;i<=b;i+=2)soma+=i;
	printf("Soma dos impares = %i \n",soma);
}
