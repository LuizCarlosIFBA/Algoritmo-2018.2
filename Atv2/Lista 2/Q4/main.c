#include <stdio.h>

void main(){
	float peso,altura;
	scanf("%f %f",&peso,&altura);
	float IMC = peso/(altura*altura);
	
	if(IMC<18.5)printf("Uma pessoa com o IMC=%.2f é considerado abaixo do peso\n",IMC);
	    else if(IMC>=18.6 && IMC<=24.9)printf("Uma pessoa com o IMC=%.2f é considerado dentro do peso ideal(parabéns)\n",IMC);
	             else if(IMC>25 && IMC<29.9)printf("Uma pessoa com o IMC=%.2f é considerado abaixo do peso\n",IMC);
	      	  	      else if(IMC>30 && IMC<34.9)printf("Uma pessoa com o IMC=%.2f é considerado obesidade grau I\n",IMC);
	      			else if(IMC>35 && IMC<39.9)printf("Uma pessoa com o IMC=%.2f é considerado obesidade grau II(severa)\n",IMC);
				         else printf("Uma pessoa com o IMC=%.2f é considerado obesidade grau III(mórbida)\n",IMC);
}
