#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	int x,y;
	float altura,largura,raio,cx,cy;
	printf("Escreva as coordenadas X e Y do ponto(respectivamente)\n");
	scanf("%i %i",&x,&y);
	printf("Escreva altura e largura do retangulo(respectivamente)\n");
	scanf("%f %f",&altura,&largura);
	printf("Escreva o raio do circulo\n");
	scanf("%f",&raio);
	printf("Escreva o centro de x\n");
	scanf("%f",&cx);
	printf("Escreva o centro de y\n");	
	scanf("%f",&cy);
	float d=sqrt(pow(x-cx,2)+pow(y-cy,2));  
	printf((x>0 && x<=largura)&&(y>0 && y<=altura)?"Esta dentro do quadrado\n":"Esta fora do quadrado\n");
	printf(d<raio?"Esta dentro do circulo\n":"Esta fora do circulo\n");
        //o programa não pede para verificar se está sobre o eixo, então ele é considerado como se estivesse fora;
	printf("Perimetro do quadrado %.2f \n",(2*largura)+(2*altura));
	printf("Perimetro do circulo %.2f \n",raio*2*3.14);
	printf("Area do quadrado %.2f \n",largura*altura);
	printf("Area do circulo %.2f \n",pow(raio,2)*3.14);
	system("pause");
}

//gcc main.c -o main -lm
