#include <stdio.h>
#include "vetlib.h"
#include <string.h>
//Leia um vetor de caracteres (limite 100) utilizando a fun��o gets(). Utilize a fun��o strlen (Voc� deve incluir a
//biblioteca string.h) para obter a quantidade de elementos do vetor de caracteres. Escreva o vetor lido em
//ordem inversa.

void printInverVChar(char v[], int n){
	int i;
	n--;
	for (i = n; i >= 0; i--)
		printf("%c ", v[i]);
}

int main(){
	char v[100];
	gets(v);
	int n =strlen(v);
	printInverVChar(v,n);
	int i;
	n--;
	return 0;
}

