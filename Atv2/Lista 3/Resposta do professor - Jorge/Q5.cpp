/*
Escreva um programa que calcule e imprima o valor das séries abaixo utilizando 
pelo menos vinte termos de cada série. Escreva um programa para cada série.
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main() {
	float S1,S2,S3,num,den;
	// calculo de S1
	S1=0;
	for (int i=1;i<=20;i++) {
		num=1;
		den=i;
		S1=S1+num/den;
	}
	printf("S1=%.2f\n",S1);

	// calculo de S2
	S2=0;
	for (int i=1;i<=20;i++) {
		num=pow(2,i);
		den=pow(3,i);
		S2=S2+num/den;
	}
	printf("S2=%.2f\n",S2);
	
	// calculo de S3
	S3=0;
	for (int i=1;i<=20;i++) {
		den=pow(2,i);
		num=den-1;
		S3=S3+num/den;
	}
	printf("S3=%.2f\n",S3);
	system("pause");
}
