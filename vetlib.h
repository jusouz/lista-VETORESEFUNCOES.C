void geraVet(int v[], int n){
	int i;
	srand(time(NULL)); // inicializa gerador
	for(i=0;i<n;i++)
		v[i]=rand()%20; 
}
//--------------------
void leiaVetor(int v [],int n ){
	int i;
	for(i=0;i<n;i++)
	scanf ("%d",&v[i]);
}
void printVet(int v[], int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d |",v[i]);
	printf("\n");	
}
//----------------------
int somaVet(int v[], int n){
	int i,soma=0;
	for(i=0;i<n;i++)
		soma+=v[i];
	return soma;	
}
void verificarMaior (float vetor[],int n){
	float maior=vetor[0];
	int i;
	printf ("%f",vetor[1]);
	for (i=0;i<n;i++){
	 	if(maior<vetor[i]){
	 	maior= vetor[i];
		 	
		 }
		
		 }
		 printf("maior numero : %f",maior);
}
void verificarMenor (float vetor[],int n){
		float menor=vetor[0];
		int i;
	
	for (i=0;i<n;i++){
	 	if(menor<vetor[i]){
	 	menor= vetor[i];
		 	
		 }
		
		 }
		 printf("menor numero : %f",menor);

}
