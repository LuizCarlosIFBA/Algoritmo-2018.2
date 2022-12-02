#include <stdio.h>

main(void){
	int a,b,c,d,e,f,g,h,i,k,l,m,mes,dia, ano;

	//inicialização de variáveis
	a = 0; b = 0; c = 0; d = 0; e = 0; f = 0; 
        g = 0; h = 0; i = 0; k = 0; l = 0; m = 0;
	
        mes = 0;
	dia = 0;
	
	printf("Escreva o ano \n");
	//entrada
	scanf("%i",&ano);
	
	//Processamento... cálculo
	a = ano%19; 
        b = ano/100;
	c = ano%100;
	d = b/4;
	e = b%4;
	f = (b+8)/25;
	g = (b-f+1)/3;
	h = (19*a+b-d-g+15)%30;
	i = c/4;
	k = c%4;
	l = (32+2*e+2*i-h-k)%7;
	m = (a+11*h+22*l)/451;
	mes = (h+l-7*m+114)/31;
	dia = ((h+l-7*m+114)%31)+1;
	printf("%d/%d/%d",dia,mes,ano);
	printf("\n");
	
	//system("pause"); 	
}

