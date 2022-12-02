#include <stdio.h>

main(void){
	float f;
	printf("Escreva a temperatura em Fahreneit \n");
	scanf("%f",&f);
	printf("%.2f graus Farenheit equivalem a %.2f graus Celsius\n",f,(f-32)*(5.0/9));
	//system("Pause");	
}

