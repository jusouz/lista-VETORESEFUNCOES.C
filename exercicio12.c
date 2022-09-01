#include <stdio.h>
#include "vetlib.h"
//O Carnaval � um feriado celebrado normalmente em fevereiro; em muitas cidades brasileiras, a principal atra��o s�o
//os desfiles de escolas de samba. As v�rias agremia��es desfilam ao som de seus sambas-enredos e s�o julgadas
//pela liga das escolas de samba para determinar a campe� do Carnaval.
//Cada agremia��o � avaliada em v�rios quesitos; em cada quesito, cada escola recebe cinco notas que variam de 5,0
//a 10,0. A nota final da escola em um dado quesito � a soma das tr�s notas centrais recebidas pela escola, excluindo a
//maior e a menor das cinco notas.
//Como existem muitas escolas de samba e muitos quesitos, o presidente da liga pediu que voc� escrevesse um
//programa que, dadas as notas da agremia��o, calcula a sua nota final num dado quesito.
//Entrada
//A entrada cont�m uma �nica linha, contendo cinco n�meros Ni (1 = i = 5), todos com uma casa decimal, indicando as
//notas recebidas pela agremia��o em um dos quesitos.
//Sa�da
//Seu programa deve imprimir uma �nica linha, contendo um �nico n�mero com exatamente uma casa decimal, a nota
//final da escola de samba no quesito considerado.
//Exemplos
//Entrada
//6.4 8.2 8.2 7.4 9.1
//Sa�da
//23.8
//Entrada
//10.0 10.0 5.0 5.0 10.0
//Sa�da
//25.0

int main(){
	float vet[5];
	int n = 5;

	scanVetFloat(vet, n);

	float maior = maiorElementoVet(vet, n);
	removerElemento(vet, n, maior);
	n--;
	
	float menor = menorElementoVet(vet, n);
	removerElemento(vet, n, menor);
	n--;
	
	printf("\nNotas a serem consideradas:\n");
	printVetFloat(vet, n);
	
	float nota = somaVetFloat(vet, n);
	printf("\n\nNota Final: %.2f", nota);
}
