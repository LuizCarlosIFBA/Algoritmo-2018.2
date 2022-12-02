#include <stdio.h>

void main(){
	int num1,num2,num3;
	scanf("%i %i %i",&num1,&num2,&num3);
	if(num1>num2 && num1>num3)
		printf("%i é o maior \n",num1);
	else if(num2>num1 && num2>num3)
		printf("%i é o maior \n",num2);
	      else printf("%i é o maior \n",num3);
}	

