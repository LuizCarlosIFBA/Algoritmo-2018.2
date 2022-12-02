#include<stdio.h>
#include<math.h>
#include<time.h>
void main(){
	
	float tempoSoma, tempoMulti,t_ini,t_fim;

	//Método da Soma/subtração
	t_ini =	clock();
	float PI = 4;
	for(int i=3;i<=1001;(i+=2)){
		PI*=-1;
		PI+=(4.0/i);			
	}
	printf("%.15f \n",PI);
	t_fim =	clock();
	printf("O tempo de execução da soma foi %.3f milissegundos\n",t_fim-t_ini);
	
	t_ini = 0;
	t_fim = 0;

	t_ini =	clock();	
	//Método da multiplicação
	int den = 3;
	int num =2;
	for(int i=2;i<1001;i++){
	    i%2==0?(num+=2):(den+=2);
	    den=den*den;
	    num=num*num;		
	}
	printf("%.15f \n",-(4.0*num/den));
	t_fim =	clock();	
	printf("O tempo de execução multiplicação foi %.3f milissegundos\n",t_fim-t_ini);
}
