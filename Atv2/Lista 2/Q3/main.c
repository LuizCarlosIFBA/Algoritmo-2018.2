#include <stdio.h>

void main(){
	int dia,mes,ano;
	scanf("%i %i %i",&dia,&mes,&ano);
	switch(mes){
		case 1:printf("Você nasceu %02i de Janeiro de %i \n",dia,ano);
			break;
		case 2:printf("Você nasceu %02i de Fevereiro de %i \n",dia,ano);
			break;
		case 3:printf("Você nasceu %02i de Março de %i \n",dia,ano);
			break;
		case 4:printf("Você nasceu %02i de Abril de %i \n",dia,ano);
			break;
		case 5:printf("Você nasceu %02i de Maio de %i \n",dia,ano);
			break;
		case 6:printf("Você nasceu %02i de Junho de %i \n",dia,ano);
			break;
		case 7:printf("Você nasceu %02i de Julho de %i \n",dia,ano);
			break;
		case 8:printf("Você nasceu %02i de agosto de %i \n",dia,ano);
			break;
		case 9:printf("Você nasceu %02i de setembro de %i \n",dia,ano);
			break;
		case 10:printf("Você nasceu %02i de Outubro de %i \n",dia,ano);
			break;
		case 11:printf("Você nasceu %02i de Novembro de %i \n",dia,ano);
			break;
		case 12:printf("Você nasceu %02i de Dezembro de %i \n",dia,ano);
			break;
	default:"Mês inválido";
	}
}	

