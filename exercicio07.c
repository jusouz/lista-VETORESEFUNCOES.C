#include <stdio.h>
#include "vetlib (3).h"
//Escreva um programa que leia ou gere dois vetores de N posições e faça a multiplicação dos elementos de
//mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

int main (){
int i;
	srand(time(NULL)); // inicializa gerador
	int v1[20];
	int v2 [20];
	int vResposta[20];
	int n;
	
	  
	  printf ("digite o tamanho do vetor :");
	  scanf("%d",&n);
	  geraVet(v1,n);
	  geraVet(v2,n);
	  for(i=0;i<n;i++){
	   vResposta[i]=v1[i]*v2[i];

	}
		 
	printVet(v1,n);
	printVet(v2,n);
	printVet(vResposta,n);
	}


	


