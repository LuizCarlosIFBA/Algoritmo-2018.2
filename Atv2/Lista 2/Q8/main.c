#include <stdio.h>
#include <stdlib.h>

void main(){
	int ano;
	printf("Informe o ano\n");
	scanf("%i",&ano);
	if(ano%4!=0){
		printf("Ano não é bissexto\n");
	}else{
		if(ano%100!=0){
			printf("Ano é bissexto\n");
		}else if(ano%400!=0){
			printf("Ano é bissexto\n");
		      }else printf("Ano é bissexto\n");
  			   
	     }
}

//gcc main.c -o main -lm
