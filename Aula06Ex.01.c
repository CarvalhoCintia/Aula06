
/*1 - Crie dois vetores num�ricos de dimens�o 5 com valores informados pelo usu�rio.
Apresente a soma do primeiro vetor com o inverso do segundo.*/
#include<stdio.h>
#include<locale.h>
	int main(){
		setlocale(LC_ALL,"");
    int vet1[5],vet2[5],i;
    int vet3[5];
    for(i=0;i<5;i++){ 
        printf("Digite os n�meros do primeiro vetor [%d]:",i);
        scanf("%d",&vet1[i]);
    }
    printf("\n");
	for(i=4; i>=0; i--){
		printf("Digitar os n�mero do segundo vetor [%d]:", i);
		scanf("%d", &vet2[i]);
	}
	
	for(i=0;i<5;i++){
		vet3[i]= vet1[i]+vet2[i];
	}
	printf("A soma do vetor1 com o vetor2 � de:\n");
	for(i=0; i<5; i++){
		printf("[%d]: %d\n", i, vet3[i]);
	}

   
}
