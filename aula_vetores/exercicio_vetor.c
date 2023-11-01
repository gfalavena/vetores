#include <stdio.h>
#include <stdlib.h>

void main(){
	int lista[10];
	int n;

	for(n=0; n<10; n++){
		printf("Escolha um numero para o vetor %d: \n=>",n);
		scanf("%d",&lista[n]);
}

for(n=0; n<10; n++){

	
	printf("\nPosicao %d:%d\n\n",n, lista[n]);
}

for(n=0; n<10; n++){
	
	lista[n]= (lista[n]*2);
	printf("\nPosicao %d:%d\n\n",n, lista[n]);
}
}
