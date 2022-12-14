#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include "imagem.h"
char palavras[100][100]; 
char letraEscolhida [100];
char certo[100];
int i;

//imprime linha contendo o underscore ou letra
void imprimeUnder(char under[]){
	system("cls"); 
	for(i=0; under[i]!='\0'; i++){
		printf("%c ", under[i]);
	}
	printf("\n");
}

//Validadores caso tenha perdido ou ganhado
ganhou(char under[]){
   printf("%s \n",under);	
   printf("GANHOU! \n");
   system("pause");
}

perdeu(char palavra[],int x,int tamanho){
   printf("Voce perdeu, a palavra correta era: %s\n", palavra);
   printf("As letras que voce digitou foram :%s\n",letraEscolhida);
   printf("As letras nao descobertas sao : ");
   bool igual = true;

   for(int i=0;i<=tamanho;i++){ 
   	     for(int j=0;j<=tamanho;j++){ 	
       		if(palavras[x][i]!=certo[j]){
	   				igual = false; 		
	   		}else{
			      igual = true; 
				  break; 
				}
		 }
		 
		 if(!igual)
		 	printf("%c",tolower(palavras[x][i]));
			 	
	}
   	
	
	printf("\n ");
   	system("pause");
}
//____________________________________________________________________//

//Todo jogo se concentra aqui, alem de retornar o valor dos resultados 
jogo(char palavraEscolhida[],int x){
   char underscores[100]; // mostra _ou os acertos
   int i=0;
   int tamanho = strlen(palavraEscolhida)-1;
   
   while(i<tamanho){
   		underscores[i++] = '_';
   }
   underscores[i] = '\0';
   int vida = 7; 
   
   bool acertou;
   int acertos = 0; 
  
   int posi=0;
   while(vida > 0){
   	
      //printf("%s E a palavra escolhida\n",palavraEscolhida);
	  acertou = false;
      if(vida == 7 && acertos == 0){
         imprimeUnder(underscores); 
         system("cls");
      }
      printf("\nDigite uma letra(so aceita as pertencentes ao alfabeto ingles)\n");
      do{
         
         scanf("%c", &letraEscolhida[posi]); 
         fflush(stdin);
         letraEscolhida[posi] = toupper(letraEscolhida[posi]);
         printf(!isalpha(letraEscolhida[posi])?"Caracter invalido! Digite novamente\n":" \n");
      }while(!isalpha(letraEscolhida[posi])); 
      
      for(int i=0; palavraEscolhida[i] != '\0'; i++){
         if(palavraEscolhida[i] == letraEscolhida[posi]){
            underscores[i] = letraEscolhida[posi]; 
            acertou = true; 
            acertos++;
         }
      }
	
      if(!acertou){
         vida--;
         printf(" Voce tem mais %d chances\n",vida);
		 errei();
	  }else {
	  		vida--;
         	printf(" Voce tem mais %d chances\n",vida);
	  		acertei();
	  		certo[posi] = letraEscolhida[posi];
	  }
      if(acertos == tamanho){
	  	ganhou(underscores);
		exit(0);	
	  }
      imprimeUnder(underscores); 
      posi++;
   }
   perdeu(palavraEscolhida,x,tamanho);
}

//Inicia o jogo e escolhe a palavra
iniciar(){
   FILE* arquivo = fopen("palavras.txt", "r");
   if(arquivo != NULL){
      int i = 0;
      while(fgets(palavras[i++], 100, arquivo)); // captura todas as linhas do arquivos
      srand(time(NULL)); 
      int x= rand()%100; 
      jogo(palavras[x],x); //escolhe e passa as palavras aleat?rias para o jogo
      fclose(arquivo);
   }
   else{
      printf("Arquivo palavras.txt nao foi aberto corretamente\n");
      exit(0);
   }
}
