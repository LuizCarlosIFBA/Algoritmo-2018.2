/* 
Escreva um programa que efetue a soma de todos os números ímpares 
em um intervalo (a,b) informado pelo usuário.
*/
#include <stdio.h>
#include <stdlib.h>

main() {
	int limiteInferior,limiteSuperior,soma;
	
	do {
		printf("Informe o limite inferior do intervalo");
		scanf("%i",&limiteInferior);	
		printf("Informe o limite superior do intervalo");
		scanf("%i",&limiteSuperior);	
	} while (limiteInferior>limiteSuperior);
	soma=0;
	for (int i=limiteInferior+1;i<limiteSuperior;i++){
			if (i%2!=0) {
				soma=soma+i;
		}	
	}
	printf("%i\n",soma);
	system("pause");
}
