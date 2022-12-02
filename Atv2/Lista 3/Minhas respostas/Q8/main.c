#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926536
	
int main (){	
	double x = 0, termo = 0, seno=0, cos=1;
	int grau, minuto, segundo, k=0;
	printf (" Digite o valor de X em graus,minutos e segundos\n"); 
	scanf("%d %d %d",&grau,&minuto,&segundo);
	x=grau+(minuto/60)+(segundo/3600);//Converter tudo para graus
	x = (PI/180)*x;//transfomação em radianos
	
	//SENO
	int i, fatorial;
	int cont=0;	
	do{   	fatorial=1;//2k+1 é uma propriedade dos pares e impares
		for (i = 2*k+1; i > 1; i--) {fatorial *= i;}			
		termo = pow(x,i)/fatorial;
		seno += pow(-1,k)*termo;//Se K for par o sinal do acumulador
								//terá sinal positivo, caso contrário negativo
		k++;
		cont++;//Conta o número de termos
	}while(termo > 10E-8 || cont==19);

	//COSSENO
	cont=0;
	do{	fatorial=1;
		for (i = 2*k+1; i > 1; i--) {fatorial *= i;}			
		termo = pow(x,i)/fatorial;
		cos += pow(-1,k)*termo;//Se K for par o sinal do acumulador
								//terá sinal positivo, caso contrário negativo
		k++;
		cont++;//Conta o número de termos
	}while(termo > 10E-8 || cont==19);
	printf ("\nValor do seno: %.15lf\nValor do cos: %.15lf\n\n",seno,cos);	
	
	//TANGENTE
	printf ("\n Valor da tangente: %.10lf\n\n",seno/cos);
}


