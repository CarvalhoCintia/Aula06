/*Crie um vetor de tamanho 10, permita que o usuário o preencha e informe :
	- A soma e média dos pares;
	- A soma e média dos impares;
	- O total de números pares;
	- O total de números impares;*/
	# include<stdio.h>
#include<locale.h>
	int main(){
		setlocale(LC_ALL,"");
		int vet[10];
		int i, Q, soma, soma_i,Qi, Mi,Mp;
	for(i=0;i<10;i++){ 
        printf("Digite os números do primeiro vetor [%d]:",i);
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
    printf("A quantidade  de números pares é de :%d\n",Q);
    printf("A soma dos pares é:%d\n", soma);
    printf("A média dos pares é de :%d\n", Mp);
    printf("A quantidade de números impares é de :%d\n", Qi);
    printf(" A soma de números ímpares é de :%d\n", soma_i);
    printf("A média dos ímpares é de :%d\n",Mi);
    
    






}
