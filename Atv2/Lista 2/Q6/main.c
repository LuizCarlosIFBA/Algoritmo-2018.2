#include <stdio.h>
#include <math.h>

void main(){
	float a,b,c,p,q;
	scanf("%f %f %f",&a,&b,&c);
	double delta = (b*b)-1*(4*a*c);

	if(delta>=0){
		printf("Possui duas raízes reais X1=%.2f ",(-1*b+sqrt(delta)/(2*a)));
		printf(" e X2=%.2f \n",(-1*b-sqrt(delta)/(2*a)));
	}else{	
		p = ((-1*b)/2*a);
 		q = sqrt(delta*-1)/(2*a);
		printf("Possui duas raízes imaginárias X1=%.2f + %.2fi ",p,q);
	        printf(" e X2=%.2f - %.2fi\n",p,q);
	     }		
	     	
}

//gcc main.c -o main -lm
