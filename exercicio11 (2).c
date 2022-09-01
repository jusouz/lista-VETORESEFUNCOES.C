#include <stdio.h>
#include <string.h>
#include <math.h>
//Uma brincadeira que crian�as adoram � se comunicar na l�ngua do P,
//acrescentando p� antes de cada s�laba, como uma forma de c�digo para dificultar que outras
//pessoas entendam a conversa (p�-va p�-mos p�-no p�-ci p�-ne p�-ma?). Jacy e K�tia adaptaram
//a l�ngua do P para mensagens eletr�nicas, acrescentando a letra P min�scula 'p' antes de cada
//letra das palavras de uma mensagem. Um exemplo de mensagem codificada e a respectiva
//mensagem decodificada � mostrada na figura abaixo.
//Sua tarefa � escrever um programa que decodifique uma mensagem escrita na l�ngua do P eletr�nica de
//Jacy e K�tia.
//Entrada A entrada consiste de uma �nica linha, contendo uma mensagem escrita na l�ngua do P
//eletr�nica de Jacy e K�tia.
//Sa�da Seu programa deve produzir uma �nica linha, contendo a mensagem decodificada.
//Restri��es A mensagem cont�m apenas letras mai�sculas e min�sculas e espa�os em branco. A
//mensagem tem entre 1 e 1000 caracteres. N�o h� dois espa�os em branco consecutivos na mensagem.
//Exemplos
//Entrada
//pUpm pfpiplpmpe plpepgpapl
//Sa�da
//Um filme legal
//Entrada
//pA pppapppa pdpo pPpapppa
//Sa�da
//A papa do Papa
//Dicas: Leia seu vetor de caracteres com a fun��o gets, pegue o tamanho do mesmo
//utilizando a fun��o strlen. Para cada posi��o verifique o caractere armazenado antes de
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
