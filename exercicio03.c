#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"
//Dado um vetor de n números reais, crie uma função que retorne o menor elemento do vetor, apresente o
//vetor.

int main (){
	int n, i;
	printf ("entre com a quantidade de vetor : ");
	 scanf("%d",&n);
	 float vetor[n];
	 
	for(i=0;i<n;i++){
		scanf("%f",&vetor[i]);
		
	}
		float menor=vetor[0];
	
	for (i=0;i<n;i++){
	 	if(menor>vetor[i]){
	 	menor= vetor[i];
		 	
		 }
		
		 }
		 printf("menor numero : %f",menor);

 	return 0;
	 }
	 
