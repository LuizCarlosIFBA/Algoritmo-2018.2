#include <stdio.h>
#include <string.h>

main(void){
	int num = 0;
    int numero1,numero2,numero3,numero4 = 0; 

	printf("Escreva um número \n");
	scanf("%i",&num);
	
	numero4 = num/1000;
	numero3 = (num%1000)/100;
	numero2 = ((num%1000)%100)/10;
	numero1 = ((num%1000)%100)%10;
    	
	printf("Invertendo-se os algarismos do numero %d obtêm-se o número %d%d%d%d",num,numero1,numero2,numero3,numero4);
	//system("pause");
}

