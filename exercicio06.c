#include <stdio.h>
#include "vetlib.h"
//Escreve um programa que sorteio, aleatoriamente, N números e armazene estes em um vetor. Em seguida, o
//usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. Se
estiver, diga a posição que está.
int main (void){
	
	 int v [100];
	 int i;
	 int n,num;
	 scanf("%d",&n);
	 geraVet(v,n);
	 printf(" informe o numero ");
	 scanf("%d",&num);
	 
	for(i=0;i<n;i++){
	if (v[i]==num){
		printf("tem numero %d na posicao %d \n\n",num,i);
		printVet(v,n);
		return 0;
	}
	}
	printf (" esse numero nao tem \n\n");     

        printVet(v,n);
	}
	
	



	 
