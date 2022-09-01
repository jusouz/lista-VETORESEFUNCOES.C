#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que leia ou gere um vetor de N elementos inteiros (N deve ser informado pelo usuário
//e o limite do vetor é 100) e passe o mesmo como parâmetro para uma função que retorne a soma de seus
//elementos.

int soma(int vetor[], int N) {
	int soma = 0;
	int i;
	for (i = 0; i < N; i++) {
		soma = soma + vetor[i];
	}
	return soma;
}

int main() {
	
	int N;
	
	printf("Valor de N: ");
	scanf("%d", &N);
	
	while (N < 1 || N > 100) {
		printf("Digite um valor valido\n");
		getch();
		system("cls");
		printf("Valor de N: ");
		scanf("%d", &N);
	}
	
	int vetor[N];
	
	int i;
	for (i = 0; i < N; i++) {
		printf("Valor de vetor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	
	/*
	for (i = 0; i < N; i++) {
		printf("Vetor[%d] = %d\n", i, vetor[i]);
	}
	*/
	
	printf("Soma do vetor: %d\n", soma(vetor, N));
	
	return 0;
}
