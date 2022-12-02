#include <stdio.h>
#include <math.h>

void main(){
	int qtdAlunos;
	float menor = 0; 
	float maior = 0;
	float smaior = 0;

	do{
		printf("Escreva o número de alunos\n");
		scanf("%i",&qtdAlunos);
		printf(qtdAlunos<=0?"Escreva apenas números positivos... Digite novamente.. \n":" \n");
	  }while(qtdAlunos<=0);


	  float nota[qtdAlunos];
	  float  soma = 0;
	  for(int i=0;i<qtdAlunos;i++){
	  		do{
	  			printf("Digite a nota do %i º aluno  \n",i+1);
	  			scanf("%f",&nota[i]);
	  		    printf(nota[i]<0 || nota[i]>10?"Escreva apneas números de 0 até 10... Digite novamente.. \n":" \n");
	  		  }while(nota[i]<0 || nota[i]>10);
	  		  soma += nota[i];
	  }

	  float aux;
	  for(int i = 0;i<qtdAlunos;i++){
	  		for(int j = 0;j<qtdAlunos;j++){
	  			if(nota[i]<nota[j]){
	  				aux = nota[i];
	  				nota[i] = nota[j];
	  				nota[j] = aux;

	  			}
	  		}
	  }

	  printf("Maior %.1f\n",nota[qtdAlunos-1]);
	  printf("Segundo maior %.1f\n",nota[qtdAlunos-2]);
	  printf("Menor %.1f\n",nota[0]);
	  float media = soma/qtdAlunos; 
	  printf("Média %.1f\n",media);
	  int artificio = qtdAlunos/2;
	  if(qtdAlunos% 2 == 0){
	  	printf("Mediana %.1f\n",nota[artificio]+nota[artificio+1]);
	  }else printf("Mediana %.1f\n",nota[artificio+1]); 		  		  
	  
	  double long variancia = 0;
	  for(int i=0;i<qtdAlunos;i++){
	  		variancia += pow(nota[i]-media,2);
	  }
	  printf("Desvio padrão %.1f\n",sqrt(variancia/(qtdAlunos-1))); 		  		  		  
}