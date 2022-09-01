#include <stdio.h>
#include <stdlib.h>

//mostra na tela todos os elementos de um vetor inteiro
void printVetInt(int vet[], int n){
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", vet[i]);
}
//mostra na tela todos os elementos de um vetor real
void printVetFloat(float vet[], int n){
	int i;
	for (i = 0; i < n; i++)
		printf("%.2f ", vet[i]);
}
//mostra na tela todos os elementos de um vetor literal
void printVetChar(char vet[], int n){
	int i;
	for (i = 0; i < n; i++)
		printf("%c ", vet[i]);
}

//gera uma nova semente para criar numeros aleatórios 
//***não use para sistemas que necessitem de um mínimo de segurança***
void gerarSemente(){
	static int contador = 0;
	srand (time(NULL)+contador);
	contador++;
}
//cria um vetor de n elementos inteiros com números aleatórios
//o mínimo e o máximo devem ser passados para a função
void gerarVetInt(int vet[], int n, int min, int max){
	int i;
	gerarSemente();
	for (i = 0; i < n; i++){
		int number = rand()%(max + 1 - min) + min;
		vet[i] = number;
	}
}

//recebe valores inteiros passados pelo usuário e salva em um vetor
void scanVetInt(int vet[], int n){
	int i;
	int elemento;
	for (i = 0; i < n; i++){
		scanf("%d", &elemento);
		vet[i] = elemento;
	}
}
//recebe valores reais passados pelo usuário e salva em um vetor
void scanVetFloat(float vet[], int n){
	int i;
	float elemento;
	for (i = 0; i < n; i++){
		scanf("%f", &elemento);
		vet[i] = elemento;
	}
}
//recebe caracteres passados pelo usuário e salva em um vetor
void scanVetChar(char *vet, int n){
	int i;
	char elemento;
	for (i = 0; i < n; i++){
		scanf(" %c", &elemento);
		vet[i] = elemento;
		fflush(stdin);
	}
}

//retorna a soma de um vetor inteiro
int somaVetInt(int vet[], int n){
	int i, soma = 0;
	for (i = 0; i < n; i++)
		soma += vet[i];
	
	return soma;
}
//retorna a soma de um vetor real
float somaVetFloat(float vet[], int n){
	int i;
	float soma = 0;
	for (i = 0; i < n; i++)
		soma += vet[i];
		
	return soma;
}

//retorna o maior elemento de um vetor real
float maiorElementoVet(float vet[], int n){
	int i;
	float maior = vet[0];
	for (i = 0; i < n; i++)
		if (vet[i] > maior)
			maior = vet[i];
	
	return maior;
}
//retorna o menor elemento de um vetor real
float menorElementoVet(float vet[], int n){
	int i;
	float menor = vet[0];
	for (i = 0; i < n; i++)
		if (vet[i] < menor)
			menor = vet[i];
	
	return menor;
}

//escreve na tela elementos ímpares de um vetor inteiro e retorna a quantidade deles
int printImparesVet(int vet[], int n){
	int i, quantidade = 0;
	for (i = 0; i < n; i++)
		if (vet[i]%2 == 1){
			printf("%d ", vet[i]);
			quantidade++;
		}
	return quantidade;
}
//escreve na tela elementos pares de um vetor inteiro e retorna a quantidade deles
int printParesVet(int vet[], int n){
	int i, quantidade = 0;
	for (i = 0; i < n; i++)
		if (vet[i]%2 == 0){
			printf("%d ", vet[i]);
			quantidade++;
		}
	return quantidade;
}

//transforma um vetor DNA em seu complementar
void gerarVetComplementarDNA(char* vet, int n){
	int i;
	for (i = 0; i < n; i++)
		if (vet[i] == 'A')
			printf("T ");
		else if (vet[i] == 'T')
			printf("A ");
		else if (vet[i] == 'G')
			printf("C ");
		else if (vet[i] == 'C')
			printf("G ");
}

//procura um valor em um vetor inteiro, retornando seu índice quando encontrado ou -1 quando não encontrado
int procurarValorVetInt(int vet[], int n, int valor){
	int i;
	for (i = 0; i < n; i++)
		if (vet[i] == valor)
			return i;
	
	return -1;
}
//multiplica os valores de dois vetores inteiros e coloca o resultado em um terceiro vetor
void multiplicarDoisVetoresInteiros(int vetor1[], int vetor2[], int novoVetor[], int n){
	int i;
	for (i = 0; i < n; i++)
		novoVetor[i] = vetor1[i] * vetor2[i];
	
}

//mostra na tela, em ordem inversa, todos os elementos de um vetor inteiro 
void printInverVetChar(char vet[], int n){
	int i;
	n--;
	for (i = n; i >= 0; i--)
		printf("%c ", vet[i]);
}

//procura um valor em um vetor inteiro, retornando a quantidade de vezes que ele é encontrado
int qtdValorEmVetInt(int vet[], int n, int valor){
	int i, qtd = 0;
	for (i = 0; i < n; i++)
		if (vet[i] == valor)
			qtd++;
	

	return qtd;
}
//remove o primeiro valor igual ao valor especificado de um vetor real
void removerElemento(float vet[], int n, float elemento){
	int i, j;
	float newVet[100];
	int removeu = 0;
	for (i = 0, j = 0; i < n; i++){
		if (vet[i] != elemento || removeu){
			newVet[j] = vet[i];
			j++;
		}
		else 
			removeu = 1;
	}
	for (i = 0; i < n; i++)
		vet[i] = newVet[i];
}



