
#include <stdio.h>
#include "vetlib.h"
//Tentando descobrir se um dado era viciado, um dono de cassino honesto o lançou N vezes. Dados os n
//resultados dos lançamentos que devem ser armazenados em um vetor, determinar o número de ocorrências
//de cada face.

void scanVetInt(int vet[], int n){
	int i;
	int elemento;
	for (i = 0; i < n; i++){
		scanf("%d", &elemento);
		vet[i] = elemento;
	}
}
int main(){
	int v[100], qtd[6] = {0, 0, 0, 0, 0, 0};
	int n;
	printf("N: ");
	scanf("%d", &n);
	scanVetInt(v, n);
	
	int valor;
	int i;
	
	for(i = 0; i < n; i++){
		valor = v[i];
		qtd[valor-1]++;
	}
	
	printf("Vetor:\n");
	printVet(v, n);
	printf("\n");
	
	for(i = 1; i <= 6; i++)
		printf("\nTotal de resultados para %d: %d", i, qtd[i-1]);
		
	return 0;
}
