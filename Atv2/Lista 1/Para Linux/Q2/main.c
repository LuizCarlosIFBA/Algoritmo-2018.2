#include <stdio.h>

void main(){
	float peso,altura;
	printf("Escreva o peso \n");
	scanf("%f",&peso);
	printf("Escreva a altura \n");
	scanf("%f",&altura);
	printf("Uma pessoa com altura de %.2f metros e pesando %.2f quilos tem um IMC = %.2f \n",altura,peso,peso/(altura*altura));
}

