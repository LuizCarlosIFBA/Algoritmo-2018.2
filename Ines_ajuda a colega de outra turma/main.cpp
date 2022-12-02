#include <stdio.h>
#include <stdlib.h>
int numero[16];

ler(){
	for(int i =0;i<16;i++){
		//Não usei 1º porque tive problema com o ASCII, ele 
		//não aparece nesse formato
		printf("Escreva o numero da posicao %i \n",i+1);
		scanf("%i",&numero[i]);
	}	    
}

imprimir(){
	for(int i=0;i<16;i++)
		printf("%i ",numero[i]);
	printf("\n");	
}

buscar(){
	int num;
	printf("Digite um numero\n");
	scanf("%i",&num);
	int cont = 0;
	for(int i=0;i<16;i++)
		if(num== numero[i])
				cont++;
	printf("O numero informado aparece %i vezes\n",cont);	
}

criarMatriz(){
	//ordenar o vetor
	int aux = 0;
	for(int i=0;i<3;i++)
		for(int j=1;j<4;j++)
			if(numero[i]>numero[j]){
				aux =numero[i];
				numero[i]=numero[j];
				numero[j]=aux;				
			}
		
	int y = 0;
	int mat[4][4];
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			mat[i][j]=numero[y++];		
}

int menu(){
	printf("Faça sua escolha\n");
	printf("1 - Imprimir vetor\n");
	printf("2 - Criar matriz 4x4 com os valores do vetor de forma ascendente\n");
	printf("3 - Verificar quantas vezes o numero digitado aparece no vetor\n");
	printf("4 - Ler dados\n");
	
	int op;
	int continuar = 1;
	do{  
	    do{
			scanf("%i",&op);
			printf(op<1 || op>4?"Escreva apenas numeros de 1 ate 4! Por favor, digite novamente\n":"\n");
		}while(op<1 || op>4);
		
		switch(op){
			case 1: 
			       imprimir();
				   break;
			case 2:
				   criarMatriz();
				   break;
			case 3:
				   buscar();
				   break;
			case 4:ler();
				   break;
			default :"Valores invalidos, digite apenas 1,2,3 ou 4";	   	
		}
		
		do{
			printf("Deseja continuar?(1- sim, 2-nao)\n");
			scanf("%i",&continuar);
			printf(continuar<1 || continuar>2?"Digite apenas 1 ou 2":" \n");
		  }while(continuar<1 || continuar>2);
		  system("cls");
		  printf("Faça sua escolha\n");
		  printf("1 - Imprimir vetor\n");
     	  printf("2 - Criar matriz 4x4 com os valores do vetor\n");
	      printf("3 - Verificar quantas vezes o numero digitado aparece no vetor de forma ascendente\n");
	      printf("4 - Ler dados\n");
	      if(continuar == 2){//tive que fazer essa gambiarra,senão o programa não encerrava  
	      	system("pause");
	      	exit(0);
		  }
	}while(continuar == 1);	
	system("cls");
}

main(){
	menu();	
	system("pause");
}


