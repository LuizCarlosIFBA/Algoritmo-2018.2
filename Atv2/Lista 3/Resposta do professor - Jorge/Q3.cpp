#include <stdio.h>
#include <stdlib.h>
/*
Escreva que solicite ao usuário um número inteiro positivo (valide o valor digitado) 
e imprima todos os divisores do número informado (excetuando o próprio número).
*/
main() {
       // declaração das variáveis
       int n,i; 
       // solicita e valida os números
       do {
           system("cls");
           printf("Informe um numero positivo maior que zero\n");
           scanf("%i",&n);
       } while (n<=0);
       // imprime todos os divisores de n
       i=1;
       while(i<n) {
          if (n%i==0) {
          	printf("%i\n",i);
          }
          i++;
       }
       system("pause");
}
