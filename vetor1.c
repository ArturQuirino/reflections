#include <stdio.h>


void mostra_vetor(int vetor[]){
	int i;
	for(i=0;i<10;i++){
		printf("O %d número é %d \n",i+1,vetor[i]);
	}

}


void ordena_vetor(int vetor[]){
	int i,j;
	int aux;
	for(j=0;j<10;j++){	
		for(i=0;i<;i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i+1];
				vetor[i+1]=vetor[i];
				vetor[i]=aux;			
			}
		}
	}
	
	printf("O vetor ordenado é: \n");
	mostra_vetor(vetor);

}



int main(){
	int x[9];
	int i;
	for(i=0;i<10;i++){
		printf("Digite o %d número: ",i+1);
		scanf("%i", &x[i]);
	}

	printf("O vetor não ordenado é: \n");
	mostra_vetor(x);
	
	ordena_vetor(x);


	return 0;
}
