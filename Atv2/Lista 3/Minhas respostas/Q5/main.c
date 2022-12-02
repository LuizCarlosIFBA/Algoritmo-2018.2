#include<stdio.h>
#include<math.h>
void main(){
	int den,den1,num,num3,i,x,j;
	float s1=1;
	float s2=2/3;
	float s3=1/2;
	j=3;
	num=1.0;
	den = 2;
	num3 = 1;
	for(int i=2;i<=22;i++){
	    //S1
	    s1+=1.0/i;
	    //S2
	    num*=2;
	    j+=pow(j,3);
	    s2+=num*1.0/j;
            //S3
	    den*=2;
	    num3*2;		
	    s3+=((i+num3)*1.0)/den;	    	
	}
	printf("Valor de S1 = %f \n",s1);
	printf("Valor de S2 = %f \n",s2);	
	printf("Valor de S3 = %f \n",s3);	
}
