/*Crie um vetor de tamanho 10, permita que o usu�rio o preencha e informe :
	- A soma e m�dia dos pares;
	- A soma e m�dia dos impares;
	- O total de n�meros pares;
	- O total de n�meros impares;*/
	# include<stdio.h>
#include<locale.h>
	int main(){
		setlocale(LC_ALL,"");
		int vet[10];
		int i, Q, soma, soma_i,Qi, Mi,Mp;
	for(i=0;i<10;i++){ 
        printf("Digite os n�meros do primeiro vetor [%d]:",i);
        scanf("%d",&vet[i]);
    	}
    for(i=0;i<10;i++){
    	if( vet[i]%2==0){
			soma = soma+ vet[i];
			Q ++;
	
		}else{ 
			soma_i= soma_i+ vet[i];
			Qi++;
		}
	}
    Mp= soma/Q;
    Mi= soma_i/Qi;
    printf("A quantidade  de n�meros pares � de :%d\n",Q);
    printf("A soma dos pares �:%d\n", soma);
    printf("A m�dia dos pares � de :%d\n", Mp);
    printf("A quantidade de n�meros impares � de :%d\n", Qi);
    printf(" A soma de n�meros �mpares � de :%d\n", soma_i);
    printf("A m�dia dos �mpares � de :%d\n",Mi);
    
    






}
