#include <stdio.h>
#include <stdlib.h>

void main(){
	int cargaHoraria,faltas,av1,av2,av3;
	float media;

	scanf("%i %i",&cargaHoraria,&faltas);
	if(faltas>(cargaHoraria*0.25)){
		printf("Reprovador por Falta\n");
		exit(0);
	}else{
		scanf("%i %i",&av1,&av2);
		media = ((av1*3)+(av2*4))/7;
		if(media<4){
			printf("Reprovado\n");
			exit(0);
		}else if(media>=7){
			printf("Aprovado\n");
			exit(0);
		      }else{scanf("%i",&av3);//pede a nota da terceira avaliação
			    media = ((av1*3)+(av2*4)+(av2*3))/10;
  			   }
	     }
	
	     //O programa causou ambiguidade se era nota ou média 
	     printf(media>=5?"Aprovado\n":"Reprovado\n");
}

//gcc main.c -o main -lm
