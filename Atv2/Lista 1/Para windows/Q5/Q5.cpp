#include <stdio.h>
#include <stdlib.h>

// void main(){
main(){
	int valorDinheiro;
	int cinco, dez, cinquenta, cem = 0;
	
	do{	printf("Obs: Nao e permitido valores menores que zero!!!\n");
		printf("Digite o valor que deseja sacar(Digite apenas multiplos de 5).\nCaso deseja sair digite '0'\n");
		scanf("%i",&valorDinheiro);
		printf(valorDinheiro%5!=0?"POR FAVOR!! DIGITE APENAS MULTIPLOS DE 5 \n":" ");
	    
		if(valorDinheiro==0){
			exit(0);
		}
		//valorDinheiro==0?exit(0):printf(" "); 
	}while(valorDinheiro%5!=0 || valorDinheiro<0);

        
	cem = valorDinheiro/100;
	cinquenta = (valorDinheiro%100)/50;
	dez = ((valorDinheiro%100)%50)/10;
	cinco = (((valorDinheiro%100)%50)%10)/5; 

	printf("\n%d nota(s) de cinco \n",cinco);
	printf("%d nota(s) de dez \n",dez);
	printf("%d nota(s) de cinquenta \n",cinquenta);
	printf("%d nota(s) de cem \n",cem);	 
	//system("pause"); 	
}

