
/*1 - Crie dois vetores num�ricos de dimens�o 5 com valores informados pelo usu�rio.
Apresente a soma do primeiro vetor com o inverso do segundo.*/
#include<stdio.h>
#include<locale.h>
	int main(){
		setlocale(LC_ALL,"");
    int v1[5],v2[5],i;
    for(i=0;i<5;i++){ 
        printf("Digite os n�meros do primeiro vetor [%d]:",i);
        scanf("%d",&v1[i]);
    }
    printf("\n");
	for(i=0; i<5; i++){
		printf("Digitar os n�mero do segundo vetor [%d]:", i);
		scanf("%d", &v2[i]);
	}
	//Processamento
		for(i=0;i<5;i++){
			printf("%d\n",v1[i]+v2[4-i]);		
	}

   
}
