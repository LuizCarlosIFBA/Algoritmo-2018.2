#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que solicite dois números inteiros positivos e determine 
se estes números são "amigos". Dois números são amigos se um número é igual a soma 
dos divisores do outro e vice-versa.
Na soma dos divisores, exclui-se o próprio número.
Por exemplo, os números 220 e 284 são "amigos".
Divisores de 220: 1+2+4+5+10+11+20+22+44+55+110=284 
Divisores de 284 - 1+2+4+71+142=220
*/
main() {
       // declaração das variáveis
       int n1,n2,somaDivN1,somaDivN2,i; 
       // solicita e valida os números
       do {
           system("cls");
           printf("Informe um numero positivo maior que zero\n");
           scanf("%i",&n1);
       } while (n1<=0);
       do {
           system("cls");
           printf("Informe outro numero positivo maior que zero\n");
           scanf("%i",&n2);
       } while (n2<=0);
       // soma todos os divisores de n1
       somaDivN1=0;
       i=1;
       while(i<n1) {
          if (n1%i==0) {
              somaDivN1=somaDivN1+i;                
          }
          i++;
       }       
       // soma todos os divisores de n2
	  i=1;
	  somaDivN2=0;
      while(i<n2) {
          if (n2%i==0) {
              somaDivN2=somaDivN2+i;                
          }
          i++;
       }       

       if (somaDivN1==n2 && somaDivN2==n1) {
          printf("%i e %i sao amigos\n",n1,n2);               
       }
       else {
          printf("%i e %i nao sao amigos\n",n1,n2);               
       }
       system("pause");
}
