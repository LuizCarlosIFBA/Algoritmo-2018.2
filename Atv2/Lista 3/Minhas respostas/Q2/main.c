#include<stdio.h>

void main(){
	int num,j; 
	do{printf("Digite apenas números positivos\n");
	   scanf("%d",&num);
	   printf(num<1?"INVÁLIDO!!! Digite outro número\n":"O fatorial é:\n");
	}while(num<1);	
	
	for(j = 1; num > 1;j=j*num,num = num - 1);
	printf("%i \n",j);
					
}
