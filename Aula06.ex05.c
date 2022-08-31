/*Faça um programa que leia 10 valores inteiros em qualquer ordem e os classifique em ordem crescente.*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");

	 int i, contador = 0, troca, copia, vetor[10];
	
    printf("Digite 10 números:\n");
    for(i = 0; i < 10; i++){
        scanf("%d",&vetor[i]);
    }

    do{
        troca = 0;
        contador++; 
        for(i = 0; i < 9; i++){ 
            if(vetor[i] > vetor[i+1]){
                copia = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = copia;
                troca = 1;
            }
        }
    }while(troca);

    printf("\nOrdem Crescente\n");
    for(i = 0; i < 10; i++){
        printf("%3d ", vetor[i]);
    }

 }


