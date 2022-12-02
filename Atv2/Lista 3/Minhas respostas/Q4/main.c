#include<stdio.h>

void main(){
	int i,num1,num2;
	
	do{
		printf("Escreva números diferentes\n");	
		//Primeiro número
		do{printf("Digite apenas números positivos\n");
	   	   printf("Escreva o primeiro número\n");
	  	   scanf("%d",&num1);
	 	  }while(num1<1);
	
		//Segundo número	   
		do{printf("Digite apenas números positivos\n");
	   	   printf("Escreva o segundo número\n");
	  	   scanf("%d",&num2);
		  }while(num2<1);
	}while(num1 == num2);   
	
	int fim = 0;
	if(num1 == num2)fim=num1;else num1>num2?(fim=num1):(fim=num2);
	for(i = 2;i<=fim;i++){
		if(num1%i==0 && num2%i==0){
		        printf("São amigos\n");
			break;		
		}
        }
	printf(" \n");	
}
