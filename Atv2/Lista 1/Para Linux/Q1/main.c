#include <stdio.h>

void main(){
	float f;
	printf("Escreva a temperatura em Fahreneit \n");
	scanf("%f",&f);
	printf("%.2f º graus Farenheit equivalem a %.2ff graus Celsius\n",f,(f-32)*(5.0/9));
}

