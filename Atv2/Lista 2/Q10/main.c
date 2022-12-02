#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
	float salarioBruto,INSS,IRRF;
	IRRF = 0;
	printf("Escreva o salário bruto\n");	
	scanf("%f",&salarioBruto);
	
	
	printf("Salario Bruto %.2f \n",salarioBruto);
	
	//Lógica do INSS	
	if(salarioBruto<=1693.72){
		INSS = salarioBruto*0.08;
	}else if(salarioBruto>=1693.73 && salarioBruto<=2822.90){
		INSS = salarioBruto*0.09;
	      }else INSS = salarioBruto*0.11;
	
	//Lógica do IRPF	
	if(salarioBruto>=1903.99 && salarioBruto<=2826.65){
		IRRF = salarioBruto * 0.75;
	      }else if(salarioBruto>=2826.66 && salarioBruto<=3751.05){
		 	IRRF = salarioBruto * 0.15;
		    }else if(salarioBruto>=3751.06 && salarioBruto<=4664.68){
				IRRF = salarioBruto * 2.25;
			  }else IRRF = salarioBruto * 2.75;
	

	printf("Recolhimento INSS %.2f \n",INSS);
	printf(salarioBruto<=1903.98?"ISENTO \n":"%.2f\n",IRRF);
	printf("Salario Líquido %.2f\n",salarioBruto-INSS-IRRF);
}

//gcc main.c -o main -lm
