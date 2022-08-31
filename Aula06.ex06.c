 /*Faça um programa que gere 100 valores inteiros aleatorios e os classifique em ordem crescente.*/
#include<stdio.h>
#include<locale.h>
#include<time.h>
int main(){
	setlocale(LC_ALL,"");
	 	srand(time(NULL));
	 int i, contador = 0, troca, copia, vetor[100];
	printf("100 valores aleatorios:\n");
	 for(i = 0; i < 100; i++){
		vetor[i] = rand()% 100;
		printf("%3d",vetor[i]);
	}
         
    do{
        troca = 0;
        contador++; 
        for(i = 0; i < 100; i++){ 
            if(vetor[i] > vetor[i+1]){
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = copia;
                troca = 1;
            }
        }
    }while(troca);

    printf("\nOrdem Crescente:\n");
    for(i = 0; i < 100; i++){
        printf("%3d ", vetor[i]);
    }

 }

   
 
 
 
 
 
 

