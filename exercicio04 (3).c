#include <stdio.h>
#include "vetlib.h"
//Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, crie uma função que receba
//esse vetor e conte quantos valores impares existem no vetor. Retorne a quantidade de impares.
int main(){
	int vet[100];
	int n;
	int quantidade;
	
	printf("N: ");
	scanf("%d", &n);
	gerarVetInt(vet, n, 0, 20);
	
	printf("\nVetor: ");
	printVetInt(vet, n);
	
	printf("\nImpares: ");
	quantidade = printImparesVet(vet, n);
	
	printf("\nQuantidade de Impares: %d", quantidade);
	
	return 0;
}


	
	

