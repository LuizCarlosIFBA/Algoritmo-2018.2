#include <stdio.h>
#include <math.h>

void main(){
	int vertices = 0;
	int xa = 0;
	int xb = 0;
	int ya = 0;
	int yb = 0;	
	printf("Escreva o  número de vertices\n");
	scanf("%i",&vertices);

	printf("Escreva consecutivamente Xa,Xb Ya,Yb\n");
	scanf("%i %i %i %i",&xa,&xb,&ya,&yb);
	fflush(stdin);		
    double long p =0;
	float area = 0;
	float centroideX = 0;
	float centroideY = 0;	

	int x1,x2;
	for(int i = 0;i<vertices;i++){
			area += (xa*yb)+(xb*ya);
			x1 = xb-xa;
			x2 = yb-ya;
			p = p+sqrt(pow(x1,2)+pow(x2,2)); 
			centroideX += (xa+xb)*((xa*yb)-(xb*ya));
			centroideY += (ya+yb)*((xa*yb)-(xb*ya));
	}

    
    printf("Área = %.2f\n",area/2);
    float denominador = 1.0/(area*6);
    printf("perimetro = %.2Lf \n",p);
    printf("centroide de y = %.5f \n",centroideX*denominador);
    printf("centroide de x =  %.5f \n",centroideY*denominador);		
}