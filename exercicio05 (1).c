
#include <stdio.h>
#include <string.h>
//Leia um vetor DNA de caracteres para receber as letras A, T, C e G que representam as bases do DNA. Este
//vetor será responsável por representar uma fita de um gene de limite de 50 bases. Gere o vetor complementar
//ao vetor DNA e o apresente (Lembrando as bases complementares A=T C=G).

void compVet(char dna[],char comp[]){
	
	int tamanho = strlen (dna);
	int i;
	for(i=0;i<tamanho;i++){
	  if(dna[i]=='A'){
		    comp[i]='T';
	  }
	   else if (dna[i]=='T'){
	        comp[i]='A';
	  }
	  else if (dna[i]=='C'){
	       comp[i]='G';
      }
	       else if (dna[i]=='G'){
	       comp[i]='C';
      }
    }
}

int main(){
    char dna[50];
    char comp[50];
    printf("entre com a seg DNA:");
    scanf("%50s",dna);
    strupr(dna);
    compVet(dna,comp);
     printf("dna: %s\n",dna);
     printf("comp : %s\n",comp);
	return 0;
}
