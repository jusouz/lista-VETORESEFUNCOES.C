#include <stdio.h>
#include <stdlib.h>
#include "vetlib.h"
//Dado um vetor de n números reais, crie uma função que retorne o maior elemento do vetor, apresente o
//vetor.

int main (){
	int n, i;
	printf ("entre com a quantidade de vetor : ");
	 scanf("%d",&n);
	 float vetor[n];
	 
	for(i=0;i<n;i++){
		scanf("%f",&vetor[i]);
		
	}
		float maior=0;
	
	for (i=0;i<n;i++){
	 	if(maior<vetor[i]){
	 	maior= vetor[i];
		 	
		 }
		
		 }
		 printf("maior numero : %f",maior);

 	return 0;
	 }
	 
