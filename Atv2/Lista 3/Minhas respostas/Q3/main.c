#include<stdio.h>

void main(){
	int i,num;
	do{printf("Digite apenas números positivos\n");
	   scanf("%d",&num);
	   printf(num<1?"INVÁLIDO!!! Digite outro número\n":"Os divisores são:\n");
	
	  }while(num<1);

	  for(i = 1;i<=num;i++)if(num%i==0)printf("%i, ",i);
	  printf(" \n");	
}
