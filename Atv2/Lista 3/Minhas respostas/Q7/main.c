#include<stdio.h>
#include<math.h>
void main(){
	float x; 
	do{	printf("Escreva apenas valores de 0 até 2\n");
	   	scanf("%f",&x); 
	   	printf(x<=0 || x>2?"Número inválido\n":"O resultado é ln x = :");	
	   }while(x<=0 || x>2);

	float ln =(x-1);
	for(int i=2;i<=100;i++){
		ln+=(pow(x-1,i)/(i-1))*-1;
	}
	printf("%f \n",ln);	
}
