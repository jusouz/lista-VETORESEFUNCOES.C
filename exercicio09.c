#include <stdio.h>
#include "vetlib.h"
//Receber um vetor de N posições do tipo inteiro verificar quantas vezes um dado valor informado pelo usuário
//se encontra no vetor. Apresente também todos elementos do vetor.
int encontrarOcorrencia(int v[],int n,int num){
	int i;
	int ocorrencia=0;
	for(i=0;i<n;i++){
		if(v[i]==num){
			ocorrencia++;
		}
	}
	return ocorrencia;
}
int main(){
	int v[100];
	int n,i,num;
	printf("digite um n:");
	scanf("%d",&n);
	
	geraVet(v,n);
	printVet(v,n);
	somaVet (v,n);
	printf("insira  numero :");
	scanf("%d",&num);
	printf("ocorrencia:% d",encontrarOcorrencia(v,n,num));
	return 0;
	
}
