#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char p1[40];
	char p2[40];
	int tamanho,i;
	printf("Entre com um palavra 1:");
	gets(p1);
	printf("Entre com um palavra 2:");
	gets(p2);
	//scanf("%s",&p2);
	printf("P1: %s P2: %s \n",p1,p2);
	//****** strcmp *******
	printf("*** Verificando se as palavras sao iguais ***\n");
	if(strcmp(p1,p2)==0)
	  printf("Iguais\n");
	else 
	   if(strcmp(p1,p2)<0)  
	      printf("Diferentes: %s, %s \n",p1,p2);
	    else
		    printf("Diferentes: %s, %s \n",p2,p1);
	getch();	    
	//******** strlen *****************
	printf("*** Quantidade de caracteres ***\n");
	 tamanho = strlen(p1);
	 printf("Tamanho de p1: %d\n",tamanho);	 
	 printf("Tamanho de p2: %d\n",strlen(p2)); 
	 getch();
	 // *** String é um vetor, podemos percorrer com um for ***
	 printf("***String eh um vetor, podemos percorrer com um for***\n");
	 for(i=0;i<tamanho;i++)
	 	printf("%c ",p1[i]);
	 printf("\n");
	 
	 printf("***String eh um vetor, podemos percorrer com um while***\n");
	 i=0;
	 while(p1[i]!='\0'){
	 	printf("%c ",p1[i]);
		i++;
	}//fim while
	 printf("\n"); getch();
	 //******strcpy ************************
	 printf("*** Copiando p2 para p1 ***\n");
	 strcpy(p1,p2);
	 puts(p1); puts(p2);  getch();
	 //******strcat ************************
	 printf("*** Concatenando as duas palavras em p1 ***\n");
     strcat(p1,p2);		  
	 puts(p1); getch();
	 //******* Uppercase e Lowercase *******
	 printf("*** Uppercase e Lowercase ***\n");
	 strupr(p1);
	 puts(p1);
	 strlwr(p1);
	 puts(p1);
	 p1[0] = toupper(p1[0]);
	 puts(p1); 
	 printf("%d %c\n", p1[0]+32,p1[0]+32);
	 
	return 0;
}
