/* 
Escreva um programa que solicite um número inteiro positivo e imprima o fatorial 
do número informado.
*/
#include <stdlib.h>
#include <stdio.h>
main() {
       // declaração das variáveis
       int numero,fatorial;
       // solicita e valida o número
       do {
           system("cls");
           printf("Informe um numero positivo\n");
           scanf("%i",&numero);
       } while (numero<0);
 	   fatorial=1;
       for (int parcela=numero;parcela>=1;parcela--) {
        	 fatorial=fatorial*parcela;      	
       }
       printf("Fatorial=%i\n",fatorial);
       system("pause");
}
