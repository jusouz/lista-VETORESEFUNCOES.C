#include <stdio.h>
#include <string.h>
#include <math.h>
//Uma brincadeira que crianças adoram é se comunicar na língua do P,
//acrescentando pê antes de cada sílaba, como uma forma de código para dificultar que outras
//pessoas entendam a conversa (pê-va pê-mos pê-no pê-ci pê-ne pê-ma?). Jacy e Kátia adaptaram
//a língua do P para mensagens eletrônicas, acrescentando a letra P minúscula 'p' antes de cada
//letra das palavras de uma mensagem. Um exemplo de mensagem codificada e a respectiva
//mensagem decodificada é mostrada na figura abaixo.
//Sua tarefa é escrever um programa que decodifique uma mensagem escrita na língua do P eletrônica de
//Jacy e Kátia.
//Entrada A entrada consiste de uma única linha, contendo uma mensagem escrita na língua do P
//eletrônica de Jacy e Kátia.
//Saída Seu programa deve produzir uma única linha, contendo a mensagem decodificada.
//Restrições A mensagem contém apenas letras maiúsculas e minúsculas e espaços em branco. A
//mensagem tem entre 1 e 1000 caracteres. Não há dois espaços em branco consecutivos na mensagem.
//Exemplos
//Entrada
//pUpm pfpiplpmpe plpepgpapl
//Saída
//Um filme legal
//Entrada
//pA pppapppa pdpo pPpapppa
//Saída
//A papa do Papa
//Dicas: Leia seu vetor de caracteres com a função gets, pegue o tamanho do mesmo
//utilizando a função strlen. Para cada posição verifique o caractere armazenado antes de
//apresenta-lo.

int main(){
	char msg[50];
	printf("Msg codificada: ");
	gets(msg);

	int i, n;
	n = strlen(msg);
	for(i = 0; i < n; i++){
		if(msg[i] != 'p') {
			putchar(msg[i]);
			continue;
		}
		putchar(msg[1+i]);
		i++;
	}
}
